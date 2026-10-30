/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BB6[];
extern char D_00591DCD[];

void func_0090E510(s32 arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (s32) (*(u8 *)D_00591DCD);
    if ((*(u8 *)D_00591BB6) == 1) {
        *arg2 = 0;
        if (arg0 == 0) {
            *arg1 = 3;
        }
    } else {
        if (arg0 != 1) {
            *arg2 = 0;
            return;
        }
        *arg2 = 1;
    }
}
