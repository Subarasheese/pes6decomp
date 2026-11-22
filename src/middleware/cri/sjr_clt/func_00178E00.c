/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/s3w9e.c (func_00410A80). See THIRD_PARTY.md. */
#include "types.h"
extern s32 D_00510B00[];
extern void func_0016E848(s32 a, s32 *b, s32 c, s32 d, s32 e);

void func_00178E00(s32 a, s32 b, s32 *c) {
    s32 *d = D_00510B00;
    s32 x = c[0];
    d[0] = a;
    d[1] = b;
    d[2] = x;
    d[3] = c[1];
    func_0016E848(0x28, d, 4, 0, 0);
}
