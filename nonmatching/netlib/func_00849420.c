/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C47E0(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_00209A00(s32, u16, s16);               /* extern */
extern char D_008B1180[];

void func_00849420(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) ((256.0f * (f32) M2C_FIELD(arg1, s16 *, 0)) / 100.0f);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) ((256.0f * (f32) M2C_FIELD(arg1, s16 *, 2)) / 100.0f);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) ((256.0f * (f32) M2C_FIELD(arg1, s16 *, 4)) / 100.0f);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) ((256.0f * (f32) M2C_FIELD(arg1, s16 *, 6)) / 100.0f);
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) (((256.0f * (f32) M2C_FIELD(arg1, s16 *, 8)) / 4.0f) / 100.0f);
    M2C_FIELD(arg0, s16 *, 0x26) = (s16) (M2C_FIELD(arg1, u8 *, 0xC) << 8);
    M2C_FIELD(arg0, u16 *, 0x28) = (u16) M2C_FIELD(arg1, u16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg1, u8 *, 0xD) << 8);
    M2C_FIELD(arg0, u16 *, 0x38) = (u16) M2C_FIELD(arg1, u16 *, 0xE);
    if (arg3 != 0) {
        func_00209A00(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, u16 *, 0x10), M2C_FIELD(arg1, s16 *, 0x14));
    }
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) M2C_FIELD(arg1, u8 *, 0x18);
    M2C_FIELD(arg0, u16 *, 0x34) = (u16) M2C_FIELD(arg1, u16 *, 0x16);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s16 *, 0x12);
    M2C_FIELD(arg0, u8 *, 0x48) = (u8) M2C_FIELD(arg1, u8 *, 0x19);
    if (arg2 != 0) {
        func_001C47E0(((void *)D_008B1180) + (M2C_FIELD(arg0, u8 *, 0) * 0x1A), arg1, 0x1A);
    }
}
