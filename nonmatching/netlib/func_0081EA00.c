/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
extern char D_008A4250[];
extern char D_008A4260[];

s32 func_0081EA00(void) {
    if ((*(s32 *)D_008A4250) != 1) {
        if (func_00154490(1, 8) != 0) {
            return 1;
        }
        return (*(u8 *)D_008A4260) == 1;
    }
    return 0;
}
