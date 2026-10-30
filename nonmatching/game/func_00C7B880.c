/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5610(void *);
extern s32 D_003EA854;
extern char D_00CCBF3C[];
extern char D_00CCBF44[];

void func_00C7B880(void) {
    if (D_003EA854 != 0) {
        func_002D5610(((void *)D_00CCBF3C));
        (*(s32 *)D_00CCBF44) = 0;
    }
}
