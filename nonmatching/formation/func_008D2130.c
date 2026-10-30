/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEE60(void *, void *);
extern s32 func_002DB940(void *);
M2C_UNK func_008D0E70();                            /* extern */
extern char D_008EDAC0[];

void func_008D2130(void *arg0) {
    f32 sp2C;

    func_008D0E70();
    if (M2C_FIELD(arg0, void **, 0x1CC) != NULL) {
        func_002DB940(M2C_FIELD(arg0, void **, 0x1D4));
        sp2C = (*(f32 *)D_008EDAC0);
        func_001EEE60(M2C_FIELD(arg0, void **, 0x1CC), &sp2C);
    }
}
