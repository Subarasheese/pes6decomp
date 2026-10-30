/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00921D20[];
extern char D_00921D24[];
extern char D_00921D28[];

s32 func_008FCB80(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        if (M2C_FIELD(arg0, f32 *, 0x10) < 0.0f) {
            (*(s32 *)D_00921D20) = 1;
            (*(s32 *)D_00921D24) = 0;
        } else {
            (*(s32 *)D_00921D20) = 0;
            (*(s32 *)D_00921D24) = 1;
        }
    }
    (*(s32 *)D_00921D28) = M2C_FIELD(arg0, s32 *, 4);
    return 1;
}
