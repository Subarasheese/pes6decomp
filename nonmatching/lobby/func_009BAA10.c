/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00363E10(void *);
extern void func_00153FA0(void *);
extern void func_001B9C60(void *);
extern void func_001D7F10(void *);
M2C_UNK func_009BAC80(void *);                      /* extern */
M2C_UNK func_009BB170(void *);                      /* extern */
M2C_UNK func_009BBA80(void *);                      /* extern */
extern void *D_00A7DC30;

void func_009BAA10(void) {
    s32 var_s1;
    s8 temp_a0;
    void *temp_a0_2;
    void *var_s0;

    var_s0 = D_00A7DC30;
    if (var_s0 != NULL) {
        if (M2C_FIELD(var_s0, s8 *, 1) != 1) {
            temp_a0 = M2C_FIELD(var_s0, s8 *, 2);
            switch (temp_a0) {                      /* irregular */
            case 0:
                if ((u32) (M2C_FIELD(var_s0, s8 *, 4) - 2) < 2U) {
                    func_009BB170(var_s0);
                }
                break;
            case 3:
                func_009BAC80(var_s0);
                return;
            case 2:
                func_009BB170(var_s0);
                return;
            }
        } else {
            func_009BBA80(var_s0);
            if (M2C_FIELD(var_s0, u8 *, 0x198) == 1) {
                func_001D7F10(M2C_FIELD(var_s0, void **, 0x144));
                M2C_FIELD(var_s0, void **, 0x144) = NULL;
                func_001B9C60(M2C_FIELD(var_s0, void **, 0x19C));
                M2C_FIELD(var_s0, void **, 0x19C) = NULL;
                M2C_FIELD(var_s0, u8 *, 0x198) = 0U;
            }
            var_s1 = 0;
            do {
                temp_a0_2 = M2C_FIELD(var_s0, void **, 0x170);
                if (temp_a0_2 != NULL) {
                    func_00363E10(temp_a0_2);
                    M2C_FIELD(var_s0, void **, 0x170) = NULL;
                }
                var_s1 += 1;
                var_s0 += 4;
            } while (var_s1 < 0xA);
            func_00153FA0(D_00A7DC30);
            D_00A7DC30 = NULL;
        }
    }
}
