/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_003AFD40[];

void func_001A5F50(s32 arg0, s32 arg1) {
    M2C_FIELD(((*(s32 *)D_003AFD40) + (arg0 * 0x18)), s32 *, 4) = arg1;
}
