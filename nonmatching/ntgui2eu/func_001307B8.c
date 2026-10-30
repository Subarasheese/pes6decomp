/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011E610();                            /* extern */
M2C_UNK func_001541F0(M2C_UNK *);                   /* extern */
extern char D_005F9810[];
extern char D_011D4DCC[];

void func_001307B8(void) {
    (*(s32 *)D_011D4DCC) = 2;
    func_0011E610();
    func_001541F0(((void *)D_005F9810));
}
