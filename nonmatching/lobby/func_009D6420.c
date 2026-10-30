/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C7C0(s32);                         /* extern */
M2C_UNK func_009D45B0();                            /* extern */
extern char D_00A7DE90[];

void func_009D6420(void) {
    func_009D45B0();
    if ((*(s32 *)D_00A7DE90) != 0) {
        func_0099C7C0((*(s32 *)D_00A7DE90));
        (*(s32 *)D_00A7DE90) = 0;
    }
}
