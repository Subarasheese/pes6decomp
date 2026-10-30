/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00817950(M2C_UNK);                     /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00827CF0();                                /* extern */
s32 func_00827F60(s32);                             /* extern */
s32 func_00828050(s32);                             /* extern */
M2C_UNK func_00D0BF70(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C5F0(M2C_UNK);                     /* extern */
s32 func_00D0C970(u8);                              /* extern */
extern void *D_00A7DF00;

u8 func_009E27A0(void) {
    s32 var_s0;
    s8 var_v1;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = M2C_FIELD(D_00A7DF00, u8 *, 8);
    if (temp_v0 == 0) {
        if (func_0081EC20(0x1000) != 0) {
            func_0026E840(0x84008401);
            temp_a0 = M2C_FIELD(D_00A7DF00, u8 *, 4);
            switch (temp_a0) {                      /* switch 1; irregular */
            case 3:                                 /* switch 1 */
                break;
            case 0:                                 /* switch 1 */
                if (func_00D0C970(temp_a0) == 0) {
                    func_00817950(0xC);
                } else {
                    func_00D0C5F0(0xC);
                }
                break;
            case 1:                                 /* switch 1 */
                func_00D0C970(temp_a0);
                func_00D0C5F0(5);
                break;
            }
            if (M2C_FIELD(D_00A7DF00, u8 *, 6) == 0) {
                M2C_FIELD(D_00A7DF00, u8 *, 8) = 1U;
                M2C_FIELD(D_00A7DF00, s8 *, 5) = 4;
                func_00D0BF70(0);
                return M2C_FIELD(D_00A7DF00, u8 *, 8);
            }
            M2C_FIELD(D_00A7DF00, s8 *, 5) = 3;
            return 0U;
        }
        temp_v0_2 = M2C_FIELD(D_00A7DF00, u8 *, 4);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            if (func_0081EC20(0x4000) != 0) {
                func_0026E840(0x84028400);
                var_v1 = 8;
block_51:
                M2C_FIELD(D_00A7DF00, s8 *, 5) = var_v1;
            }
            break;
        case 0:                                     /* switch 2 */
            if (func_0081EC20(0x2000) != 0) {
                var_s0 = 0;
                if (func_00827CF0() != 0) {
                    var_s0 = 1;
                    M2C_FIELD(D_00A7DF00, s32 *, 0xC) = 0x01FB0019;
                }
                if (func_00827F60(M2C_FIELD(D_00A7DF00, s32 *, 0)) != 0) {
                    var_s0 = 1;
                    M2C_FIELD(D_00A7DF00, s32 *, 0xC) = 0x01FB0018;
                }
                if (func_00828050(M2C_FIELD(D_00A7DF00, s32 *, 0)) != 0) {
                    var_s0 = 1;
                    M2C_FIELD(D_00A7DF00, s32 *, 0xC) = 0x01FB001A;
                }
                temp_a0_2 = M2C_FIELD(D_00A7DF00, u8 *, 4);
                switch (temp_a0_2) {                /* switch 3; irregular */
                case 3:                             /* switch 3 */
                    break;
                case 0:                             /* switch 3 */
                    if (func_00D0C970(temp_a0_2) == 0) {
                        func_00817950(0xC);
                    } else {
                        func_00D0C5F0(0xC);
                    }
                    break;
                case 1:                             /* switch 3 */
                    func_00D0C970(temp_a0_2);
                    func_00D0C5F0(5);
                    break;
                }
                if (var_s0 == 0) {
                    func_0026E840(0x84028400);
                    var_v1 = 5;
                } else {
                    func_0026E840(0x8C008005);
                    var_v1 = 7;
                    M2C_FIELD(D_00A7DF00, s32 *, 0x10) = -1;
                }
                goto block_51;
            }
            break;
        }
        return 0U;
    }
    return temp_v0;
}
