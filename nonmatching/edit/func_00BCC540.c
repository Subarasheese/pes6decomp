/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002CD1C0(s32, s32);
M2C_UNK func_001B3E10(s32);                         /* extern */

void func_00BCC540(s32 arg0, s32 arg1) {
    func_002CD1C0(arg0, arg1);
    func_001B3E10(arg0);
}
