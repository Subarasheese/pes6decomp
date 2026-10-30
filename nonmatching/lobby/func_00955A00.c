/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C920(M2C_UNK);                     /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00841D10();                            /* extern */
extern char D_008A6490[];
extern char D_008A6494[];

s32 func_00955A00(void) {
    func_0082C920(0xA4);
    (*(s32 *)D_008A6490) = 0;
    (*(s32 *)D_008A6494) = 0;
    func_0082C690(0xB3, 0);
    func_00841D10();
    func_0082CA50(0xAB, 0);
    func_0082C690(0xBA, 0);
    return 4;
}
