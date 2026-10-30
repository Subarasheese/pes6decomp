/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00B00C80[];
extern char D_00B00EC0[];
extern char D_00B02200[];
extern char D_00B02208[];

void func_00AE4690(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_a5_2;
    M2C_UNK *var_a6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a4;
    s32 var_a5;
    u8 var_v1;
    void *var_a0;
    void *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    if (var_a1 != NULL) {
        var_a5 = 0x48;
        var_a6 = ((void *)D_00B00C80);
        do {
            var_a5 -= 1;
            temp_v1 = M2C_FIELD(var_a0, s32 *, 4);
            M2C_FIELD(var_a6, s32 *, 0) = (s32) M2C_FIELD(var_a0, s32 *, 0);
            var_a0 += 8;
            M2C_FIELD(var_a6, s32 *, 4) = temp_v1;
            var_a6 += 8;
        } while (var_a5 > 0);
        var_a4 = 0x268;
        var_a5_2 = ((void *)D_00B00EC0);
        do {
            var_a4 -= 1;
            temp_v1_2 = M2C_FIELD(var_a1, s32 *, 4);
            M2C_FIELD(var_a5_2, s32 *, 0) = (s32) M2C_FIELD(var_a1, s32 *, 0);
            var_a1 += 8;
            M2C_FIELD(var_a5_2, s32 *, 4) = temp_v1_2;
            var_a5_2 += 8;
        } while (var_a4 > 0);
        (*(u8 *)D_00B02200) = ((*(u8 *)D_00B02200) & ~1) | 1;
        (*(s32 *)D_00B02208) = arg3;
        var_v1 = ((*(u8 *)D_00B02200) & ~0x7E) | ((arg2 & 0x3F) * 2);
    } else {
        func_001C48E8(((void *)D_00B00C80), 0, 0x240);
        func_001C48E8(((void *)D_00B00EC0), 0, 0x1340);
        (*(u8 *)D_00B02200) = ((*(u8 *)D_00B02200) & ~1) | (0 & 1);
        (*(s32 *)D_00B02208) = 0;
        var_v1 = ((*(u8 *)D_00B02200) & ~0x7E) | ((0 & 0x3F) * 2);
    }
    (*(u8 *)D_00B02200) = var_v1;
}
