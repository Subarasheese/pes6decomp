/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B2E90(s32 *, M2C_UNK, s8);          /* extern */
M2C_UNK func_008B2EE0(s32, s32);                    /* extern */
extern char D_0053C300[];

void func_008C2CA0(void *arg0) {
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s8 temp_a2;
    s8 temp_a2_2;
    void *temp_a1;
    void *temp_a1_2;

    var_s2 = 0;
    var_s1 = 0;
    do {
        temp_a2 = M2C_FIELD(arg0, s8 *, 8);
        temp_a1 = arg0 + ((var_s2 + (temp_a2 * 0xD)) * 0x1A8);
        if ((M2C_FIELD(temp_a1, s8 *, 0x1D) == 1) && (var_s2 != 0)) {
            if (M2C_FIELD(temp_a1, s32 *, 0x18) == 1) {
                func_008B2E90(&sp6C, 4, temp_a2);
                func_008B2EE0(M2C_FIELD((M2C_FIELD(((void *)D_0053C300), s32 *, 0x14) + var_s1), s32 *, -4), sp6C);
            } else if (var_s2 == M2C_FIELD(arg0, s8 *, 0)) {
                func_008B2E90(&sp68, 3, temp_a2);
                func_008B2EE0(M2C_FIELD((M2C_FIELD(((void *)D_0053C300), s32 *, 0x14) + var_s1), s32 *, -4), sp68);
            } else {
                func_008B2E90(&sp64, 2, temp_a2);
                func_008B2EE0(M2C_FIELD((M2C_FIELD(((void *)D_0053C300), s32 *, 0x14) + var_s1), s32 *, -4), sp64);
            }
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 0xE);
    var_s1_2 = 0;
    var_s2_2 = 0;
    do {
        temp_a2_2 = M2C_FIELD(arg0, s8 *, 8);
        temp_a1_2 = arg0 + ((var_s1_2 + (temp_a2_2 * 0xD)) * 0x1A8);
        if ((M2C_FIELD(temp_a1_2, s8 *, 0x1D) == 1) && (var_s1_2 != 0)) {
            if (M2C_FIELD(temp_a1_2, s32 *, 0x18) == 1) {
                func_008B2E90(&sp60, 4, temp_a2_2);
                func_008B2EE0(M2C_FIELD((M2C_FIELD(((void *)D_0053C300), s32 *, 0x14) + var_s2_2), s32 *, 0x34), sp60);
            } else if (var_s1_2 == M2C_FIELD(arg0, s8 *, 0)) {
                func_008B2E90(&sp5C, 3, temp_a2_2);
                func_008B2EE0(M2C_FIELD((M2C_FIELD(((void *)D_0053C300), s32 *, 0x14) + var_s2_2), s32 *, 0x34), sp5C);
            } else {
                func_008B2E90(&sp58, 2, temp_a2_2);
                func_008B2EE0(M2C_FIELD((M2C_FIELD(((void *)D_0053C300), s32 *, 0x14) + var_s2_2), s32 *, 0x34), sp58);
            }
        }
        var_s1_2 += 1;
        var_s2_2 += 4;
    } while (var_s1_2 < 0xE);
}
