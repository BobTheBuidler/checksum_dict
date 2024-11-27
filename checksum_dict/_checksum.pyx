from libc.string cimport memcpy


def cchecksum(str norm_address_no_0x, str address_hash_hex_no_0x) -> str:
    cdef int i
    cdef unsigned char buffer[42]  # 2 for "0x" prefix and 40 for the address itself

    # Encode the input strings to byte arrays
    cdef unsigned char norm_address_bytes[40]
    
    memcpy(
        norm_address_bytes,
        norm_address_no_0x.encode('ascii'),
        40,
    )

    cdef unsigned char hash_bytes[40]
    
    memcpy(
        hash_bytes,
        address_hash_hex_no_0x.encode('ascii'),
        40
    )

    # Set the "0x" prefix
    buffer[0] = '0'
    buffer[1] = 'x'

    # Handle character casing based on the hash value
    for i in range(40):
        if hash_bytes[i] < 56:  # '0' to '7' have ASCII values 48 to 55
            buffer[i + 2] = norm_address_bytes[i]
        else:
            buffer[i + 2] = norm_address_bytes[i] & 0xDF  # Convert to uppercase

    return bytes(buffer).decode('ascii')
