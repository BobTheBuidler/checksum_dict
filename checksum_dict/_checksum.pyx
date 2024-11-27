def cchecksum(str norm_address_no_0x, str address_hash_hex_no_0x) -> str:
    
    # Declare memoryviews for fixed-length data
    cdef unsigned char[::1] norm_address_mv = bytearray(norm_address_no_0x.encode('ascii'))
    cdef unsigned char[::1] hash_bytes_mv = bytearray(address_hash_hex_no_0x.encode('ascii'))
    
    # Create a buffer for our result
    # 2 for "0x" prefix and 40 for the address itself
    cdef unsigned char buffer[42]
    buffer[0] = b'0'
    buffer[1] = b'x'

    # Handle character casing based on the hash value
    cdef int i
    cdef int address_char
    
    for i in range(40):
        address_char = norm_address_mv[i]
        
        if hash_bytes_mv[i] < 56:
            # '0' to '7' have ASCII values 48 to 55
            buffer[i + 2] = address_char
            
        else:
            # This checks if `norm_char` falls in the ASCII range for lowercase hexadecimal
            # characters ('a' to 'f'), which correspond to ASCII values 97 to 102. If it does,
            # the character is capitalized.
            buffer[i + 2] = address_char - 32 if 97 <= address_char <= 102 else address_char

    return bytes(buffer).decode('ascii')
