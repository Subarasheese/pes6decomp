/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0090D0B0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0090D290(s32, s8 *);                   /* extern */
void *func_0098EC40(M2C_UNK);                       /* extern */
s32 func_0098ED30(u8);                              /* extern */
s32 func_00A07B40(s8 *, s8 *);                      /* extern */
extern char D_00591F14[];
extern char D_0092E000[];
extern char D_0092E010[];

void func_0090CFA0(void) {
    s8 sp30;
    s8 sp40;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_v1;
    s32 var_v1_2;
    s8 *var_a0;
    s8 *var_a0_2;
    s8 *var_a1;
    s8 *var_a1_2;
    void *temp_v0;

    var_a1 = ((void *)D_0092E000);
    var_a0 = &sp40;
    var_v1 = 0xF;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 1;
        var_a0 += 1;
    } while (var_v1 > 0);
    var_a0_2 = &sp30;
    var_a1_2 = ((void *)D_0092E010);
    var_v1_2 = 0xF;
    do {
        var_v1_2 -= 1;
        *var_a0_2 = *var_a1_2;
        var_a1_2 += 1;
        var_a0_2 += 1;
    } while (var_v1_2 > 0);
    if ((func_00A07B40(var_a0_2, var_a1_2) != 0) && ((*(u8 *)D_00591F14) == 0)) {
        temp_v0 = func_0098EC40(1);
        if ((func_0098ED30(M2C_FIELD(temp_v0, u8 *, 0)) & 0xFF) >= 4) {
            return;
        }
        temp_s1 = func_0090D0B0((M2C_FIELD(temp_v0, u8 *, 0x13) ^ 1) & 0xFF, 1) & 0xFF;
        temp_s0 = func_0090D0B0((M2C_FIELD(temp_v0, u8 *, 0x13) ^ 1) & 0xFF, 0) & 0xFF;
        func_0090D290(temp_s1, &sp30);
        func_0090D290(temp_s0, &sp40);
    }
}
