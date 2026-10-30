/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022C1E0(void);
extern int func_00309420(void);
extern s32 func_00226710(void);
s32 func_002262E0(s32);                             /* extern */
s32 func_0022BC60(u8);                              /* extern */
void *func_0022BFF0(u8, s32);                       /* extern */
void *func_0022C140(u8);                            /* extern */
s32 func_00239DA0(u8, s32);                         /* extern */

s32 func_0022CD50(s32 arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    u8 temp_s2_2;
    u8 temp_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    var_s5 = 0;
    temp_v0 = func_0022C1E0();
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_s2 = func_00226710() & 0xFF;
    if ((func_00309420() != 0) != 1) {
        temp_v1 = func_002262E0(temp_s2) & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 1:
            var_v0 = 1 & 0xFF;
            break;
        default:
            var_v0 = 0xFF;
            break;
        case 3:
        case 5:
        case 0:
        case 2:
            var_v0 = 0;
            break;
        }
    } else {
        var_v0 = 0xFF;
    }
    if ((var_v0 & 0xFF) == 1) {
        temp_s3 = M2C_FIELD(temp_v0, u8 *, 1);
        temp_v0_2 = func_0022C140(temp_s3);
        if (temp_v0_2 != NULL) {
            temp_s2_2 = M2C_FIELD(temp_v0_2, u8 *, 7);
            var_s4 = 0;
            if ((s32) temp_s2_2 > 0) {
                temp_s1 = arg0 & 0xFF;
loop_25:
                temp_v0_3 = func_0022BFF0(temp_s3, func_00239DA0(temp_s3, var_s4) & 0xFF);
                if ((temp_v0_3 != NULL) && ((temp_s1 == (func_0022BC60(M2C_FIELD(temp_v0_3, u8 *, 5)) & 0xFF)) || (temp_s1 == (func_0022BC60(M2C_FIELD(temp_v0_3, u8 *, 6)) & 0xFF))) && ((M2C_FIELD(temp_v0_3, u8 *, 0x16) & 1) == 1)) {
                    var_s5 = 1;
                } else {
                    var_s4 = (var_s4 + 1) & 0xFF;
                    if (var_s4 < (s32) temp_s2_2) {
                        goto loop_25;
                    }
                }
            }
            return var_s5;
        }
        return 0;
    }
    return 0;
}
