/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_006562F0(s32);                         /* extern */
extern char D_0065C104[];
extern char D_0065C120[];
extern char D_0065C124[];

void func_00624770(void) {
    func_006562F0((*(s32 *)D_0065C104));
    (*(s32 *)D_0065C104) = 0;
    func_006562F0((*(s32 *)D_0065C124));
    func_001C48E8(((void *)D_0065C120), 0, 0x18);
}
