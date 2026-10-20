/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00264F50(s32);                             /* extern */
M2C_UNK func_00265520(s32, s32, s32);               /* extern */

void func_0020A2A0(s32 arg0, s32 arg1, s32 arg2) {
    func_00265520(arg0, arg2, func_00264F50(arg1));
}
