/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF940(s32);
void *func_001EDBA0(void *arg0, void *arg1) {
    s32 var_v1_2;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_v0 = M2C_FIELD(arg0, void **, 0);
        var_v1 = temp_v0;
loop_3:
        if (var_v1 != arg1) {
            var_v1 = M2C_FIELD(var_v1, void **, 8);
            if (var_v1 == NULL) {
                var_v1_2 = 0;
            } else {
                goto loop_3;
            }
        } else {
            var_v1_2 = 1;
        }
        if (var_v1_2 == 0) {
            return NULL;
        }
        temp_s0 = M2C_FIELD(arg1, void **, 8);
        if (temp_v0 != arg1) {
            if (M2C_FIELD(arg0, void **, 4) == arg1) {
                M2C_FIELD(arg0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 4);
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8) = 0;
            } else {
                M2C_FIELD(temp_s0, void **, 4) = (void *) M2C_FIELD(arg1, void **, 4);
                M2C_FIELD(M2C_FIELD(arg1, void **, 4), void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
            }
        } else {
            M2C_FIELD(arg0, void **, 0) = temp_s0;
            temp_v0_2 = M2C_FIELD(arg0, void **, 0);
            if (temp_v0_2 == NULL) {
                M2C_FIELD(arg0, void **, 4) = NULL;
            } else {
                M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
            }
        }
        M2C_FIELD(arg0, u16 *, 0x34) = (u16) (M2C_FIELD(arg0, u16 *, 0x34) - 1);
        func_001EF940((s32) arg1);
        M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 2);
        return temp_s0;
    }
    return NULL;
}
