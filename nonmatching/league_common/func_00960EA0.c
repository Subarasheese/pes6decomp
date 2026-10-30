/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00363C30(void);
M2C_UNK func_00363C40();                            /* extern */
extern char D_00A79C80[];

void func_00960EA0(void) {
    if (func_00363C30() == 0) {
        if ((*(u8 *)D_00A79C80) == 0) {
            func_00363C40();
            (*(u8 *)D_00A79C80) = 1;
        }
    } else {
        (*(u8 *)D_00A79C80) = 0;
    }
}
