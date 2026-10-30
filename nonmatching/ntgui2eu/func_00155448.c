/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011E0D50[];
extern char D_011E0D54[];
extern char D_011E0D58[];

void func_00155448(void) {
    (*(s32 *)D_011E0D54) = 0xA;
    (*(s32 *)D_011E0D50) = 0;
    (*(s32 *)D_011E0D58) = 0;
}
