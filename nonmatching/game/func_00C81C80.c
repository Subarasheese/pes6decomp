/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00C94590(void);
extern int func_002D5410(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00C945A0(s32);                         /* extern */
extern M2C_UNK *D_003EA878;
extern char D_00CCC1D0[];
extern char D_00CCC1E4[];
extern char D_00CCC1EC[];
extern M2C_UNK func_00C81AC0;
extern M2C_UNK func_00C81B80;
extern M2C_UNK func_00C81BF0;

void func_00C81C80(void) {
    func_00C945A0(func_002D5410());
    func_001C48E8(((void *)D_00CCC1D0), 0, 0x30);
    D_003EA878 = ((void *)D_00CCC1D0);
    (*(s32 *)D_00CCC1E4) = func_00C94590();
    (*(s32 *)D_00CCC1EC) = func_002D5410();
    func_00C88EC0(7, &func_00C81BF0, &func_00C81B80);
    func_00C88DD0(7, &func_00C81AC0, 0);
}
