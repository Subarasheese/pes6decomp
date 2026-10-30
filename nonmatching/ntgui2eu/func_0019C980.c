/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A6B68(M2C_UNK *, s32);              /* extern */
extern char D_005CAB54[];
extern char D_01201740[];

void func_0019C980(s8 arg0) {
    M2C_UNK *temp_a0;
    M2C_UNK *var_s2;
    s32 var_a1;
    void *temp_v0;

    var_a1 = M2C_FIELD(((void *)D_005CAB54), s32 *, 0);
    if (var_a1 >= 0x7E) {
        var_s2 = ((void *)D_01201740);
        M2C_FIELD(((void *)D_005CAB54), s32 *, 0) = 0;
        M2C_FIELD(((void *)D_01201740), s8 *, 0x7F) = 0;
        func_001A6B68(((void *)D_01201740), var_a1);
        var_a1 = M2C_FIELD(((void *)D_005CAB54), s32 *, 0);
    } else {
        var_s2 = (M2C_UNK *)0x01200000;
    }
    if (arg0 == 0xA) {
        temp_a0 = var_s2 + 0x1740;
        M2C_FIELD(((void *)D_005CAB54), s32 *, -0x54AC) = 0;
        temp_v0 = var_a1 + temp_a0;
        M2C_FIELD(temp_v0, s8 *, 0) = arg0;
        M2C_FIELD(temp_v0, s8 *, 1) = 0;
        func_001A6B68(temp_a0, var_a1);
        return;
    }
    M2C_FIELD(((void *)D_005CAB54), s32 *, -0x54AC) = (s32) (var_a1 + 1);
    *(var_a1 + (var_s2 + 0x1740)) = arg0;
}
