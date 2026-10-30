/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F9110(void);
extern s32 D_003EA854;
extern char D_00CCBF20[];
extern char D_00CCBF48[];

void func_00C7BA30(void) {
    if (D_003EA854 != 0) {
        if ((*(u8 *)D_00CCBF48) & 1) {
            func_002F9110();
            (*(s32 *)D_00CCBF20) = 0;
            (*(u8 *)D_00CCBF48) = ((*(u8 *)D_00CCBF48) & ~1) | (0 & 1);
        }
        D_003EA854 = 0;
    }
}
