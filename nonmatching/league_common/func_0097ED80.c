/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022C140(s32);
extern void * func_0022C1E0(void);
extern void * func_00229380(void);
void func_0097ED80(void) {
    s32 temp_v0;
    s32 var_v1;
    u8 temp_s1;
    void *temp_s0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s0 = func_0022C1E0();
    if ((func_00229380() != NULL) && (temp_s0 != NULL)) {
        temp_s1 = M2C_FIELD(temp_s0, u8 *, 1);
        temp_v0 = func_0022C140((s32) temp_s1);
        if ((temp_v0 != 0) && !(temp_s1 & 0xFF)) {
            temp_v0_2 = func_00229380();
            if (temp_v0_2 != NULL) {
                if (!(M2C_FIELD(temp_v0_2, u8 *, 4) & 4)) {
                    var_v1 = 0;
                } else {
                    var_v1 = 1;
                }
            } else {
                var_v1 = 0;
            }
            if (((var_v1 & 0xFF) == 1) && (M2C_FIELD(temp_v0, u8 *, 0xA) == 0)) {
                temp_v0_3 = func_00229380();
                if (temp_v0_3 != NULL) {
                    M2C_FIELD(temp_v0_3, u8 *, 4) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 4) & 0xFB);
                }
            }
        }
    }
}
