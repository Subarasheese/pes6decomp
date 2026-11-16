/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_001F3D10(void *, u8);
extern void *func_001F4140(void *, s32, s32);
extern void func_001F3C00(void *, void *);
extern void func_001F3D80(void *, void *, s32);
extern void func_001F1FE0(void);
extern void func_001F2110(void);
extern void func_001F2180(void);

void *func_001F2050(void *arg0) {
    u8 sp20[16];
    s32 i;
    void *temp_v0;

    for (i = 0; i < 16; i++) {
        sp20[i] = 0;
    }
    if (arg0 == NULL) {
        return NULL;
    }
    temp_v0 = func_001F4140(arg0, 1, 0x60);
    func_001F3C00(temp_v0, (void *)func_001F2110);
    func_001F3D80(temp_v0, sp20, 0);
    func_001F3D10(temp_v0, 0);
    M2C_FIELD(temp_v0, void **, 0x3C) = (void *)func_001F2180;
    M2C_FIELD(temp_v0, void **, 0x40) = (void *)func_001F2110;
    M2C_FIELD(temp_v0, void **, 0x44) = (void *)func_001F1FE0;
    M2C_FIELD(temp_v0, u8 *, 1) = 0xFF;
    return temp_v0;
}
