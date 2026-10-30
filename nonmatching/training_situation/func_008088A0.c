/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017E120(int);
M2C_UNK func_00804BF0();                            /* extern */
M2C_UNK func_00B29E80(M2C_UNK);                     /* extern */
M2C_UNK func_00C82290();                            /* extern */
M2C_UNK func_00C8AA10(M2C_UNK);                     /* extern */
extern char D_005E3A94[];

s32 func_008088A0(void *arg0) {
    func_0017E120(0);
    func_00C8AA10(0);
    func_00C82290();
    (*(s32 *)D_005E3A94) = 0;
    func_00B29E80(2);
    M2C_FIELD(arg0, s8 *, 0xD0) = 0;
    func_00804BF0();
    return M2C_FIELD(arg0, s32 *, 0x80);
}
