/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030E780(void);
extern s32 func_00310760(void *, s32, s32);
extern s32 func_003107A0(void *, s32, s32);
extern s32 func_00310800(void *, s32);
extern s32 func_0030EA70(void);
s32 func_00326890(s32, s32, u8, M2C_UNK);           /* extern */
s32 func_0032E8D0(M2C_UNK);                         /* extern */
extern char D_003B7A90[];
extern char Pes6MatchSquads[];

s32 func_003549C0(s32 *arg0, s32 arg1, s32 arg2) {
    s16 sp78;
    s32 sp88;
    u8 sp8F;
    s16 *var_a0;
    s16 *var_a0_2;
    s16 *var_a1;
    s16 *var_a1_3;
    s32 temp_s1;
    s32 var_a0_3;
    s32 var_a1_2;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    void *temp_s0;

    var_v1 = 5;
    var_a1 = ((void *)D_003B7A90);
    var_a0 = &sp78;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 2;
        var_a0 += 2;
    } while (var_v1 > 0);
    if (func_0030EA70() >= 0x55) {
        return 0;
    }
    if (func_0030E780() != 0) {
        temp_s1 = arg1 & 0xFF;
        if (temp_s1 != 0xFF) {
            func_00310800(&sp88, temp_s1);
            var_s2 = 0;
            if (sp88 > 0) {
                temp_s0 = ((void *)Pes6MatchSquads) + (temp_s1 * 0x6900);
loop_15:
                func_003107A0(&sp8F, var_s2, temp_s1);
                if (func_00326890(arg2, arg1, sp8F, 0x800000) == 0) {
                    var_a1_2 = 0;
                    var_a0_2 = &sp78;
loop_20:
                    if ((u16) *var_a0_2 != M2C_FIELD((temp_s0 + (sp8F * 0x348)), u16 *, 0x46)) {
                        var_a1_2 += 1;
                        var_a0_2 += 2;
                        if (var_a1_2 >= 5) {
                            func_00310760(&sp8F, var_s2, temp_s1);
                            if (func_00326890(arg2, arg1, sp8F, 0x800000) == 0) {
                                var_a0_3 = 0;
                                var_a1_3 = &sp78;
loop_30:
                                if ((u16) *var_a1_3 != M2C_FIELD((temp_s0 + (sp8F * 0x348)), u16 *, 0x46)) {
                                    var_a0_3 += 1;
                                    var_a1_3 += 2;
                                    if (var_a0_3 >= 5) {
                                        var_s2 += 1;
                                        if (var_s2 >= sp88) {
                                            goto block_36;
                                        }
                                        goto loop_15;
                                    }
                                    goto loop_30;
                                }
                                *arg0 = 1;
                                return 1;
                            }
                            *arg0 = 1;
                            return 1;
                        }
                        goto loop_20;
                    }
                    *arg0 = 1;
                    return 1;
                }
                *arg0 = 1;
                return 1;
            }
block_36:
            var_v0 = func_0032E8D0(0x50) == 0;
            goto block_37;
        }
        var_v0 = func_0032E8D0(0x50) == 0;
block_37:
        *arg0 = var_v0;
        return 1;
    }
    return 0;
}
