/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern void func_00240600(void);
extern void func_00240610(void);
extern int func_00240680(void);
extern int func_001B9DF0(void);
M2C_UNK func_0023E0E0(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C770(M2C_UNK, M2C_UNK);            /* extern */
extern char D_00510FD0[];

void func_0024BBB0(void) {
    if (func_00309420() == 0) {
        if (func_001B9DF0() != 0) {
            func_0023E0E0(0x10);
        } else if ((*(s32 *)D_00510FD0) == 4) {
            func_0023E0E0(4);
        } else {
            func_00240610();
            if (func_00240680() != 1) {
                func_0023E0E0(4);
            } else {
                func_0023E0E0(5);
            }
        }
    } else if (func_001B9DF0() == 0) {
        func_00D0C770(0xD, 0x6C0030);
    }
    func_00240600();
}
