/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(M2C_UNK *, s32, s32);         /* extern */
extern char D_00CCAD60[];

s32 func_00C14F70(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        func_001C4730(((void *)D_00CCAD60), arg0, arg1);
    }
    return arg0 + arg1;
}
