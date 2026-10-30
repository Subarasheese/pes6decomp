/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_0053CF10[];
extern char D_0053CF14[];

s32 func_0024ED10(void) {
    if ((*(s32 *)D_0053CF14) != 0) {
        return M2C_FIELD(((void *)D_0053CF10), s32 (**)(), 4)();
    }
    return 0;
}
