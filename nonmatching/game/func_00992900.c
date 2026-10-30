/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
extern u8 func_00BF6270(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];

s32 func_00992900(void) {
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;
    u16 temp_v1;
    u8 temp_v0;

    var_s0 = 0;
    if ((func_009E1C90(1) & 0xFF) == 0xC) {
        temp_v0 = func_00BF6280();
        switch (temp_v0) {                          /* switch 1; irregular */
        case 13:                                    /* switch 1 */
            if ((func_009E1C90(3) & 0xFF) == 3) {
                if (func_00BF6270() == 0xFF) {
                    var_a0 = 1;
                } else {
                    var_a0 = func_00BF6270() % 23;
                }
                temp_v1 = M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), void **, 4), u16 *, 0x30);
                switch (temp_v1) {                  /* switch 2; irregular */
                case 0x59D:                         /* switch 2 */
                    var_v0 = 2;
                    break;
                case 0x59C:                         /* switch 2 */
                    var_v0 = 1;
                    break;
                default:                            /* switch 2 */
                case 0x59B:                         /* switch 2 */
                    var_v0 = 0;
                    break;
                }
                temp_v1_2 = var_v0 & 0xFF;
                switch (temp_v1_2) {                /* switch 3; irregular */
                case 2:                             /* switch 3 */
                    var_s0 = 6;
                    break;
                case 1:                             /* switch 3 */
                    var_s0 = 5;
                    break;
                case 0:                             /* switch 3 */
                    var_s0 = 4;
                    break;
                }
            }
            break;
        case 11:                                    /* switch 1 */
            if (func_00C01090(0x18) == 0) {
                if (func_00C01090(0x19) == 0) {
                    if (func_00C01090(0x1A) == 0) {
                        if (func_00C01090(0x1B) != 0) {
                            var_s0 = 3;
                        }
                    } else {
                        var_s0 = 2;
                    }
                } else {
                    goto block_18;
                }
            } else {
block_18:
                var_s0 = 1;
            }
            break;
        case 10:                                    /* switch 1 */
            if (func_00C01090(0x14) == 0) {
                if (func_00C01090(0x15) == 0) {
                    if (func_00C01090(0x16) == 0) {
                        if (func_00C01090(0x17) != 0) {
                            var_s0 = 3;
                        }
                    } else {
                        var_s0 = 2;
                    }
                } else {
                    goto block_14;
                }
            } else {
block_14:
                var_s0 = 1;
            }
            break;
        }
    }
    return var_s0;
}
