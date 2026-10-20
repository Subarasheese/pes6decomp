/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001398B0(s32);                             /* extern */
extern void *D_003E97FC;
extern char D_004FDD40[];

void func_00142690(void *arg0) {
    M2C_FIELD(D_003E97FC, s32 *, 8) = func_001398B0(M2C_FIELD(arg0, s32 *, 0x44) * 0x10);
    (*(s32 *)D_004FDD40) = 0;
}
