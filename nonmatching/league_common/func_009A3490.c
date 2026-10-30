/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_009A0430(void);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00957070(s32);                         /* extern */

void func_009A3490(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 var_s1_2;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2_2;
    void *temp_a0_5;
    void *temp_a0_6;

    temp_v0 = func_009A0430();
    if (temp_v0 != 0) {
        var_s2 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 5) > 0) {
            var_s1 = temp_v0;
            do {
                temp_a0 = M2C_FIELD(var_s1, s32 *, 0x118);
                if (temp_a0 != 0) {
                    func_00957070(temp_a0);
                    M2C_FIELD(var_s1, s32 *, 0x118) = 0;
                }
                var_s2 += 1;
                var_s1 += 4;
            } while (var_s2 < (s32) M2C_FIELD(temp_v0, u8 *, 5));
        }
        var_s1_2 = 0;
        var_s2_2 = temp_v0;
        do {
            temp_a0_2 = M2C_FIELD(var_s2_2, s32 *, 0x1B4);
            if (temp_a0_2 != 0) {
                func_00957070(temp_a0_2);
                M2C_FIELD(var_s2_2, s32 *, 0x1B4) = 0;
            }
            var_s1_2 += 1;
            var_s2_2 += 4;
        } while (var_s1_2 < 2);
        temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0x1A0);
        if (temp_a0_3 != 0) {
            func_001EDD90(temp_a0_3);
            M2C_FIELD(temp_v0, s32 *, 0x1A0) = 0;
        }
        temp_a0_4 = M2C_FIELD(temp_v0, s32 *, 0x1A4);
        if (temp_a0_4 != 0) {
            func_001EDD90(temp_a0_4);
            M2C_FIELD(temp_v0, s32 *, 0x1A4) = 0;
        }
        temp_a0_5 = M2C_FIELD(temp_v0, void **, 0x94);
        if (temp_a0_5 != NULL) {
            func_001D4E00(temp_a0_5);
            M2C_FIELD(temp_v0, void **, 0x94) = NULL;
        }
        temp_a0_6 = M2C_FIELD(temp_v0, void **, 0x1A8);
        if (temp_a0_6 != NULL) {
            func_001D4E00(temp_a0_6);
            M2C_FIELD(temp_v0, void **, 0x1A8) = NULL;
        }
    }
}
