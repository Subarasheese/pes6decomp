/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00363BD0(void);
extern char D_00A79C80[];

void func_00960E60(void) {
    if ((*(u8 *)D_00A79C80) == 1) {
        func_00363BD0();
        (*(u8 *)D_00A79C80) = 0;
    }
}
