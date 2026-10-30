/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005C8DE4[];
extern M2C_UNK (*D_011FD208)(s32, M2C_UNK);
extern char D_011FD210[];

void func_00190FF0(void) {
    if (D_011FD208 != NULL) {
        if ((*(s32 *)D_005C8DE4) == 0) {
            D_011FD208((*(s32 *)D_011FD210), D_011FD208);
        }
    }
}
