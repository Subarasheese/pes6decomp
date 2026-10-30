/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EC520(s32);
extern void func_00153FA0(void *);
M2C_UNK func_001F3F20(void *);                      /* extern */

void func_001F4080(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_a0 != 0) {
            func_001EC520(temp_a0);
        }
        if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
            func_001F3F20(arg0);
        }
        func_00153FA0(arg0);
    }
}
