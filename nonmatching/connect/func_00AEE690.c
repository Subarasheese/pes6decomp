/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B7A90(void);
extern char D_00B02BB0[];

void func_00AEE690(void) {
    if ((*(s32 *)D_00B02BB0) != 0) {
        func_001B7A90();
        (*(s32 *)D_00B02BB0) = 0;
    }
}
