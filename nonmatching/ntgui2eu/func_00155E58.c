/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586C8();                            /* extern */
extern char D_011E21FC[];

void func_00155E58(void) {
    func_001586C8();
    (*(s32 *)D_011E21FC) = 3;
}
