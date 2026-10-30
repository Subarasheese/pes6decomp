/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
s32 func_00BDA360(u8);                              /* extern */
extern char D_00510FD0[];
extern char D_00591C09[];
extern char D_00591DCD[];
extern char D_00591E19[];
extern char D_00591F12[];
extern M2C_UNK func_00304310;
extern M2C_UNK func_00304650;
extern M2C_UNK func_003052D0;

s32 func_00304A00(void *arg0) {
    s32 var_a0;
    s32 var_a0_2;
    void *temp_s0;
    void *temp_s0_2;
    void *var_v1;
    void *var_v1_2;

    switch ((*(u8 *)D_00591DCD)) {                           /* irregular */
    case 0:
        if ((*(u8 *)D_00591C09) != 5) {
            if ((*(s32 *)D_00510FD0) == 0xC) {
                if ((*(u8 *)D_00591E19) == 0xFF) {
                    return 0;
                }
                goto block_11;
            }
            if ((*(u8 *)D_00591F12) == 0) {
                return 0;
            }
            goto block_11;
        }
block_11:
        temp_s0 = M2C_FIELD(arg0, void **, 0x18);
        func_00305E60(arg0, (s32) &func_003052D0);
        M2C_FIELD(temp_s0, s32 *, 0x48) = 0;
        M2C_FIELD(temp_s0, s32 *, 8) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x20) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x24) = 0;
        M2C_FIELD(temp_s0, s32 *, 0) = 0;
        if (0 < 8) {
            var_a0 = 0;
            var_v1 = temp_s0;
loop_13:
            if (M2C_FIELD(var_v1, s32 *, 8) != 0) {
                var_a0 += 1;
                var_v1 += 4;
                if (var_a0 >= 8) {

                } else {
                    goto loop_13;
                }
            } else {
                M2C_FIELD(((var_a0 * 4) + temp_s0), M2C_UNK **, 8) = &func_00304310;
                M2C_FIELD(temp_s0, s32 *, 0) = (s32) (M2C_FIELD(temp_s0, s32 *, 0) + 1);
            }
        }
block_29:
    default:
        return 1;
    case 3:
    case 2:
    case 1:
        if (func_00BDA360((*(u8 *)D_00591DCD)) == 0) {
            return 0;
        }
        temp_s0_2 = M2C_FIELD(arg0, void **, 0x18);
        func_00305E60(arg0, (s32) &func_003052D0);
        M2C_FIELD(temp_s0_2, s32 *, 0x48) = 0;
        M2C_FIELD(temp_s0_2, s32 *, 8) = 0;
        M2C_FIELD(temp_s0_2, s32 *, 0xC) = 0;
        M2C_FIELD(temp_s0_2, s32 *, 0x10) = 0;
        M2C_FIELD(temp_s0_2, s32 *, 0x14) = 0;
        M2C_FIELD(temp_s0_2, s32 *, 0x18) = 0;
        M2C_FIELD(temp_s0_2, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_s0_2, s32 *, 0x20) = 0;
        M2C_FIELD(temp_s0_2, s32 *, 0x24) = 0;
        M2C_FIELD(temp_s0_2, s32 *, 0) = 0;
        if (0 < 8) {
            var_a0_2 = 0;
            var_v1_2 = temp_s0_2;
loop_23:
            if (M2C_FIELD(var_v1_2, s32 *, 8) != 0) {
                var_a0_2 += 1;
                var_v1_2 += 4;
                if (var_a0_2 >= 8) {

                } else {
                    goto loop_23;
                }
            } else {
                M2C_FIELD(((var_a0_2 * 4) + temp_s0_2), M2C_UNK **, 8) = &func_00304650;
                M2C_FIELD(temp_s0_2, s32 *, 0) = (s32) (M2C_FIELD(temp_s0_2, s32 *, 0) + 1);
            }
        }
        goto block_29;
    }
}
