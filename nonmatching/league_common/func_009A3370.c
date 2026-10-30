/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A0430(void);
extern void func_001EDA30(void *, s32);
void *func_001EE0D0();                              /* extern */
M2C_UNK func_009A2890(void *);                      /* extern */
M2C_UNK func_009A29F0(void *, s32);                 /* extern */

void func_009A3370(void) {
    s32 var_s1;
    u32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_v0;

    temp_v0 = func_009A0430();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001EE0D0();
        M2C_FIELD(temp_v0, void **, 0x1A0) = temp_v0_2;
        func_001EDA30(temp_v0_2, 0);
        var_v0 = M2C_FIELD(temp_v0, void **, 0x420);
        var_s1 = 0;
        if (var_v0 != NULL) {
            do {
                if (((u64) ((s64) M2C_FIELD(var_v0, u8 *, 0x16) << 0x3A) >> 0x3F) != 0) {
                    func_009A29F0(M2C_FIELD(temp_v0, void **, 0x1A0), var_s1);
                }
                var_s1 = (var_s1 + 1) & 0xFF;
                var_v0 = M2C_FIELD((temp_v0 + (var_s1 * 4)), void **, 0x420);
            } while (var_v0 != NULL);
        }
        temp_v0_3 = func_001EE0D0();
        M2C_FIELD(temp_v0, void **, 0x1A4) = temp_v0_3;
        func_001EDA30(temp_v0_3, 0);
        if (M2C_FIELD(temp_v0, s32 *, 0x4A0) != 0) {
            func_009A2890(M2C_FIELD(temp_v0, void **, 0x1A4));
        }
    }
}
