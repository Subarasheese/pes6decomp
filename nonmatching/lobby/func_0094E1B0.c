/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0082C2A0();                              /* extern */
void *func_00936B90();                              /* extern */
M2C_UNK func_0094D5A0(void *, void *);              /* extern */
extern char D_008A5F70[];

s32 func_0094E1B0(void) {
    u32 *temp_s1;
    u32 var_s2;
    u32 var_s3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v0;

    temp_s0 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == NULL) {
        return 1;
    }
    if (temp_s0 == NULL) {
        return 1;
    }
    if (((void *)D_008A5F70) != NULL) {
        temp_s1 = M2C_FIELD(temp_s0, u32 **, 0x7804);
        if (temp_s1 != NULL) {
            temp_s0_2 = temp_v0 + 0x2F17C;
            func_001C48E8(temp_s0_2, 0, 0x40DC);
            var_s2 = *temp_s1;
            if (var_s2 < 0x32U) {
                var_s3 = 0;
            } else {
                var_s2 = 0x32;
                var_s3 = 0;
            }
loop_18:
            if (var_s3 < var_s2) {
                func_0094D5A0(temp_s0_2 + (var_s3 * 0x14C) + 4, temp_s1 + (var_s3 * 0xC8) + 4);
                var_s3 += 1;
                M2C_FIELD(temp_v0, s32 *, 0x2F17C) = (s32) (M2C_FIELD(temp_v0, s32 *, 0x2F17C) + 1);
                goto loop_18;
            }
            return 4;
        }
        return 1;
    }
    return 1;
}
