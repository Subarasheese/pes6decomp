/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017A0E0(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00396E0C[];
extern char D_00510FB0[];

void func_0017A1C8(void) {
    (*(s32 *)D_00396E0C) -= 1;
    if ((*(s32 *)D_00396E0C) == 0) {
        func_0017A0E0();
        func_001C48E8(((void *)D_00510FB0), 0, 8);
    }
}
