/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00120450(void);
extern void func_00120E80(void);
extern void func_00120290(s32, s32);
extern void func_00120240(void);
extern void func_0017A3C0(void);
M2C_UNK func_001210E0();                            /* extern */
M2C_UNK func_00153E20();                            /* extern */
extern char D_003F77A4[];
extern char D_003F77A5[];

s32 func_001201B0(s32 arg0, s32 arg1) {
    func_00120290(arg0, arg1);
    if ((*(u8 *)D_003F77A5) == 0) {
        do {
            func_00153E20();
            if ((*(u8 *)D_003F77A4) == 0) {
                func_0017A3C0();
            }
            func_00120E80();
            func_001210E0();
            func_00120450();
        } while ((*(u8 *)D_003F77A5) == 0);
    }
    func_00120240();
    return 0;
}
