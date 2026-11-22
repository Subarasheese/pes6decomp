/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/read_adx_header_fields_003F9AF0.c (func_003F9F80). See THIRD_PARTY.md. */
#include "types.h"
int func_0015A9C8(const u16 *p, int length, u16 *out) {
    if (length < 16)
        return -1;
    if (((u16)(((p[0] >> 8) & 255) | ((p[0] << 8) & 0xFF00))) != 0x8001)
        return -2;
    *out = ((u16)(((const u8 *)p)[3] | ((p[1] << 8) & 0xFF00))) + 4;
    return 0;
}
