/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0090F820();                                /* extern */
M2C_UNK func_00916700();                            /* extern */
M2C_UNK func_00916970(s32);                         /* extern */
extern s32 *D_00923FCC;

s32 func_00916680(void) {
    if (func_0090F820() != 0) {

    } else if (*D_00923FCC > 0) {
        func_0026E840(0x8400F802);
        *D_00923FCC -= 1;
        func_00916970(*D_00923FCC);
        func_00916700();
    }
    return 0;
}
