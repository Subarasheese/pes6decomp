/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001B42B0(s32, s32, s32);               /* extern */
s32 func_002F7EA0();                                /* extern */

void func_002CD1C0(s32 arg0, s32 arg1) {
    func_001B42B0(arg0, arg1, func_002F7EA0() & 0xFF);
}
