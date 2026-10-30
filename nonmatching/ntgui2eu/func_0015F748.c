/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001232E8(M2C_UNK);                     /* extern */
M2C_UNK func_00136FB0();                            /* extern */
M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00154018(M2C_UNK *);                       /* extern */
extern char D_005BEE0C[];
extern char D_005FCFF0[];

void func_0015F748(s32 arg0) {
    if ((*(s32 *)D_005BEE0C) != 0) {
        if (arg0 >= 0) {
            if (arg0 < 2) {
                if (func_00154018((M2C_UNK *)0x5FCFD8) != 0) {
                    if (func_00154018(((void *)D_005FCFF0)) != 0) {
                        func_00136FD8(3, 0);
                        return;
                    }
                    func_00136FD8(3, 0);
                    return;
                }
                func_00136FD8(3, 0);
                return;
            }
            if (arg0 != 2) {
                return;
            }
            func_001232E8(0);
            return;
        }
        return;
    }
    func_00136FB0();
}
