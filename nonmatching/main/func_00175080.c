/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK DTX_CallUrpc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_0038DBD0[];
extern char D_0038DBD8[];
extern char D_0038DC00[];

void func_00175080(void) {
    if (((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) {
        if ((*(s32 *)D_0038DC00) != 0) {
            DTX_CallUrpc(0xF, 0, 0, 0, 0);
            (*(s32 *)D_0038DC00) = 0;
        }
    }
}
