/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00207360(void *);
extern void func_001AFD70(s32);
extern void func_00209A00(void *, s32, s32);
extern char D_0058E7F0[];

void func_00B793D0(void) {
    u8 *p;
    s32 i;

    p = (u8 *)D_0058E7F0;
    for (i = 0; i < 0x16; i++, p += 0x240) {
        u8 *a0 = M2C_FIELD(p, u8 **, 4);
        if (a0[0x2C] != 0 && M2C_FIELD(p, f32 *, 0xE0) == 32767.0f) {
            func_00209A00(a0, 0x1BF, 0);
            func_00207360(M2C_FIELD(p, void **, 4));
            func_001AFD70(M2C_FIELD(M2C_FIELD(p, s32 **, 4), s32 *, 0));
            M2C_FIELD(p, f32 *, 0xE0) = M2C_FIELD(p, f32 *, 0x6C);
            M2C_FIELD(p, f32 *, 0xE8) = M2C_FIELD(p, f32 *, 0x70);
            M2C_FIELD(p, s32 *, 0x1C) = 0;
            M2C_FIELD(p, s8 *, 0x16) = 7;
            M2C_FIELD(p, s16 *, 0x18) = 0;
        }
    }
}
