/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_00AE91C0(s32);                         /* extern */
M2C_UNK func_00AED800(s32);                         /* extern */
M2C_UNK func_00AEDE30(s32);                         /* extern */
M2C_UNK func_00AEE0B0(s32);                         /* extern */

void func_00AE4C00(void *arg0) {
    s32 temp_s0;
    s32 var_s3;
    void **var_s1;
    void *temp_s2;

    if (arg0 != NULL) {
        func_00AEE0B0(M2C_FIELD(arg0, s32 *, 0xC));
        func_00AE91C0(M2C_FIELD(arg0, s32 *, 8));
        temp_s0 = M2C_FIELD(arg0, s32 *, 4);
        var_s1 = M2C_FIELD(arg0, void ***, 0);
        var_s3 = 0;
        if (temp_s0 > 0) {
            do {
                temp_s2 = *var_s1;
                if (temp_s2 != NULL) {
                    func_00AED800(M2C_FIELD(temp_s2, s32 *, 0));
                    func_00AEDE30(M2C_FIELD(temp_s2, s32 *, 4));
                    func_00153FA0(temp_s2);
                }
                var_s3 += 1;
                var_s1 += 4;
            } while (var_s3 < temp_s0);
        }
    }
    func_00153FA0(M2C_FIELD(arg0, void ***, 0));
    func_00153FA0(arg0);
}
