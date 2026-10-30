/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00204D90();                            /* extern */
M2C_UNK func_002D3590(M2C_UNK *);                   /* extern */
M2C_UNK func_008FF2F0();                            /* extern */
M2C_UNK func_008FF310();                            /* extern */
s32 func_00C75F80();                                /* extern */
extern char D_00921DBC[];
extern char D_00921DCC[];
extern char D_00923FDC[];

void func_00911100(void) {
    if ((*(s8 *)D_00921DCC) != 0) {
        func_002D3590(((void *)D_00921DBC));
    }
    if (func_00C75F80() != 0) {
        if ((*(s32 *)D_00923FDC) != 0) {
            func_008FF2F0();
            func_00204D90();
            func_008FF310();
            return;
        }
        func_00204D90();
    }
}
