/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00CDAB90(void *, s32);                 /* extern */
s32 func_00CDACC0(void *, s32);                     /* extern */
s32 func_00CDB020(void *, s32);                     /* extern */
M2C_UNK func_00CDB370(void *, s32);                 /* extern */
M2C_UNK func_00CE4210();                            /* extern */
extern void *D_003EB274;

void func_00CDA960(void) {
    s32 temp_a1;
    void *temp_s0;
    void *var_s1;

    var_s1 = D_003EB274;
    if (var_s1 != NULL) {
        func_00CE4210();
    }
    if (var_s1 != NULL) {
loop_3:
        temp_a1 = M2C_FIELD(var_s1, s32 *, 0);
        temp_s0 = M2C_FIELD(var_s1, void **, 0xB0);
        switch (temp_a1) {                          /* irregular */
        case 2:
            break;
        case 0:
            func_00CDB370(var_s1, temp_a1);
            M2C_FIELD(var_s1, s32 *, 0) = (s32) (M2C_FIELD(var_s1, s32 *, 0) + 1);
            break;
        case 1:
            if (M2C_FIELD(var_s1, s32 *, 0x98) == 0) {
                if (func_00CDB020(var_s1, temp_a1) != 0) {
                    M2C_FIELD(var_s1, s32 *, 0) = (s32) (M2C_FIELD(var_s1, s32 *, 0) + 1);
                }
            } else if (func_00CDACC0(var_s1, temp_a1) != 0) {
                M2C_FIELD(var_s1, s32 *, 0) = (s32) (M2C_FIELD(var_s1, s32 *, 0) + 1);
            }
            break;
        case 3:
            func_00CDAB90(var_s1, temp_a1);
            break;
        default:
            M2C_FIELD(var_s1, s32 *, 0) = 3;
            break;
        }
        var_s1 = temp_s0;
        if (D_003EB274 != NULL) {
            if (temp_s0 == NULL) {

            } else {
                goto loop_3;
            }
        }
    }
}
