/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00C70540();                            /* extern */
M2C_UNK func_00C705D0();                            /* extern */
M2C_UNK func_00C7B700();                            /* extern */
M2C_UNK func_00C7B790();                            /* extern */
M2C_UNK func_00C7CA50();                            /* extern */
M2C_UNK func_00C7CAE0();                            /* extern */
M2C_UNK func_00C869B0(s32);                         /* extern */
M2C_UNK func_00C86FE0();                            /* extern */
M2C_UNK func_00C870B0();                            /* extern */
extern char D_00CCD074[];

void func_00C86A50(s32 arg0) {
    if ((*(u8 *)D_00CCD074) & 1) {
        if ((func_002DCA30() != 0) && ((*(u8 *)D_00CCD074) & 1)) {
            if (arg0 == 1) {
                func_00C705D0();
                func_00C7CAE0();
                func_00C7B790();
                func_00C870B0();
            } else {
                func_00C70540();
                func_00C7B700();
                func_00C7CA50();
                func_00C86FE0();
            }
        }
        func_00C869B0(arg0);
    }
}
