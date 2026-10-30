/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0090F820();                                /* extern */
M2C_UNK func_00915020();                            /* extern */
M2C_UNK func_00915520(s32);                         /* extern */
extern s32 *D_00923FCC;

s32 func_00914FA0(void) {
    if (func_0090F820() != 0) {

    } else if (*D_00923FCC != 0) {
        func_0026E840(0x8400F802);
        *D_00923FCC -= 1;
        func_00915520(*D_00923FCC);
        func_00915020();
    }
    return 0;
}
