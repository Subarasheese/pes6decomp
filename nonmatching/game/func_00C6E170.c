/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002D5410(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00C6E6F0(M2C_UNK);                         /* extern */
M2C_UNK func_00C6E700(s32);                         /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK *D_003EA810;
extern char D_00CCBBC0[];
extern char D_00CCBBCC[];
extern M2C_UNK func_00C6DE10;
extern M2C_UNK func_00C6DE70;
extern M2C_UNK func_00C6E100;
extern M2C_UNK func_00C6E140;

void func_00C6E170(void) {
    func_00C6E700(func_002D5410());
    func_001C48E8(((void *)D_00CCBBC0), 0, 0x24);
    D_003EA810 = ((void *)D_00CCBBC0);
    (*(s32 *)D_00CCBBCC) = func_00C6E6F0(0);
    func_00C88EC0(0x1C, &func_00C6E140, &func_00C6E100);
    func_00C88DD0(0x1C, &func_00C6DE10, &func_00C6DE70);
}
