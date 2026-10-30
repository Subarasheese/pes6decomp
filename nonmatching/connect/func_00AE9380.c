/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00AEC360(s32);                         /* extern */
M2C_UNK func_00AED800(s32);                         /* extern */
M2C_UNK func_00AEDBD0(s32);                         /* extern */
M2C_UNK func_00AEDE30(s32);                         /* extern */
M2C_UNK func_00AEE0B0(s32);                         /* extern */

void func_00AE9380(void *arg0) {
    s32 *temp_v0;
    s32 temp_s1;
    s32 var_s4;
    void **var_s2;
    void *temp_s3;

    if (arg0 != NULL) {
        func_00AEDBD0(M2C_FIELD(arg0, s32 *, 8));
        func_00AEE0B0(M2C_FIELD(arg0, s32 *, 0xC));
        var_s2 = M2C_FIELD(arg0, void ***, 4);
        temp_s1 = M2C_FIELD(arg0, s32 *, 0);
        if (var_s2 != NULL) {
            var_s4 = 0;
            if (temp_s1 > 0) {
                do {
                    temp_s3 = *var_s2;
                    if (temp_s3 != NULL) {
                        temp_v0 = M2C_FIELD(temp_s3, s32 **, 8);
                        if (temp_v0 != NULL) {
                            func_001EDD90(*temp_v0);
                        }
                        func_00AEDE30(M2C_FIELD(temp_s3, s32 *, 4));
                        func_00AED800(M2C_FIELD(temp_s3, s32 *, 0));
                        func_00153FA0(M2C_FIELD(temp_s3, s32 **, 8));
                        func_00153FA0(temp_s3);
                    }
                    var_s4 += 1;
                    var_s2 += 4;
                } while (var_s4 < temp_s1);
            }
        }
        func_00153FA0(M2C_FIELD(arg0, void ***, 4));
        if (arg0 != NULL) {
            func_00AEC360(M2C_FIELD(arg0, s32 *, 0x10));
            func_00AEC360(M2C_FIELD(arg0, s32 *, 0x14));
        }
        func_00153FA0(arg0);
    }
}
