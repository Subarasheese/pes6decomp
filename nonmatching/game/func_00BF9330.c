/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BF8D60(u8, u8);                      /* extern */
extern char D_00CBD7B4[];

void func_00BF9330(s32 arg0, void *arg1) {
    switch (arg0) {                                 /* irregular */
    case 1:
        func_00BF8D60(0x64U, 0x64U);
        return;
    case 0:
        func_00BF8D60(M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1));
        return;
    case 2:
        (*(s8 *)D_00CBD7B4) = 1;
        return;
    }
}
