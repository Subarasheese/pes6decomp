/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F9110(void);
extern s32 D_003EA860;
extern char D_00CCBFA0[];
extern char D_00CCBFC8[];

void func_00C7CEC0(void) {
    if (D_003EA860 != 0) {
        if ((*(u8 *)D_00CCBFC8) & 1) {
            func_002F9110();
            (*(s32 *)D_00CCBFA0) = 0;
            (*(u8 *)D_00CCBFC8) = ((*(u8 *)D_00CCBFC8) & ~1) | (0 & 1);
        }
        D_003EA860 = 0;
    }
}
