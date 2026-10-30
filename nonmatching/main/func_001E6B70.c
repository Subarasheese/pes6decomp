/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern int func_00145480(void *);
M2C_UNK func_00145590(void *);                      /* extern */
extern void **D_0052B130;
extern void *D_0052B134;

s32 func_001E6B70(s32 arg0) {
    s32 var_v0;
    u8 temp_v0;
    void **temp_v1;
    void **var_s0;
    void *temp_a0;

    var_s0 = D_0052B130;
    if (var_s0 != NULL) {
loop_1:
        if (arg0 != func_00145480(M2C_FIELD(var_s0, void **, 8))) {
            var_s0 = M2C_FIELD(var_s0, void ***, 4);
            if (var_s0 != NULL) {
                goto loop_1;
            }
        }
    } else {
        var_s0 = NULL;
    }
    if (var_s0 == NULL) {
        var_v0 = 0;
    } else {
        temp_v0 = M2C_FIELD(var_s0, u8 *, 0x18) - 1;
        M2C_FIELD(var_s0, u8 *, 0x18) = temp_v0;
        if (temp_v0 & 0xFF) {
            var_v0 = 0;
        } else {
            temp_a0 = M2C_FIELD(var_s0, void **, 0);
            temp_v1 = M2C_FIELD(var_s0, void ***, 4);
            if (temp_a0 != NULL) {
                M2C_FIELD(temp_a0, void ***, 4) = temp_v1;
            } else {
                D_0052B130 = temp_v1;
            }
            if (temp_v1 != NULL) {
                *temp_v1 = temp_a0;
            } else {
                D_0052B134 = temp_a0;
            }
            if (M2C_FIELD(var_s0, u8 *, 0x19) != 2) {
                func_00145590(M2C_FIELD(var_s0, void **, 8));
            }
            func_00153FA0(M2C_FIELD(var_s0, void **, 8));
            func_00153FA0(var_s0);
            var_v0 = 1;
        }
    }
    return var_v0;
}
