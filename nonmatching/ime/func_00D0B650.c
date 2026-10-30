/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9C60(void *);
extern void func_001D7F10(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_00D095C0(void *);                      /* extern */
M2C_UNK func_00D09B60(void *);                      /* extern */
M2C_UNK func_00D11310(void *);                      /* extern */
M2C_UNK func_00D13920(s32);                         /* extern */

s32 func_00D0B650(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s1;
    s32 var_s2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_s1;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xD40);
        if (temp_a0 != 0) {
            func_002DC1D0(temp_a0);
            M2C_FIELD(arg0, s32 *, 0xD40) = 0;
        }
        var_s1 = 0;
        do {
            func_00D11310(arg0 + (var_s1 << 6));
            var_s1 += 1;
        } while (var_s1 < 0x19);
        func_00D095C0(arg0 + 0x808);
        var_s2 = 0;
        do {
            temp_s1 = arg0 + (var_s2 * 4);
            M2C_FIELD(temp_s1, s32 *, 0x7F4) = 0xA;
            temp_a0_2 = M2C_FIELD(temp_s1, s32 *, 0x7E0);
            if (temp_a0_2 != 0) {
                func_00D13920(temp_a0_2);
                M2C_FIELD(temp_s1, s32 *, 0x7E0) = 0;
            }
            var_s2 += 1;
        } while (var_s2 < 5);
        func_00D09B60(arg0 + 0x71C);
        temp_a0_3 = M2C_FIELD(arg0, void **, 0xD4C);
        if (temp_a0_3 != NULL) {
            func_001B9C60(temp_a0_3);
            M2C_FIELD(arg0, void **, 0xD4C) = NULL;
        }
        temp_a0_4 = M2C_FIELD(arg0, void **, 0xD44);
        if (temp_a0_4 != NULL) {
            func_001D7F10(temp_a0_4);
            M2C_FIELD(arg0, void **, 0xD44) = NULL;
        }
        temp_a0_5 = M2C_FIELD(arg0, void **, 0xD48);
        if (temp_a0_5 != NULL) {
            func_001D7F10(temp_a0_5);
            M2C_FIELD(arg0, void **, 0xD48) = NULL;
        }
        return 0;
    }
    return 1;
}
