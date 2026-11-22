/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/decode_hex_length_004105D8.c (func_004105D8). See THIRD_PARTY.md. */
#include "types.h"
extern u32 D_003960D0[];

/* Decode the seven hexadecimal digits stored in an archive record. */
u32 func_00178958(const char *text) {
    u32 value;

    value = D_003960D0[(s8)text[0]];
    value = (value << 4) + D_003960D0[(s8)text[1]];
    value = (value << 4) + D_003960D0[(s8)text[2]];
    value = (value << 4) + D_003960D0[(s8)text[3]];
    value = (value << 4) + D_003960D0[(s8)text[4]];
    value = (value << 4) + D_003960D0[(s8)text[5]];
    value = (value << 4) + D_003960D0[(s8)text[6]];
    return value;
}
