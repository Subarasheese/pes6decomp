/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
extern void func_00153FA0(void *);
M2C_UNK func_002F2ED0(void *);                      /* extern */
s32 func_002F3850(void *);                          /* extern */
M2C_UNK func_00AECBE0(void **);                     /* extern */

s32 func_00AED310(void *arg0) {
    s32 *temp_v1_2;
    s32 var_s0;
    void **temp_s0;
    void **temp_s1;
    void **temp_v1;

    temp_v1 = M2C_FIELD(arg0, void ***, 0);
    var_s0 = 0;
    if (temp_v1 != NULL) {
        if ((M2C_FIELD(arg0, u8 *, 8) & 1) && (func_002F3850(*temp_v1) == 4)) {
            temp_s0 = M2C_FIELD(arg0, void ***, 0);
            if (temp_s0 != NULL) {
                func_002F4E10(M2C_FIELD(temp_s0, void **, 0));
                func_00153FA0(M2C_FIELD(temp_s0, void **, 4));
                func_00153FA0(temp_s0);
            }
            M2C_FIELD(arg0, void ***, 0) = NULL;
            temp_v1_2 = M2C_FIELD(arg0, s32 **, 4);
            if (temp_v1_2 != NULL) {
                *temp_v1_2 = 1;
            }
            var_s0 = 1;
        }
        temp_s1 = M2C_FIELD(arg0, void ***, 0);
        if ((temp_s1 != NULL) && (M2C_FIELD(temp_s1, void **, 0) != NULL)) {
            func_00AECBE0(temp_s1);
            func_002F2ED0(M2C_FIELD(temp_s1, void **, 0));
        }
    } else {
        var_s0 = 1;
    }
    return var_s0;
}
