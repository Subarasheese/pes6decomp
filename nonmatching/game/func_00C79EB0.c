/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA848;
extern char D_00CCBF18[];

void func_00C79EB0(void) {
    s32 temp_a5;

    if (D_003EA848 != 0) {
        temp_a5 = 0 & 1;
        (*(u8 *)D_00CCBF18) = ((*(u8 *)D_00CCBF18) & ~1) | temp_a5;
        (*(u8 *)D_00CCBF18) = ((*(u8 *)D_00CCBF18) & ~2) | (temp_a5 * 2);
    }
}
