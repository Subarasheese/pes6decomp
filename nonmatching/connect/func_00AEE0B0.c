/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_00AEDE30(s32);                         /* extern */

void func_00AEE0B0(void *arg0) {
    if (arg0 != NULL) {
        func_001EDD90(M2C_FIELD(arg0, s32 *, 0));
        func_00AEDE30(M2C_FIELD(arg0, s32 *, 8));
        func_00153FA0(arg0);
    }
}
