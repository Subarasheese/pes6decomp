/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5610(void *);
extern s32 D_003EA860;
extern char D_00CCBFBC[];
extern char D_00CCBFC4[];

void func_00C7CD10(void) {
    if (D_003EA860 != 0) {
        func_002D5610(((void *)D_00CCBFBC));
        (*(s32 *)D_00CCBFC4) = 0;
    }
}
