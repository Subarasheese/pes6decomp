/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C47E0(void *, void *, M2C_UNK, M2C_UNK); /* extern */
extern char D_008B1180[];

void func_008495B0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) (s32) ((100.0f * M2C_FIELD(arg1, f32 *, 0xE0)) / 256.0f);
    M2C_FIELD(arg0, s16 *, 2) = (s16) (s32) ((100.0f * M2C_FIELD(arg1, f32 *, 0xE8)) / 256.0f);
    M2C_FIELD(arg0, s16 *, 4) = (s16) (s32) ((100.0f * M2C_FIELD(arg1, f32 *, 0x6C)) / 256.0f);
    M2C_FIELD(arg0, s16 *, 6) = (s16) (s32) ((100.0f * M2C_FIELD(arg1, f32 *, 0x70)) / 256.0f);
    M2C_FIELD(arg0, s16 *, 8) = (s16) (s32) ((4.0f * (100.0f * M2C_FIELD(arg1, f32 *, 0xF4))) / 256.0f);
    M2C_FIELD(arg0, s8 *, 0xC) = (s8) ((s32) M2C_FIELD(arg1, u16 *, 0x26) >> 8);
    M2C_FIELD(arg0, u16 *, 0xA) = (u16) M2C_FIELD(arg1, u16 *, 0x28);
    M2C_FIELD(arg0, s8 *, 0xD) = (s8) ((s32) M2C_FIELD(arg1, u16 *, 0x2C) >> 8);
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(arg1, u16 *, 0x38);
    M2C_FIELD(arg0, u16 *, 0x10) = (u16) M2C_FIELD(M2C_FIELD(arg1, void **, 4), u16 *, 0x30);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) (s32) M2C_FIELD(M2C_FIELD(arg1, void **, 4), f32 *, 0x38);
    M2C_FIELD(arg0, s8 *, 0x18) = (s8) M2C_FIELD(arg1, u16 *, 0x3A);
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) M2C_FIELD(arg1, u16 *, 0x34);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) M2C_FIELD(arg1, u8 *, 0x48);
    if (arg2 != 0) {
        func_001C47E0(((void *)D_008B1180) + (M2C_FIELD(arg1, u8 *, 0) * 0x1A), arg0, 0x1A, 0x43800000);
    }
    if (arg3 != 0) {
        M2C_FIELD(arg1, f32 *, 0xE0) = (f32) ((256.0f * (f32) M2C_FIELD(arg0, s16 *, 0)) / 100.0f);
        M2C_FIELD(arg1, f32 *, 0xE8) = (f32) ((256.0f * (f32) M2C_FIELD(arg0, s16 *, 2)) / 100.0f);
        M2C_FIELD(arg1, f32 *, 0x6C) = (f32) ((256.0f * (f32) M2C_FIELD(arg0, s16 *, 4)) / 100.0f);
        M2C_FIELD(arg1, f32 *, 0x70) = (f32) ((256.0f * (f32) M2C_FIELD(arg0, s16 *, 6)) / 100.0f);
        M2C_FIELD(arg1, f32 *, 0xF4) = (f32) (((256.0f * (f32) M2C_FIELD(arg0, s16 *, 8)) / 4.0f) / 100.0f);
    }
}
