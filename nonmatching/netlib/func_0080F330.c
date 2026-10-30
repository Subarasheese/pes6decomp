/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
extern char D_008B145C[];
extern char D_008B1460[];

s32 func_0080F330(void *arg0) {
    if (func_002DCA40() == 0) {
        (*(s32 *)D_008B1460) = M2C_FIELD(arg0, s32 *, 0xD0);
        (*(s32 *)D_008B145C) = M2C_FIELD(arg0, s32 *, 0xD4);
    }
    return 0;
}
