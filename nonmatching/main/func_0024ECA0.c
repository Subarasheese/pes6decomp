/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0053CF10[];
extern char D_0053CF18[];

s32 func_0024ECA0(void) {
    if ((*(s32 *)D_0053CF18) != 0) {
        M2C_FIELD(((void *)D_0053CF10), M2C_UNK (**)(), 8)();
    }
    return 1;
}
