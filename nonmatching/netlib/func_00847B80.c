/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_001C4730(void *, void *, s32, s32);    /* extern */
extern s32 D_003EA2AC;
extern s32 D_003EA2C4;
extern char D_008AB810[];
extern char D_008AB950[];

s32 func_00847B80(void *arg0, s32 arg1) {
    s32 sp38;
    s32 sp3C;
    M2C_UNK *var_s0;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    var_s0 = ((void *)D_008AB810);
loop_1:
    if (M2C_FIELD(var_s0, s32 *, 0xC) != 0) {
        var_v1 += 1;
        var_s0 += 0x14;
        if (var_v1 >= 0x10) {
            return -1;
        }
        goto loop_1;
    }
    temp_v0 = D_003EA2C4 + 1;
    D_003EA2C4 = temp_v0;
    M2C_FIELD(arg0, s32 *, 4) = temp_v0;
    M2C_FIELD(var_s0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 4);
    if ((u32) (D_003EA2AC + arg1) >= 0x4001U) {
        D_003EA2AC = 0;
    }
    temp_a3 = D_003EA2AC;
    M2C_FIELD(var_s0, void **, 0) = (void *) (((void *)D_008AB950) + temp_a3);
    D_003EA2AC = temp_a3 + ((arg1 + 3) & ~3);
    func_001C4730(M2C_FIELD(var_s0, void **, 0), arg0, arg1, temp_a3);
    M2C_FIELD(var_s0, s32 *, 4) = arg1;
    func_00110E58(func_001105C8(), &sp3C, &sp38);
    M2C_FIELD(var_s0, s32 *, 8) = (s32) ((sp38 / 1000) + (sp3C * 0x3E8));
    M2C_FIELD(var_s0, s32 *, 0x10) = 0;
    return 0;
}
