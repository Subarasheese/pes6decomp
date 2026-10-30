/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586C8();                            /* extern */
extern char D_011E21FC[];
extern char D_011E220C[];

void func_00155E28(void) {
    func_001586C8();
    (*(s32 *)D_011E21FC) = 3;
    (*(s32 *)D_011E220C) = 3;
}
