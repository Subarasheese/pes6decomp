/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7BE0(void *, void *);
extern void func_001D7CE0(void *, void *);
M2C_UNK func_008CA810(void *, u16, s32);            /* extern */

void func_008CA490(void *arg0, void *arg1) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 sp90;
    f32 sp94;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    s32 var_s2;
    void *var_s0;
    void *var_s1;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        func_001D7BE0(M2C_FIELD(arg0, void **, 4), &sp90);
        var_s2 = 0;
        var_s1 = arg0;
        var_s0 = arg0;
        sp60 = M2C_FIELD(arg0, f32 *, 0x20) - sp90;
        sp64 = M2C_FIELD(arg0, f32 *, 0x24) - sp94;
        sp68 = M2C_FIELD(arg0, f32 *, 0x30) - sp90;
        sp6C = M2C_FIELD(arg0, f32 *, 0x34) - sp94;
        sp70 = M2C_FIELD(arg0, f32 *, 0x40) - sp90;
        sp74 = M2C_FIELD(arg0, f32 *, 0x44) - sp94;
        sp78 = M2C_FIELD(arg0, f32 *, 0x50) - sp90;
        temp_f3 = M2C_FIELD(arg0, f32 *, 0x54) - sp94;
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x60) - sp90;
        sp7C = temp_f3;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x64) - sp94;
        sp80 = temp_f2;
        sp84 = temp_f1;
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg1, f32 *, 0) + (M2C_FIELD(arg0, f32 *, 0xC) - sp90));
        M2C_FIELD(arg0, f32 *, 0x10) = (f32) (M2C_FIELD(arg1, f32 *, 4) + (M2C_FIELD(arg0, f32 *, 0x10) - sp94));
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg1, f32 *, 0) + sp60);
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg1, f32 *, 4) + sp64);
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg1, f32 *, 0) + sp68);
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg1, f32 *, 4) + sp6C);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg1, f32 *, 0) + sp70);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg1, f32 *, 4) + sp74);
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg1, f32 *, 0) + sp78);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) (M2C_FIELD(arg1, f32 *, 4) + temp_f3);
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) (M2C_FIELD(arg1, f32 *, 0) + temp_f2);
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) (M2C_FIELD(arg1, f32 *, 4) + temp_f1);
        do {
            M2C_FIELD(var_s1, f32 *, 0xD4) = (f32) (M2C_FIELD(arg1, f32 *, 0) + (M2C_FIELD(var_s1, f32 *, 0xD4) - sp90));
            M2C_FIELD(var_s1, f32 *, 0xD8) = (f32) (M2C_FIELD(arg1, f32 *, 4) + (M2C_FIELD(var_s1, f32 *, 0xD8) - sp94));
            M2C_FIELD(var_s1, f32 *, 0xDC) = (f32) (M2C_FIELD(arg1, f32 *, 0) + (M2C_FIELD(var_s1, f32 *, 0xDC) - sp90));
            M2C_FIELD(var_s1, f32 *, 0xE0) = (f32) (M2C_FIELD(arg1, f32 *, 4) + (M2C_FIELD(var_s1, f32 *, 0xE0) - sp94));
            M2C_FIELD(var_s1, f32 *, 0xE4) = (f32) (M2C_FIELD(arg1, f32 *, 0) + (M2C_FIELD(var_s1, f32 *, 0xE4) - sp90));
            M2C_FIELD(var_s1, f32 *, 0xE8) = (f32) (M2C_FIELD(arg1, f32 *, 4) + (M2C_FIELD(var_s1, f32 *, 0xE8) - sp94));
            M2C_FIELD(var_s1, f32 *, 0xEC) = (f32) (M2C_FIELD(arg1, f32 *, 0) + (M2C_FIELD(var_s1, f32 *, 0xEC) - sp90));
            M2C_FIELD(var_s1, f32 *, 0xF0) = (f32) (M2C_FIELD(arg1, f32 *, 4) + (M2C_FIELD(var_s1, f32 *, 0xF0) - sp94));
            M2C_FIELD(var_s1, f32 *, 0xF4) = (f32) (M2C_FIELD(arg1, f32 *, 0) + (M2C_FIELD(var_s1, f32 *, 0xF4) - sp90));
            M2C_FIELD(var_s1, f32 *, 0xF8) = (f32) (M2C_FIELD(arg1, f32 *, 4) + (M2C_FIELD(var_s1, f32 *, 0xF8) - sp94));
            func_008CA810(arg0, M2C_FIELD(var_s0, u16 *, 0x1DA), var_s2);
            var_s2 += 1;
            var_s1 += 0x28;
            var_s0 += 2;
        } while (var_s2 < 2);
        sp90 = M2C_FIELD(arg1, f32 *, 0);
        sp94 = M2C_FIELD(arg1, f32 *, 4);
        func_001D7CE0(M2C_FIELD(arg0, void **, 4), &sp90);
        func_001D7BE0(M2C_FIELD(arg0, void **, 0x174), &sp90);
        sp90 = M2C_FIELD(arg1, f32 *, 0);
        sp94 = M2C_FIELD(arg1, f32 *, 4);
        func_001D7CE0(M2C_FIELD(arg0, void **, 0x174), &sp90);
    }
}
