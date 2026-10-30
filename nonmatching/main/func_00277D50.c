/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292D50();                                /* extern */
u32 func_009A00D0(s32, M2C_UNK);                    /* extern */
extern char D_00591A90[];
extern char Pes6MatchSquads[];

void func_00277D50(s32 arg0) {
    M2C_UNK *var_s2;
    M2C_UNK *var_s3;
    s32 temp_s1;
    s32 temp_s7;
    s32 var_s4;
    s32 var_s5;
    void *temp_v1;

    temp_s7 = arg0 & 0xFF;
    temp_s1 = func_00292D50() & 0xFF;
    var_s5 = 0;
    var_s3 = ((void *)D_00591A90);
    var_s2 = ((void *)Pes6MatchSquads);
    do {
        var_s4 = 0;
        if (temp_s1 > 0) {
            do {
                temp_v1 = var_s2 + (M2C_FIELD((var_s3 + var_s4), u8 *, 7) * 0x348) + 0xF0;
                if ((temp_s7 > 0) && ((u32) M2C_FIELD(temp_v1, u32 *, 0x24) < (u32) M2C_FIELD(temp_v1, u32 *, 0x20))) {
                    M2C_FIELD(temp_v1, u32 *, 0x24) = func_009A00D0((temp_s7 - 1) & 0xFF, 0);
                }
                var_s4 += 1;
            } while (var_s4 < temp_s1);
        }
        var_s5 += 1;
        var_s3 += 0x8B;
        var_s2 += 0x6900;
    } while (var_s5 < 2);
}
