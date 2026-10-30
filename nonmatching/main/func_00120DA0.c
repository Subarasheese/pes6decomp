/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00120F70(s32, u8, u8, M2C_UNK);        /* extern */
M2C_UNK func_001C48E8(M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
extern char D_003D8FA0[];
extern char D_003D8FD0[];
extern s32 D_003E750C;
extern s32 D_003E7510;
extern M2C_UNK *D_003FAAD0;
extern M2C_UNK *D_003FAE50;
extern M2C_UNK *D_003FAE54;

void func_00120DA0(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s0_2;
    s32 var_s1;
    s32 var_s1_2;

    func_001C48E8(&D_003FAE50, 0, 0x10);
    D_003FAE54 = &D_003FAE50;
    D_003FAE50 = &D_003FAE50;
    func_001C48E8(&D_003FAAD0, 0, 0x380);
    var_s1 = D_003E750C;
    var_s0 = ((void *)D_003D8FA0);
    if (var_s1 != 0) {
        do {
            func_00120F70(M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, u8 *, 4), M2C_FIELD(var_s0, u8 *, 5), 0);
            var_s1 -= 1;
            var_s0 += 8;
        } while (var_s1 != 0);
    }
    var_s0_2 = ((void *)D_003D8FD0);
    var_s1_2 = D_003E7510;
    if ((((void *)D_003D8FD0) != NULL) && (var_s1_2 != 0) && (var_s1_2 != 0)) {
        do {
            func_00120F70(M2C_FIELD(var_s0_2, s32 *, 0), M2C_FIELD(var_s0_2, u8 *, 4), M2C_FIELD(var_s0_2, u8 *, 5), 1);
            var_s1_2 -= 1;
            var_s0_2 += 8;
        } while (var_s1_2 != 0);
    }
}
