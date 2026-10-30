/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165AE0(s32);                         /* extern */
extern char D_011D4D8C[];
extern char D_011D4D90[];

void func_0012F350(void) {
    if ((*(s32 *)D_011D4D90) != 0) {
        func_00165AE0((*(s32 *)D_011D4D90));
    }
    if ((*(s32 *)D_011D4D8C) != 0) {
        func_00165AE0((*(s32 *)D_011D4D8C));
    }
}
