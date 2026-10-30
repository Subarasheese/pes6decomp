/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
s32 func_00360930(void *, M2C_UNK);                 /* extern */
void *func_008504D0();                              /* extern */
s32 func_00C76900();                                /* extern */
u8 func_00C76B40();                                 /* extern */
s32 func_00C76CF0(s32);                             /* extern */
s32 func_00C8B370();                                /* extern */
extern char D_00591970[];
extern char D_00CCBF78[];

s32 func_00C7C940(void) {
    s32 temp_s2;
    s32 var_s0;
    s32 var_s3;
    u8 var_s1;
    void *temp_a0;
    void *temp_v0;

    temp_s2 = func_00C8B370();
    var_s1 = 0xFF;
    var_s0 = 0xB;
    if (func_00309420() != 0) {
        temp_v0 = func_008504D0();
        if (temp_v0 != NULL) {
            temp_a0 = M2C_FIELD(temp_v0, void **, 0x24);
            var_s1 = M2C_FIELD(temp_v0, u8 *, 0x18);
            if (temp_a0 != NULL) {
                return func_00360930(temp_a0, 0xB);
            }
        }
    }
    var_s3 = 0;
loop_5:
    if ((func_00C76CF0(var_s3) != 0) && (temp_s2 == func_00C76900())) {
        var_s1 = func_00C76B40();
    } else {
        var_s3 += 1;
        if (var_s3 >= 8) {

        } else {
            goto loop_5;
        }
    }
    if (var_s1 != 0xFF) {
        var_s0 = func_00360930(((void *)D_00591970) + (var_s1 * 0x24), 0xB);
        (*(s32 *)D_00CCBF78) = 1;
    }
    return var_s0;
}
