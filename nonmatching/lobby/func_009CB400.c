/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008187D0();                            /* extern */
M2C_UNK func_00843690(M2C_UNK);                     /* extern */
M2C_UNK func_0099C7C0(s32);                         /* extern */
M2C_UNK func_009D2DC0();                            /* extern */
extern char D_00A7DDA0[];

void func_009CB400(void) {
    if ((*(s32 *)D_00A7DDA0) != 0) {
        func_00843690(3);
        func_008187D0();
        func_009D2DC0();
        func_0099C7C0((*(s32 *)D_00A7DDA0));
        (*(s32 *)D_00A7DDA0) = 0;
    }
}
