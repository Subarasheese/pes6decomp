/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CDFA00[];

void func_00B91590(s32 arg0, s32 arg1) {
    M2C_FIELD((((char *)D_00CDFA00) + (arg0 * 0x18)), s8 *, 0x11) = (s8) arg1;
}
