/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern char D_0058D7A7[];
extern char D_00921D44[];

void func_0091E820(void) {
    if ((*(s8 *)D_0058D7A7) != 0) {
        (*(s32 *)D_00921D44) = 5;
        return;
    }
    (*(s32 *)D_00921D44) = 0;
    func_001BC300();
}
