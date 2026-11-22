/* compiler: ee-gcc-2.96-nsa-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/w190_a.c (func_004079F8). See THIRD_PARTY.md. */
#include "types.h"
typedef float f32;

/* EE GCC 2.96: ./tryee.sh src/w190_a.c sn */

extern u8 D_003C9E90[], D_003C9EB8[], D_003C9EE0[];
extern void func_0016A550(u8 *);
extern u8 *func_0016A8B0(s32);
extern void func_001C48E8(s32 *, s32, s32);
void func_0016C228(s32 a, s32 b) {
    s32 buf[5];
    u8 *o;
    if (a == 0) {
        func_0016A550(D_003C9E90);
        return;
    }
    if (b == 0) {
        func_0016A550(D_003C9EB8);
        return;
    }
    o = func_0016A8B0(a);
    if (o == 0) {
        func_0016A550(D_003C9EE0);
        return;
    }
    func_001C48E8(buf, 0, 20);
    buf[1] = b;
    if (*(void **)(o + 0x60) != 0)
        ((void (*)(s32 *, s32, s32, s32)) * (void **)(o + 0x60))(buf, 6, 0, 0);
}
