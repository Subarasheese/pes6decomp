/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008187D0();                            /* extern */
M2C_UNK func_00843690(M2C_UNK);                     /* extern */
M2C_UNK func_0099C7C0(s32);                         /* extern */
M2C_UNK func_009CCC20();                            /* extern */
extern char D_00A7DDB8[];

void func_009CD270(void) {
    if ((*(s32 *)D_00A7DDB8) != 0) {
        func_00843690(3);
        func_008187D0();
        func_009CCC20();
        func_0099C7C0((*(s32 *)D_00A7DDB8));
        (*(s32 *)D_00A7DDB8) = 0;
    }
}
