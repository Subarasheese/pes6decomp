/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00815B70(M2C_UNK);                     /* extern */
M2C_UNK func_00D0CB50();                            /* extern */
M2C_UNK func_00D0FBE0(M2C_UNK);                     /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern char D_0088A7A0[];
extern char D_008B2460[];
extern M2C_UNK func_00814FB0;

void func_00880C60(void) {
    func_00815B70(0);
    func_00D10140(0x10);
    func_00D0CB50();
    func_008157A0(&func_00814FB0, &func_00814FB0, ((void *)D_0088A7A0));
    func_00D0FBE0(1);
    (*(s32 *)D_008B2460) = 1;
}
