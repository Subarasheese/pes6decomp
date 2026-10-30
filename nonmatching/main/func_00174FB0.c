/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK DTX_CallUrpc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_0038DBD0[];
extern char D_0038DBD8[];
extern char D_0038DC10[];

void func_00174FB0(void) {
    if (((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) {
        DTX_CallUrpc(0xD, 0, 0, 0, 0);
        M2C_FIELD(((void *)D_0038DC10), s32 *, 4) = 0;
        M2C_FIELD(((void *)D_0038DC10), s32 *, 0) = 0;
    }
}
