/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B96690(void);
M2C_UNK func_00B94F30();                            /* extern */
M2C_UNK func_00B9CE80();                            /* extern */
M2C_UNK func_00BC2BF0();                            /* extern */
extern char D_00592294[];

void func_009B6C00(void) {
    func_00B94F30();
    func_00B96690();
    func_00B9CE80();
    func_00BC2BF0();
    (*(s8 *)D_00592294) = 0;
}
