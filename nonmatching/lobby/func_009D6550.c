/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099C7E0(M2C_UNK);                         /* extern */
M2C_UNK func_009D4660();                            /* extern */
extern char D_00A7DE90[];

void func_009D6550(void) {
    if ((*(s32 *)D_00A7DE90) == 0) {
        (*(s32 *)D_00A7DE90) = func_0099C7E0(1);
        func_009D4660();
    }
}
