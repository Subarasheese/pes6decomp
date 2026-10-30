/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00270590(M2C_UNK *);                   /* extern */
M2C_UNK func_00847FB0();                            /* extern */
M2C_UNK func_0084FBF0();                            /* extern */
M2C_UNK func_00851110();                            /* extern */
s32 func_008511A0();                                /* extern */
extern char D_008B1E80[];

void func_008550D0(void) {
    if (func_008511A0() == 0) {
        func_0084FBF0();
        func_00270590(((void *)D_008B1E80));
        func_00847FB0();
        func_00851110();
    }
}
