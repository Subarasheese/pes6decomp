/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586C8();                            /* extern */
extern char D_011E37CC[];
extern char D_011E37DC[];

void func_00157478(void) {
    func_001586C8();
    (*(s32 *)D_011E37CC) = 3;
    (*(s32 *)D_011E37DC) = 3;
}
