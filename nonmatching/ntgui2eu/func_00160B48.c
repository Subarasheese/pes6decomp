/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00154510();                            /* extern */
M2C_UNK func_0015E638(M2C_UNK);                     /* extern */
extern char D_005B3744[];
extern char D_005BEE5C[];
extern M2C_UNK func_00160A28;

void func_00160B48(M2C_UNK arg0, s64 arg1) {
    s64 temp_s0;

    temp_s0 = (s64) (arg1 << 0x20) >> 0x20;
    (*(s32 *)D_005BEE5C) = (s32) temp_s0;
    func_00154510();
    switch (temp_s0) {                              /* irregular */
    case 0:
        func_0015E638(0);
        return;
    case 1:
        func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x81), &func_00160A28, (*(s32 *)D_005B3744));
        return;
    }
}
