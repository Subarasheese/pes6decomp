/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002D5410(void);
extern char D_0039867C[];
extern char D_00591C09[];
extern char D_00591F2C[];

s32 func_001BF560(void) {
    switch ((*(s32 *)D_0039867C)) {                           /* irregular */
    case 7:
        return 8;
    case 8:
        return 7;
    default:
        func_002D5410();
        if ((*(u8 *)D_00591C09) == 7) {
            return 1;
        }
        if ((*(u8 *)D_00591F2C) != 2) {
            return 8;
        }
        return 7;
    }
}
