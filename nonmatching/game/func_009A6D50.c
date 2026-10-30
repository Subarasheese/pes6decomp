/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002849D0(void);
M2C_UNK func_009945C0(M2C_UNK);                     /* extern */
extern char D_00CBA988[];

void func_009A6D50(s32 arg0) {
    M2C_UNK var_a0;

    (*(s32 *)D_00CBA988) = arg0;
    func_002849D0();
    var_a0 = 4;
    if ((arg0 != 4) && (arg0 != 3)) {
        var_a0 = 2;
        if (arg0 != 2) {
            var_a0 = 1;
            if (arg0 != 1) {
                return;
            }
        }
    }
    func_009945C0(var_a0);
}
