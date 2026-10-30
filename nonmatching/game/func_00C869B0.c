/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C6E730();                            /* extern */
M2C_UNK func_00C6E820();                            /* extern */
M2C_UNK func_00C6F770();                            /* extern */
M2C_UNK func_00C6F850();                            /* extern */
M2C_UNK func_00C71D20();                            /* extern */
M2C_UNK func_00C71DF0();                            /* extern */
M2C_UNK func_00C90290();                            /* extern */
M2C_UNK func_00C90310();                            /* extern */
M2C_UNK func_00C92420();                            /* extern */
M2C_UNK func_00C924C0();                            /* extern */
M2C_UNK func_00C93580();                            /* extern */
M2C_UNK func_00C93610();                            /* extern */
extern char D_00CCD074[];

void func_00C869B0(s32 arg0) {
    if ((*(u8 *)D_00CCD074) & 1) {
        if (arg0 == 1) {
            func_00C90310();
            func_00C93610();
            func_00C71DF0();
            func_00C6E820();
            func_00C6F850();
            func_00C924C0();
            return;
        }
        func_00C90290();
        func_00C93580();
        func_00C71D20();
        func_00C6E730();
        func_00C6F770();
        func_00C92420();
    }
}
