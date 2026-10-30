/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00824380();                                /* extern */
s16 func_008244E0();                                /* extern */
extern char D_008AA104[];
extern char D_008AA108[];
extern M2C_UNK func_00824260;
extern M2C_UNK func_008242B0;
extern M2C_UNK func_00824300;
extern M2C_UNK func_00824340;
extern M2C_UNK func_008243C0;
extern M2C_UNK func_00824410;
extern M2C_UNK func_00824460;
extern M2C_UNK func_008244A0;

s32 func_00835430(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_v0;

    if (arg0 == NULL) {
        return 0;
    }
    func_001C48E8(0, 0x1C);
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (*(s32 *)D_008AA104);
        M2C_FIELD(arg0, s16 *, 0x18) = func_008244E0();
        M2C_FIELD(arg0, M2C_UNK **, 8) = &func_008244A0;
        M2C_FIELD(arg0, M2C_UNK **, 0xC) = &func_00824460;
        M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_00824410;
        var_v0 = &func_008243C0;
    } else {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (*(s32 *)D_008AA108);
        M2C_FIELD(arg0, s16 *, 0x18) = (s16) (func_00824380() & 0xFF);
        M2C_FIELD(arg0, M2C_UNK **, 8) = &func_00824340;
        M2C_FIELD(arg0, M2C_UNK **, 0xC) = &func_00824300;
        M2C_FIELD(arg0, M2C_UNK **, 0x10) = &func_008242B0;
        var_v0 = &func_00824260;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = var_v0;
    return 1;
}
