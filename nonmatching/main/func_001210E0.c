/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0013E310(M2C_UNK);                     /* extern */
M2C_UNK func_0013EA20();                            /* extern */
M2C_UNK func_001814C0();                            /* extern */
M2C_UNK func_001CDB60();                            /* extern */
M2C_UNK func_002FB2B0();                            /* extern */
extern char D_00374910[];
extern char D_003FAE64[];
extern char D_003FAE65[];

void func_001210E0(void) {
    func_001814C0();
    func_002FB2B0();
    func_001CDB60();
    ((void (*)())(((u8 *)D_00374910) + ((*(u8 *)D_003FAE64) * 4)))();
    if (!((*(u8 *)D_003FAE65) & 1)) {
        func_0013E310(0x106);
        return;
    }
    func_0013EA20();
}
