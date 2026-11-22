/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/k6.c (func_00410540). See THIRD_PARTY.md. */
#include "types.h"
extern u8 D_003960B8[];

void func_001788C0(s32 v, u8 *o) {
    o[6] = D_003960B8[v & 0xF];
    v >>= 4;
    o[5] = D_003960B8[v & 0xF];
    v >>= 4;
    o[4] = D_003960B8[v & 0xF];
    v >>= 4;
    o[3] = D_003960B8[v & 0xF];
    v >>= 4;
    o[2] = D_003960B8[v & 0xF];
    v >>= 4;
    o[1] = D_003960B8[v & 0xF];
    v >>= 4;
    o[0] = D_003960B8[v & 0xF];
}
