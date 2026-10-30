/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001FC7A0(void);
extern s32 func_001FC7D0(void);
extern s32 func_001FC800(void);
M2C_UNK func_002B3F60(u16 *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008472D0();                            /* extern */
M2C_UNK func_00859A80(s64, u16, M2C_UNK, u16 *, M2C_UNK); /* extern */
extern char D_008B142D[];
extern M2C_UNK func_0085DA60;

s32 func_0085D9A0(s64 arg0, u16 *arg1) {
    func_008472D0();
    func_001FC800();
    if (func_001FC7D0() != 0x11) {
        return -1;
    }
    func_001FC800();
    if (func_001FC7A0() != 0) {
        func_00859A80((s64) (arg0 << 0x30) >> 0x30, *arg1, 0x40, arg1, 0x28);
        if ((*(s8 *)D_008B142D) != 0) {
            return -1;
        }
        func_002B3F60(arg1 + 8, &func_0085DA60, 0, 0);
        return 0;
    }
    return -1;
}
