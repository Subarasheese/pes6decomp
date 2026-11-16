/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001F3D10(void *, s32);
extern void *func_001F40E0(s32, s32);
extern void *func_001EB1D0(void *, void *);
extern void func_001F3D80(void *, void *, s32);
extern void func_001F1EA0(void);
extern void func_001F4200(void);

void *func_001F1F10(void) {
    s32 sp20[4];
    u8 *p;
    s32 n;
    void *temp_v0;

    n = 0x10;
    p = (u8 *)sp20;
    do {
        *p = 0;
        n -= 1;
        p += 1;
    } while (n != 0);
    temp_v0 = func_001F40E0(0, 0x4C);
    func_001F3D80(temp_v0, sp20, 0);
    func_001F3D10(temp_v0, 0);
    M2C_FIELD(temp_v0, void **, 0x3C) = (void *)func_001F4200;
    M2C_FIELD(temp_v0, void **, 0x44) = (void *)func_001F1EA0;
    M2C_FIELD(temp_v0, void **, 0x48) = func_001EB1D0(temp_v0, (void *)func_001F4200);
    M2C_FIELD(temp_v0, u8 *, 1) = 0xFF;
    return temp_v0;
}
