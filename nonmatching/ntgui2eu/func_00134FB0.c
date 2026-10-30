/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011D6F1C)();
extern char D_011D6F20[];

void func_00134FB0(s32 arg0) {
    if (arg0 != 0) {
        (*(s32 *)D_011D6F20) -= 1;
    }
    D_011D6F1C();
}
