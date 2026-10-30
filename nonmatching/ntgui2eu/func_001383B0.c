/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00131760(s32);                         /* extern */
extern char D_011D78A4[];
extern char D_011D78D8[];

void func_001383B0(void) {
    func_00131760((*(s32 *)D_011D78A4));
    func_00131760((*(s32 *)D_011D78D8));
}
