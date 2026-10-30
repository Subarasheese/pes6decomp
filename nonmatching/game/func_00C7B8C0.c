/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA854;
extern char D_00CCBF44[];
extern char D_00CCBF49[];
extern char D_00CCBF4C[];

void func_00C7B8C0(s32 arg0) {
    if (D_003EA854 != 0) {
        (*(s32 *)D_00CCBF4C) = arg0;
        (*(s32 *)D_00CCBF44) = 0xB4;
        (*(u8 *)D_00CCBF49) = ((*(u8 *)D_00CCBF49) & ~1) | 1;
    }
}
