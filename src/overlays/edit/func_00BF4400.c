/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CE8E20[];

void func_00BF4400(s32 arg0, s32 arg1) {
    M2C_FIELD((((char *)D_00CE8E20) + (arg0 * 0x146C)), s32 *, 0x1450) = (s32) (arg1 & 0xFF);
}
