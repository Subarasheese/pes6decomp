/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_00182AE0(M2C_UNK);                     /* extern */
M2C_UNK func_00182B20(M2C_UNK);                     /* extern */
M2C_UNK func_00182B80();                            /* extern */
M2C_UNK func_00182D20();                            /* extern */
M2C_UNK func_001864E0(s32);                         /* extern */
M2C_UNK func_001867C0(s32);                         /* extern */
M2C_UNK func_00187450(M2C_UNK);                     /* extern */
s32 func_001889E0();                                /* extern */
s32 func_00188A30();                                /* extern */
M2C_UNK func_0018A190(M2C_UNK);                     /* extern */
M2C_UNK func_001A58D0(M2C_UNK);                     /* extern */
M2C_UNK func_002D6E50();                            /* extern */
extern char D_0051FF54[];

void func_001A1490(void) {
    s32 var_s0;

    func_00182D20();
    func_00182B80();
    func_001A58D0(0);
    func_002D6E50();
    func_00187450(0);
    func_0018A190(0);
    var_s0 = 0x41;
    if (func_00188A30() == 1) {
        var_s0 |= 0x20;
    }
    if (func_001889E0() == 1) {
        var_s0 |= 0x10000;
    }
    func_001867C0(var_s0);
    func_001864E0(var_s0);
    func_00182B20(1);
    func_00182AE0(0);
    (*(s16 *)D_0051FF54) = 0;
}
