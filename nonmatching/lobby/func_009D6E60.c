/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C7C0(s32);                         /* extern */
M2C_UNK func_009D1590();                            /* extern */
M2C_UNK func_009D4A10();                            /* extern */
extern char D_00A7DE98[];

void func_009D6E60(void) {
    if ((*(s32 *)D_00A7DE98) != 0) {
        func_009D4A10();
        func_009D1590();
        func_0099C7C0((*(s32 *)D_00A7DE98));
        (*(s32 *)D_00A7DE98) = 0;
    }
}
