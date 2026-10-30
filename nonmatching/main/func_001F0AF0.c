/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F3B90(void *, s32);
extern s32 func_001F3D10(s32, u8);
extern void * func_001F4140(void *, s8, s32);
M2C_UNK func_001F3C00(void *, M2C_UNK *);           /* extern */
M2C_UNK func_001F3D80(void *, f32 *, void *);       /* extern */
s32 func_001F5140(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern char D_00399430[];
extern char D_00399434[];
extern char D_00399438[];
extern char D_0039943C[];
extern char D_003D2A60[];
extern u8 D_003E74BC;
extern u8 D_003E74BD;
extern u8 D_003E74BE;
extern u8 D_003E74BF;
extern M2C_UNK func_001F0A80;
extern M2C_UNK func_001F0C50;
extern M2C_UNK func_001F0ED0;

void *func_001F0AF0(void *arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    u8 sp3C;
    u8 sp3D;
    u8 sp3E;
    u8 sp3F;
    void *temp_v0;

    sp3C = D_003E74BC;
    sp3D = D_003E74BD;
    sp20 = (*(f32 *)D_00399430);
    sp24 = (*(f32 *)D_00399434);
    sp28 = (*(f32 *)D_00399438);
    sp2C = (*(f32 *)D_0039943C);
    sp3E = D_003E74BE;
    sp3F = D_003E74BF;
    if (arg0 != NULL) {
        temp_v0 = func_001F4140(arg0, 2, 0x260);
        func_001F3C00(temp_v0, &func_001F0C50);
        func_001F3B90(temp_v0, func_001F5140(1, 1, 9));
        func_001F3D80(temp_v0, &sp20, ((void *)D_003D2A60) + (M2C_FIELD(temp_v0, u8 *, 0x48) * 8));
        func_001F3D10((s32) temp_v0, 0U);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, u8 *, 0x48) = 1U;
        }
        if ((temp_v0 != NULL) && (&sp3C != NULL)) {
            M2C_FIELD(temp_v0, u8 *, 0x53) = sp3C;
            M2C_FIELD(temp_v0, u8 *, 0x54) = sp3D;
            M2C_FIELD(temp_v0, u8 *, 0x55) = sp3E;
            M2C_FIELD(temp_v0, u8 *, 0x56) = sp3F;
        }
        M2C_FIELD(temp_v0, M2C_UNK **, 0x3C) = &func_001F0ED0;
        M2C_FIELD(temp_v0, M2C_UNK **, 0x40) = &func_001F0C50;
        M2C_FIELD(temp_v0, M2C_UNK **, 0x44) = &func_001F0A80;
        M2C_FIELD(temp_v0, s8 *, 1) = 0xFF;
        return temp_v0;
    }
    return NULL;
}
