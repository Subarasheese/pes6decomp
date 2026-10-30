/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0018C7A0(void);
M2C_UNK func_0016B498();                            /* extern */
M2C_UNK func_0016B760();                            /* extern */
M2C_UNK func_0018C6E8();                            /* extern */
M2C_UNK func_0018C810();                            /* extern */
M2C_UNK func_0018D7C8();                            /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
extern char D_011D7460[];

void func_00135950(void) {
    func_0019B160((*(s32 *)D_011D7460));
    func_0018D7C8();
    func_0018C6E8();
    func_0016B760();
    func_0016B498();
    func_0018C7A0();
    func_0018C810();
}
