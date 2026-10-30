/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00848680(void *, s32, s32);            /* extern */
extern char D_005927B8[];
extern char D_005927C8[];
extern char Pes6MatchSquads[];
extern char D_008B14FE[];

void func_008483C0(void *arg0) {
    s32 temp_a0;
    s32 var_s4;
    u8 *var_s3;
    u8 temp_a1;
    void *temp_s0;
    void *var_s2;

    var_s4 = 0;
    var_s3 = ((void *)D_008B14FE);
    var_s2 = arg0;
    do {
        temp_a1 = *var_s3;
        if (((s32) temp_a1 >> 7) & 1) {
            temp_a0 = ((s32) temp_a1 >> 6) & 1;
            M2C_FIELD((arg0 + var_s4), u8 *, 4) = temp_a1;
            temp_s0 = ((temp_a1 & 0x1F) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a0 * 0x6900));
            func_00848680(temp_s0 + 0xF0, var_s2 + 8, temp_a0 * 0xF);
            M2C_FIELD(var_s2, u8 *, 0x12) = (u8) ((M2C_FIELD(var_s2, u8 *, 0x12) & ~8) | ((M2C_FIELD(temp_s0, u8 *, 0xD4) & 1) * 8));
        }
        var_s4 += 1;
        var_s2 += 0x10;
        var_s3 += 1;
    } while (var_s4 < 4);
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(((void *)D_005927C8), u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(((void *)D_005927C8), u8 *, 1);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(((void *)D_005927B8), u8 *, 0);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(((void *)D_005927B8), u8 *, 1);
}
