/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/w0_i.c (func_00407E10). See THIRD_PARTY.md. */
#include "types.h"
typedef long long s64;
s32 func_0016C8A8(u8 *p, s32 a1, s64 a2, s64 a3, s32 a4) {
    extern void func_001795E0();
    extern void func_00179658();
    s32 r = 0;
    func_001795E0();
    if (*(s8 *)(p + 2) == 0 || *(s8 *)(p + 2) == 3 || *(s8 *)(p + 2) == 9) {
        p[2] = 1;
        *(s32 *)(p + 0x30) = a1;
        *(s32 *)(p + 0x18) = a4;
        *(s64 *)(p + 0x20) = a3;
        *(s64 *)(p + 0x28) = a2;
        r = 1;
        *(s32 *)(p + 4) = 0;
        p[1] = 2;
    }
    func_00179658();
    return r;
}
