/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00AED800(s32);                         /* extern */
M2C_UNK func_00AEDE30(s32);                         /* extern */

void func_00AE91C0(void *arg0) {
    s32 *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 **, 8);
        if (temp_v0 != NULL) {
            func_001EDD90(*temp_v0);
        }
        func_00AEDE30(M2C_FIELD(arg0, s32 *, 4));
        func_00AED800(M2C_FIELD(arg0, s32 *, 0));
        func_00153FA0(M2C_FIELD(arg0, s32 **, 8));
        func_00153FA0(arg0);
    }
}
