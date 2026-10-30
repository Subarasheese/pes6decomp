/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B59C4[];
extern char D_011D4D40[];
extern char D_011D4D4C[];
extern char D_011D4D50[];

void func_0012C360(M2C_UNK arg0, s64 arg1) {
    s64 temp_a3;

    temp_a3 = (s64) (arg1 << 0x20) >> 0x20;
    switch (temp_a3) {                              /* irregular */
    case 0:
        (*(s32 *)D_011D4D50) = 1;
        (*(s32 *)D_011D4D40) = 1;
        (*(s32 *)D_011D4D4C) += (*(s32 *)D_005B59C4);
        return;
    case 1:
        (*(s32 *)D_011D4D40) = (s32) temp_a3;
        (*(s32 *)D_011D4D50) = (s32) temp_a3;
        *(s32 *)0x011D4D4C -= (*(s32 *)D_005B59C4);
        return;
    }
}
