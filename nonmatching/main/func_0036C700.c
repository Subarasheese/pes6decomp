/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002937A0(u8);
extern void func_0028C300(s32);
M2C_UNK func_002C82C0(s8 *, s32);                   /* extern */
M2C_UNK func_002C96C0(s32, s32, s8 *);              /* extern */

void func_0036C700(s32 arg0, s32 arg1) {
    s8 sp30;
    s8 sp38;
    s8 sp39;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    u8 temp_a0_3;
    u8 temp_a0_5;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_v1;

    func_002C82C0(&sp30, arg0);
    if ((arg1 != 0) && (sp38 == 0)) {
        switch (sp39) {                             /* switch 1; irregular */
        case 5:                                     /* switch 1 */
            /* fallthrough */
        case 1:                                     /* switch 1 */
        case 3:                                     /* switch 1 */
            var_s0 = 0;
            sp38 += 1;
            sp39 -= 1;
            do {
                temp_a0 = arg0 + var_s0;
                if (M2C_FIELD(temp_a0, u8 *, 0x14) == 3) {
                    M2C_FIELD(temp_a0, u8 *, 0x14) = 4U;
                    func_002C96C0(arg0, var_s0 & 0xFF, &sp30);
                }
                var_s0 += 1;
            } while (var_s0 < 0xB);
            return;
        default:                                    /* switch 1 */
            sp30 = 3;
            sp38 += 1;
            var_s0_2 = 0;
            sp39 -= 1;
            do {
                temp_a0_2 = arg0 + var_s0_2;
                temp_a0_3 = M2C_FIELD(temp_a0_2, u8 *, 0x14);
                switch (temp_a0_3) {                /* switch 2; irregular */
                case 7:                             /* switch 2 */
                    M2C_FIELD(temp_a0_2, u8 *, 0x14) = 4U;
                    func_002C96C0(arg0, var_s0_2 & 0xFF, &sp30);
                    break;
                case 1:                             /* switch 2 */
                    M2C_FIELD(temp_a0_2, u8 *, 0x14) = 3U;
                    func_002C96C0(arg0, var_s0_2 & 0xFF, &sp30);
                    break;
                }
                var_s0_2 += 1;
            } while (var_s0_2 < 0xB);
            return;
        }
    } else if (!(arg1 & 0xFF) && (sp38 > 0)) {
        sp38 = 0;
        if (sp39 == 1) {
            var_s0_3 = 0;
            sp39 += 1;
            do {
                temp_a0_4 = arg0 + var_s0_3;
                temp_a0_5 = M2C_FIELD(temp_a0_4, u8 *, 0x14);
                switch (temp_a0_5) {                /* switch 3; irregular */
                case 4:                             /* switch 3 */
                    M2C_FIELD(temp_a0_4, u8 *, 0x14) = 7U;
                    func_002C96C0(arg0, var_s0_3 & 0xFF, &sp30);
                    break;
                case 3:                             /* switch 3 */
                    M2C_FIELD(temp_a0_4, u8 *, 0x14) = 1U;
                    func_002C96C0(arg0, var_s0_3 & 0xFF, &sp30);
                    break;
                }
                var_s0_3 += 1;
            } while (var_s0_3 < 0xB);
            return;
        }
        var_a2 = 0;
        sp39 += 1;
loop_32:
        temp_v1 = arg0 + var_a2;
        if (M2C_FIELD(temp_v1, u8 *, 0x14) != 4) {
            var_a2 += 1;
            if (var_a2 >= 0xB) {

            } else {
                goto loop_32;
            }
        } else {
            M2C_FIELD(temp_v1, u8 *, 0x14) = 3U;
            func_0028C300(arg0);
            var_s0_4 = 0;
            do {
                if ((func_002937A0(M2C_FIELD((arg0 + var_s0_4), u8 *, 0x14)) & 0xFF) == 3) {
                    func_002C96C0(arg0, var_s0_4 & 0xFF, &sp30);
                }
                var_s0_4 += 1;
            } while (var_s0_4 < 0xB);
        }
    }
}
