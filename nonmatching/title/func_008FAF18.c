/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008FC120(void *);
M2C_UNK func_001C48E8(s32, M2C_UNK);                /* extern */
M2C_UNK func_008FAE48(s32);                         /* extern */
M2C_UNK func_008FBC58(void *);                      /* extern */
M2C_UNK func_008FBEE8(void *);                      /* extern */
M2C_UNK func_008FC108(void *, s32, s32);            /* extern */
s32 func_008FC140(s32, void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00900500(s32, M2C_UNK *, s32);         /* extern */
M2C_UNK func_00900558(s32, M2C_UNK *, s32);         /* extern */
extern char D_00901FF8[];
extern char D_00902020[];
extern char D_00902048[];
extern M2C_UNK func_008FC1C8;
extern M2C_UNK func_008FC1F0;

s32 func_008FAF18(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_s2;
    s32 temp_v0;
    void *temp_s1;

    func_001C48E8(arg1, 0);
    temp_s2 = ((u32) (arg1 + 3) >> 2) * 4;
    temp_a2 = arg2 - (temp_s2 - arg1);
    if (temp_a2 < 0x19A0) {
        func_00900500(temp_s2, ((void *)D_00902048), temp_a2);
        return 0;
    }
    temp_s1 = temp_s2 + 0x118;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_s2;
    func_008FC108(temp_s1, temp_s2 + 0x19A0, temp_a2 - 0x19A0);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s64 *, 0x10) = -1;
    M2C_FIELD(arg0, s64 *, 0x18) = -1;
    M2C_FIELD(arg0, s64 *, 0x20) = 0;
    M2C_FIELD(arg0, s64 *, 0x28) = -1;
    M2C_FIELD(arg0, s64 *, 0x30) = -1;
    M2C_FIELD(arg0, s64 *, 0x38) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xC8) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xCC) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xD0) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xD4) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xD8) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xDC) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xE0) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xE4) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xE8) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xEC) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xF0) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xF4) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xF8) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xFC) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x108) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x18) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x48) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x54) = 0;
    M2C_FIELD(temp_s2, s64 *, 0x100) = -1;
    M2C_FIELD(temp_s2, M2C_UNK **, 0x24) = &func_008FC1C8;
    M2C_FIELD(temp_s2, M2C_UNK **, 0x30) = &func_008FC1F0;
    temp_v0 = func_008FC140(temp_s2, temp_s1, 0x800, 8, &func_008FC1F0);
    M2C_FIELD(temp_s2, s32 *, 0x64) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x10C) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x110) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x114) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x8C) = 0;
    M2C_FIELD(temp_s2, s64 *, 0x90) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x98) = -1;
    M2C_FIELD(temp_s2, s64 *, 0xA0) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x9C) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xC0) = 0;
    M2C_FIELD(temp_s2, s32 *, 0xA8) = -1;
    M2C_FIELD(temp_s2, s32 *, 0xAC) = -1;
    M2C_FIELD(temp_s2, s32 *, 0xB0) = -1;
    M2C_FIELD(temp_s2, void **, 0x868) = arg0;
    M2C_FIELD(temp_s2, s32 *, 0x60) = temp_v0;
    M2C_FIELD(temp_s2, s32 *, 0xC4) = 1;
    func_008FAE48(temp_s2);
    func_008FBC58(arg0);
    func_008FBEE8(arg0);
    M2C_FIELD(temp_s2, s32 *, 0x1C8) = (s32) (temp_s2 + 0x1F8);
    M2C_FIELD(temp_s2, s32 *, 0x1CC) = (s32) (temp_s2 + 0x260);
    M2C_FIELD(temp_s2, s32 *, 0x1D4) = (s32) (temp_s2 + 0x2C8);
    M2C_FIELD(temp_s2, s32 *, 0x1D8) = (s32) (temp_s2 + 0x330);
    M2C_FIELD(temp_s2, s32 *, 0x1DC) = (s32) (temp_s2 + 0x398);
    M2C_FIELD(temp_s2, s32 *, 0x1E4) = (s32) (temp_s2 + 0x400);
    M2C_FIELD(temp_s2, s32 *, 0x1E8) = (s32) (temp_s2 + 0x468);
    M2C_FIELD(temp_s2, s32 *, 0x1EC) = (s32) (temp_s2 + 0x4D0);
    M2C_FIELD(temp_s2, s32 *, 0x1F4) = (s32) (temp_s2 + 0x538);
    func_008FC120(temp_s1);
    M2C_FIELD(temp_s2, s32 *, 0x860) = -1;
    temp_a2_2 = temp_s2 & 0x3C;
    M2C_FIELD(temp_s2, s32 *, 0x85C) = 0;
    M2C_FIELD(temp_s2, s32 *, 0x864) = 0;
    if (temp_a2_2 != 0) {
        var_a1 = ((void *)D_00901FF8);
        goto block_6;
    }
    if (temp_a2_2 != 0) {
        var_a1 = ((void *)D_00902020);
block_6:
        func_00900558(temp_s2, var_a1, temp_a2_2);
        return 0;
    }
    return 1;
}
