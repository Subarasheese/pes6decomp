/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00CEAD10(void);
extern void func_00264790(void *, u8);
M2C_UNK func_00263F20(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00CEFAF0();                            /* extern */
s32 func_00CEFEB0();                                /* extern */
extern char D_00591BB0[];

void func_00CEE290(void *arg0) {
    func_00263F20(func_00CEFEB0(), 0, 9, 0);
    (*(u16 *)D_00591BB0) = func_00CEAD10();
    if (func_00CEFEB0() == 8) {
        func_00CEFAF0();
    }
    func_00264790(arg0, 0x1DU);
}
