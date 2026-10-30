/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(M2C_UNK *, void *, M2C_UNK);  /* extern */
s32 func_00BF5A40(s32);                             /* extern */
extern s32 D_003EB0D8;
extern char D_00CE8E20[];
extern char D_00CEA1C8[];
extern char D_00CEA264[];
extern char D_00CEA27C[];

void func_00BF3B70(s32 arg0) {
    if (D_003EB0D8 != 1) {
        func_001C4730(((void *)D_00CEA1C8), ((void *)D_00CE8E20) + ((*(s32 *)D_00CEA264) * 0x88), 0x88);
        (*(s32 *)D_00CEA27C) = 1;
        D_003EB0D8 = 1;
    }
    if (func_00BF5A40(arg0) != 0) {
        D_003EB0D8 = 0;
    }
}
