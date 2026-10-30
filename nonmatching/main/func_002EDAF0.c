/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00223A80(void);
M2C_UNK func_001C4730(void *, s32, s32);            /* extern */
s32 func_0021F710(s32);                             /* extern */
s32 func_002EE260(u8, M2C_UNK);                     /* extern */

s32 func_002EDAF0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp60;
    s32 sp64;
    s32 sp68;
    void *sp70;
    void *sp74;
    void *sp78;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 *var_s1;
    s32 *var_s2_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    u8 var_a0;
    u8 var_a0_2;
    u8 var_a0_3;
    void **var_s0;

    temp_v0 = func_0021F710(arg1);
    if ((temp_v0 >= 0x124) && (temp_v0 < 0x156)) {
        goto block_9;
    }
    if ((temp_v0 >= 0x156) && (temp_v0 < 0x1BA)) {
        var_s2 = 1;
    } else if ((u32) (temp_v0 - 0x1BA) >= 2U) {
        var_s2 = 0;
    } else {
block_9:
        var_s2 = 2;
    }
    if (var_s2 == 0) {
        return 0;
    }
    if (arg0 != NULL) {
        temp_v0_2 = func_0021F710(arg1);
        var_a0 = 0x99;
        switch (temp_v0_2) {                        /* switch 1; irregular */
        default:                                    /* switch 1 */
            var_a0 = M2C_FIELD((temp_v0_2 - 0x124 + func_00223A80()), u8 *, 6);
            break;
        case 0x1BA:                                 /* switch 1 */
            var_a0 = 0x97;
            break;
        case 0x1BB:                                 /* switch 1 */
            var_a0 = 0x98;
            break;
        }
        sp80 = func_002EE260(var_a0, 0);
        temp_v0_3 = func_0021F710(arg1);
        var_a0_2 = 0x99;
        switch (temp_v0_3) {                        /* switch 2; irregular */
        default:                                    /* switch 2 */
            var_a0_2 = M2C_FIELD((temp_v0_3 - 0x124 + func_00223A80()), u8 *, 6);
            break;
        case 0x1BA:                                 /* switch 2 */
            var_a0_2 = 0x97;
            break;
        case 0x1BB:                                 /* switch 2 */
            var_a0_2 = 0x98;
            break;
        }
        sp84 = func_002EE260(var_a0_2, 1);
        temp_v0_4 = func_0021F710(arg1);
        var_a0_3 = 0x99;
        switch (temp_v0_4) {                        /* switch 3; irregular */
        default:                                    /* switch 3 */
            var_a0_3 = M2C_FIELD((temp_v0_4 - 0x124 + func_00223A80()), u8 *, 6);
            break;
        case 0x1BA:                                 /* switch 3 */
            var_a0_3 = 0x97;
            break;
        case 0x1BB:                                 /* switch 3 */
            var_a0_3 = 0x98;
            break;
        }
        sp88 = func_002EE260(var_a0_3, 2);
        switch (var_s2) {                           /* switch 4; irregular */
        case 2:                                     /* switch 4 */
            sp70 = arg0;
            sp74 = arg0 + 0x40;
            sp78 = arg0 + 0x440;
            sp60 = 0x40;
            sp64 = 0x400;
            var_v0 = 0x1000;
block_50:
            sp68 = var_v0;
            break;
        case 1:                                     /* switch 4 */
            sp74 = arg0 + 0x40;
            sp70 = arg0;
            sp78 = arg0 + 0x80;
            var_v0 = 0x800;
            sp60 = 0x40;
            sp64 = 0x40;
            goto block_50;
        }
        var_s4 = 0;
        var_s2_2 = &sp60;
        var_s1 = &sp80;
        var_s0 = &sp70;
        do {
            func_001C4730(*var_s0, *var_s1, *var_s2_2);
            var_s4 += 1;
            var_s2_2 += 4;
            var_s1 += 4;
            var_s0 += 4;
        } while (var_s4 < 3);
        if (arg2 != 0x1CA) {
            M2C_FIELD(sp70, s32 *, 4) = arg2;
        }
        return 1;
    }
    return 0;
}
