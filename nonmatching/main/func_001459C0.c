/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012AF40(s32, s32, u32);
M2C_UNK func_001462D0();                            /* extern */
M2C_UNK func_00146910();                            /* extern */
M2C_UNK func_00146BE0();                            /* extern */
M2C_UNK func_0014A5A0();                            /* extern */
M2C_UNK func_0014A6B0();                            /* extern */
extern char D_00503080[];
extern M2C_UNK *D_00507880;
extern char D_00507A88[];

void func_001459C0(void) {
    M2C_UNK *var_a3;
    M2C_UNK *var_v1;
    s32 *var_s1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a4;
    s32 var_s0;
    void *temp_v0;
    void *temp_v0_2;

    func_00146910();
    func_001462D0();
    func_0014A5A0();
    func_0014A6B0();
    func_00146BE0();
    var_a0 = 0;
    var_a3 = ((void *)D_00503080);
    var_a4 = 0;
    var_v1 = ((void *)D_00503080);
    do {
        var_a0 += 8;
        M2C_FIELD(var_a3, void **, 0) = (void *) (((void *)D_00503080) + (var_a4 + 0xC));
        M2C_FIELD(var_a3, void **, 0xC) = (void *) (((void *)D_00503080) + (var_a4 + 0x18));
        M2C_FIELD(var_a3, void **, 0x18) = (void *) (((void *)D_00503080) + (var_a4 + 0x24));
        M2C_FIELD(var_a3, void **, 0x24) = (void *) (((void *)D_00503080) + (var_a4 + 0x30));
        M2C_FIELD(var_a3, void **, 0x30) = (void *) (((void *)D_00503080) + (var_a4 + 0x3C));
        M2C_FIELD(var_a3, void **, 0x3C) = (void *) (((void *)D_00503080) + (var_a4 + 0x48));
        temp_v0 = ((void *)D_00503080) + (var_a4 + 0x54);
        var_a4 += 0x60;
        M2C_FIELD(var_a3, void **, 0x48) = temp_v0;
        M2C_FIELD(var_a3, void **, 0x54) = (void *) (((void *)D_00503080) + var_a4);
        var_a3 += 0x60;
    } while (var_a0 < 0x5F7);
    temp_v0_2 = ((void *)D_00503080) + (var_a0 * 0xC);
    M2C_FIELD(temp_v0_2, void **, 0) = (void *) (((void *)D_00503080) + ((var_a0 + 1) * 0xC));
    M2C_FIELD(temp_v0_2, void **, 0xC) = (void *) (((void *)D_00503080) + ((var_a0 + 2) * 0xC));
    M2C_FIELD(temp_v0_2, void **, 0x18) = (void *) (((void *)D_00503080) + ((var_a0 + 3) * 0xC));
    M2C_FIELD(temp_v0_2, void **, 0x24) = (void *) (((void *)D_00503080) + ((var_a0 + 4) * 0xC));
    M2C_FIELD(temp_v0_2, void **, 0x30) = (void *) (((void *)D_00503080) + ((var_a0 + 5) * 0xC));
    M2C_FIELD(temp_v0_2, void **, 0x3C) = (void *) (((void *)D_00503080) + ((var_a0 + 6) * 0xC));
    M2C_FIELD(temp_v0_2, void **, 0x48) = (void *) (((void *)D_00503080) + ((var_a0 + 7) * 0xC));
    var_a1 = 0;
    D_00507880 = ((void *)D_00503080);
    do {
        M2C_FIELD(var_v1, s32 *, 0x4804) = 0;
        var_a1 += 8;
        M2C_FIELD(var_v1, s32 *, 0x4808) = 0;
        M2C_FIELD(var_v1, s32 *, 0x480C) = 0;
        M2C_FIELD(var_v1, s32 *, 0x4810) = 0;
        M2C_FIELD(var_v1, s32 *, 0x4814) = 0;
        M2C_FIELD(var_v1, s32 *, 0x4818) = 0;
        M2C_FIELD(var_v1, s32 *, 0x481C) = 0;
        M2C_FIELD(var_v1, s32 *, 0x4820) = 0;
        var_v1 += 0x20;
    } while (var_a1 < 0x80);
    var_s0 = 0;
    var_s1 = ((void *)D_00507A88);
    do {
        var_s0 += 1;
        *var_s1 = func_0012AF40(1, 1, 0U);
        var_s1 += 4;
    } while (var_s0 < 2);
}
