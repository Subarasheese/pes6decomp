/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B966A0(s32, M2C_UNK *);              /* extern */
s32 func_00B970C0();                                /* extern */
M2C_UNK func_00B97E60();                            /* extern */
M2C_UNK func_00B98470();                            /* extern */
extern char D_00CBCD90[];
extern char D_00CBCDEE[];
extern char D_00CBCDF0[];

void func_00B985A0(void) {
    if ((s32) (*(u8 *)D_00CBCDEE) > 0) {
        (*(u8 *)D_00CBCDEE) -= 1;
    }
    (*(s32 *)D_00CBCDF0) += 1;
    func_00B98470();
    func_00B97E60();
    func_00B966A0(func_00B970C0(), ((void *)D_00CBCD90));
}
