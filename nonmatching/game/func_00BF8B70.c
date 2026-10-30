/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AC470(void);
extern void func_001AC550(void *);
extern void func_001ABA60(s32);
M2C_UNK func_001AB650(s32);                         /* extern */
extern s32 *D_0058E5B4;

s32 func_00BF8B70(void) {
    s32 temp_s0;

    temp_s0 = *D_0058E5B4;
    func_001ABA60(temp_s0);
    func_001AB650(temp_s0);
    func_001AC550((void *) temp_s0);
    func_001AC470();
    return 1;
}
