/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00114E20(void *, M2C_UNK);                 /* extern */
extern s32 D_003EA234;

void func_00650D50(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1_4;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_v0;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_3;
    void *temp_a0_2;
    void *temp_a0_3;
    void *var_a2;
    void *var_a2_2;
    void *var_a2_3;
    void *var_a3;
    void *var_a3_2;
    void *var_a3_3;

    temp_a0 = arg1 & 0xFF;
    var_v0 = 0;
    if (temp_a0 == 0) {
        temp_a0_2 = arg0 + 0x24;
        if (temp_a0_2 == NULL) {

        } else {
            M2C_FIELD(arg0, s8 *, 0x24) = 5;
            M2C_FIELD(arg0, s8 *, 0x25) = 7;
            M2C_FIELD(arg0, s8 *, 0x26) = 6;
            M2C_FIELD(arg0, s8 *, 0x27) = 5;
            M2C_FIELD(arg0, s8 *, 0x29) = 4;
            M2C_FIELD(arg0, s8 *, 0x2A) = 3;
            M2C_FIELD(arg0, s8 *, 0x2B) = 0;
            var_v0 = func_00114E20(temp_a0_2, 5);
        }
        if (var_v0 != 0) {
            var_a3 = arg0 + 0x24;
            var_a2 = arg0 + 0x1C;
            var_a1 = 4;
            do {
                var_a1 -= 1;
                temp_v1 = M2C_FIELD(var_a3, s8 *, 1);
                M2C_FIELD(var_a2, s8 *, 0) = (s8) M2C_FIELD(var_a3, s8 *, 0);
                var_a3 += 2;
                M2C_FIELD(var_a2, s8 *, 1) = temp_v1;
                var_a2 += 2;
            } while (var_a1 > 0);
            var_a3_2 = arg0 + 0x1C;
            var_a2_2 = arg0 + 0x14;
            var_a1_2 = 4;
            do {
                var_a1_2 -= 1;
                temp_v1_2 = M2C_FIELD(var_a3_2, s8 *, 1);
                M2C_FIELD(var_a2_2, s8 *, 0) = (s8) M2C_FIELD(var_a3_2, s8 *, 0);
                var_a3_2 += 2;
                M2C_FIELD(var_a2_2, s8 *, 1) = temp_v1_2;
                var_a2_2 += 2;
            } while (var_a1_2 > 0);
        }
    } else if (temp_a0 == 2) {
        temp_a0_3 = arg0 + 0x24;
        if (temp_a0_3 == NULL) {

        } else {
            M2C_FIELD(arg0, s8 *, 0x24) = 5;
            M2C_FIELD(arg0, s8 *, 0x25) = 7;
            M2C_FIELD(arg0, s8 *, 0x26) = 6;
            M2C_FIELD(arg0, s8 *, 0x27) = 5;
            M2C_FIELD(arg0, s8 *, 0x29) = 4;
            M2C_FIELD(arg0, s8 *, 0x2A) = 3;
            M2C_FIELD(arg0, s8 *, 0x2B) = 0;
            var_v0 = func_00114E20(temp_a0_3, 5);
        }
        if (var_v0 == 1) {
            var_a3_3 = arg0 + 0x24;
            var_a2_3 = arg0 + 0x14;
            var_a1_3 = 4;
            do {
                var_a1_3 -= 1;
                temp_v1_3 = M2C_FIELD(var_a3_3, s8 *, 1);
                M2C_FIELD(var_a2_3, s8 *, 0) = (s8) M2C_FIELD(var_a3_3, s8 *, 0);
                var_a3_3 += 2;
                M2C_FIELD(var_a2_3, s8 *, 1) = temp_v1_3;
                var_a2_3 += 2;
            } while (var_a1_3 > 0);
        }
    }
    if (var_v0 == 0) {
        temp_v1_4 = D_003EA234 + 1;
        D_003EA234 = temp_v1_4;
        if (temp_v1_4 >= 0x37) {
            var_v0 = 1;
        }
    }
    if (var_v0 == 1) {
        D_003EA234 = 0;
    }
}
