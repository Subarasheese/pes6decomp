/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
extern s8 *D_003EA7E4;
extern char D_00CCAF70[];
extern char D_00CCAF71[];

void func_00C18F50(void) {
    D_003EA7E4 = ((void *)D_00CCAF70);
    func_001C48E8(((void *)D_00CCAF70), 0, 0x10);
    (*(s8 *)D_00CCAF71) = 1;
    (*(s8 *)D_00CCAF70) = 1;
}
