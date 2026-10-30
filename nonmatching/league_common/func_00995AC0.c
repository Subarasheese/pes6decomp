/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00237AB0(s32);
extern s32 func_0022C140(s32);
extern s32 func_001F08B0(s32);
extern u8 func_00239BE0(u8);
M2C_UNK sprintf(s8 *, M2C_UNK *, u8);         /* extern */
void *func_0022BFF0(s32, u8);                       /* extern */
extern char D_009C67A8[];
extern char D_009C67B0[];

void func_00995AC0(s8 *arg0, s32 arg1, s32 arg2) {
    s8 sp60;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    s8 *var_v1;
    u8 temp_s1;
    void *temp_v0_2;

    var_v0 = 0x10;
    var_v1 = &sp60;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v0 = func_0022C140(arg1);
    if (temp_v0 != 0) {
        temp_s1 = M2C_FIELD(temp_v0, u8 *, 1);
        temp_v1 = func_00239BE0(M2C_FIELD(temp_v0, u8 *, 9)) & 0xFF;
        if (temp_v1 != temp_s1) {
            if ((temp_v1 - 1) != temp_s1) {
                if (((temp_v1 - 2) == temp_s1) && ((arg1 & 0xFF) != 6)) {
                    if ((temp_s1 == 1) && (func_00237AB0(arg2) == 0)) {
                        temp_s0 = func_001F08B0(0x190042);
                        sprintf(&sp60, ((void *)D_009C67B0), temp_s1);
                        sprintf(arg0, (M2C_UNK *) temp_s0, (u8) &sp60);
                        return;
                    }
                    sprintf(arg0, ((void *)D_009C67A8), func_001F08B0(0x190020));
                    return;
                }
                temp_s0_2 = func_001F08B0(0x190042);
                sprintf(&sp60, ((void *)D_009C67B0), temp_s1);
                sprintf(arg0, (M2C_UNK *) temp_s0_2, (u8) &sp60);
            } else {
                temp_v0_2 = func_0022BFF0(arg1, M2C_FIELD(temp_v0, u8 *, 3));
                if (temp_v0_2 != NULL) {
                    if ((s32) ((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) <= 0) {
                        if ((temp_s1 == 1) && (func_00237AB0(arg2) == 0)) {
                            temp_s0_3 = func_001F08B0(0x190042);
                            sprintf(&sp60, ((void *)D_009C67B0), temp_s1);
                            sprintf(arg0, (M2C_UNK *) temp_s0_3, (u8) &sp60);
                            return;
                        }
                        sprintf(arg0, ((void *)D_009C67A8), func_001F08B0(0x19001C));
                        return;
                    }
                    sprintf(arg0, ((void *)D_009C67A8), func_001F08B0(0x190021));
                }
            }
        } else {
            sprintf(arg0, ((void *)D_009C67A8), func_001F08B0(0x19001B));
        }
    }
}
