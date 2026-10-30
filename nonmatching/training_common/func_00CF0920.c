/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B8DC0(void);
extern u32 func_00CECE10(void);
extern void func_001B7A90(void);
M2C_UNK func_00CE9B90();                            /* extern */
M2C_UNK func_00CECDB0();                            /* extern */
extern s32 D_003EB324;

s32 func_00CF0920(void) {
    func_00CE9B90();
    func_00CECE10();
    func_00CECDB0();
    func_001B8DC0();
    func_001B7A90();
    if (D_003EB324 == 3) {
        D_003EB324 = 0;
    }
    return 1;
}
