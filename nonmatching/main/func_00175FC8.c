/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001610B0(M2C_UNK *, s32);              /* extern */
extern char D_0038DBD0[];
extern char D_0038DBD8[];
extern char D_003CC018[];

void func_00175FC8(M2C_UNK arg0, s32 arg1) {
    if ((((*(s32 *)D_0038DBD8) != 1) || ((*(s32 *)D_0038DBD0) > 0)) && (arg1 != 0x10)) {
        func_001610B0(((void *)D_003CC018), arg1);
    }
}
