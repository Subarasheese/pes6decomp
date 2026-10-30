/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EC520(s32);
extern void func_001EB170(void *);
extern void func_00153FA0(void *);
M2C_UNK func_001E50C0(void *);                      /* extern */

void func_001DF7B0(void *arg0) {
    void *temp_a0;

    if (arg0 != NULL) {
        func_001EC520(M2C_FIELD(arg0, s32 *, 0x58));
        func_001EB170(M2C_FIELD(arg0, void **, 0x5C));
        func_001E50C0(arg0);
        func_00153FA0(M2C_FIELD(arg0, void **, 0x18));
        M2C_FIELD(arg0, void **, 0x18) = NULL;
        temp_a0 = M2C_FIELD(arg0, void **, 0x3C);
        if (temp_a0 != NULL) {
            func_00153FA0(temp_a0);
        }
        func_00153FA0(arg0);
    }
}
