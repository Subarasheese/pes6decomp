/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B08F0(void);
M2C_UNK func_001B09A0(s32);                         /* extern */

void func_00BCC5F0(void *arg0) {
    s32 temp_s0;

    temp_s0 = *M2C_FIELD(arg0, s32 **, 4);
    func_001B08F0();
    func_001B09A0(temp_s0);
}
