/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DE2D0(s32);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00862160(s32);                             /* extern */
extern char D_00A89AD0[];
extern char D_00A89AD4[];
extern char D_00A89AE0[];
extern char D_00A89C00[];
extern char D_00A89C08[];

void func_009FB130(void) {
    if (func_00862160((*(s32 *)D_00A89AD4)) == 1) {
        func_002DE2D0((*(s32 *)D_00A89AD4));
    }
    (*(s32 *)D_00A89AD4) = -1;
    (*(s32 *)D_00A89AE0) = 0;
    (*(s32 *)D_00A89AD0) = 6;
    func_001C48E8((*(s32 *)D_00A89C08), 0, 4);
    func_001C48E8((*(s32 *)D_00A89C00), 0, 4);
}
