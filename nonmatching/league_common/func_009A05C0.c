/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0023AFC0(s32);
M2C_UNK func_0099B8C0(s32);                         /* extern */

void func_009A05C0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 & 0xFF;
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_0023AFC0(0);
        break;
    case 0:
        func_0023AFC0(1);
        break;
    }
    func_0099B8C0(arg0);
}
