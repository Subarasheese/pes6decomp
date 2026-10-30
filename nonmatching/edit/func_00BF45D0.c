/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC5740(u16);                             /* extern */
u16 func_00BC5DF0(s32, s32, s32);                   /* extern */
s32 func_00BC6100(s32, M2C_UNK, s32, s32);          /* extern */
M2C_UNK func_00BF4DA0(void *, s32, s64, s32, s32);  /* extern */
M2C_UNK func_00BF52E0(void *, s32, s64, s32, s32);  /* extern */
M2C_UNK func_00BF5660(void *, s32);                 /* extern */
extern char D_00CE8E20[];

void func_00BF45D0(s32 arg0, s32 arg1, s64 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a4;
    s32 var_a3;
    s32 var_s2_2;
    s32 var_s4;
    void *temp_s3;
    void *var_s2;
    void *var_s4_2;

    var_a3 = arg3;
    temp_a4 = arg0 * 0x146C;
    temp_s3 = ((void *)D_00CE8E20) + temp_a4;
    if ((arg1 & 0xFFFF) == 0x11A) {
        var_a3 = 2;
    }
    switch (var_a3) {                               /* irregular */
    case 2:
        func_00BF4DA0(temp_s3, arg1, (s64) (arg2 << 0x30) >> 0x30, arg4, temp_a4);
        break;
    case 1:
        M2C_FIELD(temp_s3, s32 *, 0x144C) = func_00BC6100(arg1, 0, var_a3, temp_a4);
        var_s4 = 0;
        var_s2 = temp_s3;
        do {
            M2C_FIELD(var_s2, s16 *, 0x80) = 0;
            M2C_FIELD(var_s2, s32 *, 0x7C) = 1;
            func_00BF5660(var_s2, 0xFFFF);
            var_s4 += 1;
            var_s2 += 0x88;
        } while (var_s4 < 0x25);
        var_s4_2 = temp_s3;
        var_s2_2 = 0;
        if (M2C_FIELD(temp_s3, s32 *, 0x144C) > 0) {
            do {
                M2C_FIELD(var_s4_2, u16 *, 0x80) = func_00BC5DF0(arg1, var_s2_2 & 0xFF, arg4);
                if (func_00BC5740(M2C_FIELD(var_s4_2, u16 *, 0x80)) != 0) {
                    func_00BF5660(var_s4_2, 0);
                } else {
                    func_00BF5660(var_s4_2, arg1);
                }
                var_s2_2 += 1;
                var_s4_2 += 0x88;
            } while (var_s2_2 < M2C_FIELD(temp_s3, s32 *, 0x144C));
        }
        break;
    case 0:
        func_00BF52E0(temp_s3, arg1, (s64) (arg2 << 0x30) >> 0x30, arg4, temp_a4);
        break;
    }
    temp_a1 = M2C_FIELD(temp_s3, s32 *, 0x1450);
    temp_a0 = M2C_FIELD(temp_s3, s32 *, 0x144C);
    if (temp_a0 < (M2C_FIELD(temp_s3, s32 *, 0x1448) + temp_a1)) {
        if (temp_a1 >= temp_a0) {
            M2C_FIELD(temp_s3, s32 *, 0x1448) = 0;
            temp_a0_2 = M2C_FIELD(temp_s3, s32 *, 0x144C);
            if (M2C_FIELD(temp_s3, s32 *, 0x1444) >= temp_a0_2) {
                M2C_FIELD(temp_s3, s32 *, 0x1444) = (s32) (temp_a0_2 - 1);
            }
        } else {
            M2C_FIELD(temp_s3, s32 *, 0x1448) = (s32) (temp_a0 - temp_a1);
        }
    }
    temp_a0_3 = M2C_FIELD(temp_s3, s32 *, 0x1448);
    temp_a1_2 = M2C_FIELD(temp_s3, s32 *, 0x1444);
    if (temp_a1_2 >= temp_a0_3) {
        temp_a0_4 = temp_a0_3 + M2C_FIELD(temp_s3, s32 *, 0x1450);
        if (temp_a1_2 >= temp_a0_4) {
            M2C_FIELD(temp_s3, s32 *, 0x1444) = (s32) (temp_a0_4 - 1);
        }
        return;
    }
    M2C_FIELD(temp_s3, s32 *, 0x1444) = temp_a0_3;
}
