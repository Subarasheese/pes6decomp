/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7B20(void);
extern char D_00CE4E90[];
extern char D_00CE4E98[];

void func_00BC3FB0(s32 arg0) {
    if (arg0 != (*(s32 *)D_00CE4E90)) {
        if (arg0 != (*(s32 *)D_00CE4E90)) {
            func_001B7B20();
        }
        (*(s32 *)D_00CE4E90) = arg0;
        (*(s32 *)D_00CE4E98) = 1;
    }
}
