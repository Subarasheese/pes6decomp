/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF0980(void);
extern void func_00AEEC10(s32);
extern s32 func_00AF0910(s32, s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0095ED20();                                /* extern */
M2C_UNK func_00AEE560(s32, s16);                    /* extern */
M2C_UNK func_00AEE620(u8);                          /* extern */
M2C_UNK func_00AEE8D0(s32, s16);                    /* extern */
M2C_UNK func_00AEEBA0(u8);                          /* extern */
M2C_UNK func_00AEED80(u8);                          /* extern */
s32 func_00AF0610(s32);                             /* extern */
s32 func_00AF0930(u8);                              /* extern */

s32 func_00AEF530(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    u32 temp_v0;
    u8 temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00AF0980();
    if (temp_v0 == 0) {

    } else if (func_0095ED20() != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x2D0);
        if ((temp_v1 != 0) && (temp_v1 != 1)) {

        } else {
            M2C_FIELD(temp_v0, u8 *, 0x185) = (u8) ((s32) (M2C_FIELD(temp_v0, u8 *, 0x185) + 1) % 2);
            func_00AEED80(M2C_FIELD(temp_v0, u8 *, 0x185));
            temp_v1_2 = func_00AF0930(M2C_FIELD(temp_v0, u8 *, 0x185)) & 0xFF;
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0x184) >= temp_v1_2) {
                M2C_FIELD(temp_v0, u8 *, 0x184) = (u8) (temp_v1_2 - 1);
            }
            var_s1 = func_00AF0910((s32) M2C_FIELD(temp_v0, u8 *, 0x185), (s32) M2C_FIELD(temp_v0, u8 *, 0x184));
            if (func_00AF0610(var_s1) == 0) {
loop_12:
                temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x184);
                if (temp_v0_2 != 0) {
                    M2C_FIELD(temp_v0, u8 *, 0x184) = (u8) (temp_v0_2 - 1);
                    func_00AEEBA0(M2C_FIELD(temp_v0, u8 *, 0x184));
                    var_s1 = func_00AF0910((s32) M2C_FIELD(temp_v0, u8 *, 0x185), (s32) M2C_FIELD(temp_v0, u8 *, 0x184));
                    if (func_00AF0610(var_s1) != 0) {

                    } else {
                        goto loop_12;
                    }
                } else {
                    M2C_FIELD(temp_v0, s32 *, 0x2D0) = 1;
                    func_00AEEBA0(M2C_FIELD(temp_v0, u8 *, 0x184));
                }
            }
            func_00AEEBA0(M2C_FIELD(temp_v0, u8 *, 0x184));
            func_00AEE620(M2C_FIELD(temp_v0, u8 *, 0x184));
            temp_v0_3 = (var_s1 * 2) + temp_v0;
            func_00AEE560(var_s1, M2C_FIELD(temp_v0_3, s16 *, 0x1B0));
            func_00AEE8D0(var_s1, M2C_FIELD(temp_v0_3, s16 *, 0x1B0));
            if ((func_00AF0910((s32) M2C_FIELD(temp_v0, u8 *, 0x185), (s32) M2C_FIELD(temp_v0, u8 *, 0x184)) == 0xE) && (M2C_FIELD(temp_v0, s32 *, 0x2D0) == 0)) {
                func_00AEEC10(1);
            } else {
                func_00AEEC10(0);
            }
            func_0026E840(0x8400F803);
        }
    }
    return 0;
}
