/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7920(void);
extern char D_00CE4E90[];
extern char D_00CE4E94[];

void func_00BC3DA0(void) {
    if ((*(s32 *)D_00CE4E94) != 0) {
        func_001B7920();
        (*(s32 *)D_00CE4E90) = (*(s32 *)D_00CE4E94);
        (*(s32 *)D_00CE4E94) = 0;
    }
}
