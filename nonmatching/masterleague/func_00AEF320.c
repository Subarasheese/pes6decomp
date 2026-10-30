/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF0980(void);
extern void func_001D7D60(void *, s8);
extern s32 func_00AF0910(s32, s32);
extern void * func_001D5A10(s32);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_0095EA70(M2C_UNK);                     /* extern */
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00AEE560(s32, s16);                    /* extern */
M2C_UNK func_00AEE620(u8);                          /* extern */
M2C_UNK func_00AEE8D0(s32, s16);                    /* extern */
M2C_UNK func_00AEEA80(u8);                          /* extern */
M2C_UNK func_00AEED80(u8);                          /* extern */
M2C_UNK func_00AEEF20();                            /* extern */

void func_00AEF320(void) {
    s32 temp_s1;
    s32 var_s3;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u8 temp_s3;
    void *temp_v0_4;

    temp_v0 = func_00AF0980();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x10322);
        func_00AEEF20();
        func_00AEED80(M2C_FIELD(temp_v0, u8 *, 0x185));
        temp_v0_2 = func_00AF0980();
        if (temp_v0_2 != 0) {
            func_001D7D60(M2C_FIELD(temp_v0_2, void **, 0x70), 0);
        }
        temp_s3 = M2C_FIELD(temp_v0, u8 *, 0x184);
        temp_s1 = func_00AF0910((s32) M2C_FIELD(temp_v0, u8 *, 0x185), (s32) M2C_FIELD(temp_v0, u8 *, 0x184));
        temp_v0_3 = func_00AF0980();
        if (temp_v0_3 != 0) {
            func_00AEEA80(temp_s3);
            if (M2C_FIELD(temp_v0_3, s32 *, 0x2D0) == 0) {
                var_s3 = (temp_s3 + 1) & 0xFF;
            } else {
                var_s3 = 0;
            }
            func_00972040(M2C_FIELD(temp_v0_3, s32 *, 0x180), 0, var_s3 & 0xFF);
        }
        temp_v0_4 = (temp_s1 * 2) + temp_v0;
        func_00AEE8D0(temp_s1, M2C_FIELD(temp_v0_4, s16 *, 0x1B0));
        func_00AEE620(M2C_FIELD(temp_v0, u8 *, 0x184));
        func_00AEE560(temp_s1, M2C_FIELD(temp_v0_4, s16 *, 0x1B0));
        func_0095EA70(0x19005B);
        func_00958000(0x9F);
    }
}
