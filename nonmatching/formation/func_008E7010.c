/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008D90A0(s32);                             /* extern */
s32 func_008D9300(s32);                             /* extern */
M2C_UNK func_008E77B0(void *, u8);                  /* extern */
M2C_UNK func_008E7AE0(void *, u8, M2C_UNK);         /* extern */
M2C_UNK func_008E7B50(void *, void *);              /* extern */

s32 func_008E7010(void *arg0, s32 arg1) {
    s32 (*temp_v1_2)(s32, u8, s32);
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_s0;
    u8 temp_s0_2;

    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 1) != 0) {
        temp_v1 = func_008D90A0(arg1) & 0x60;
        switch (temp_v1) {                          /* switch 1; irregular */
        case 0x20:                                  /* switch 1 */
            if ((M2C_FIELD(arg0, u8 *, 1) != 0) && (M2C_FIELD((M2C_FIELD(arg0, u8 *, 2) + arg0), u8 *, 5) == 0)) {
                var_v0 = 0;
            } else {
                temp_v1_2 = M2C_FIELD(arg0, s32 (**)(s32, u8, s32), 0x4C);
                if (temp_v1_2 == NULL) {
                    var_v0 = 1;
                } else {
                    var_v0 = temp_v1_2(M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(arg0, u8 *, 4), M2C_FIELD(((M2C_FIELD(arg0, u8 *, 2) * 4) + arg0), s32 *, 0x14));
                }
            }
            switch (var_v0) {                       /* switch 2; irregular */
            case 2:                                 /* switch 2 */
                func_0026E840(0x84028400);
                return 9;
            case 1:                                 /* switch 2 */
                func_0026E840(0x84028400);
                return 2;
            default:                                /* switch 2 */
                func_0026E840(0x8C008005);
                return 5;
            }
            break;
        case 0x40:                                  /* switch 1 */
            temp_s0 = M2C_FIELD(arg0, u8 *, 3);
            if ((M2C_FIELD(arg0, u8 *, 2) != temp_s0) && (temp_s0 != 0xFF)) {
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, u8 *, 2) = temp_s0;
                    func_008E7B50(arg0 + 0x54, arg0 + 5);
                    func_008E77B0(arg0 + 0x54, temp_s0);
                    if (M2C_FIELD(((temp_s0 & 0xFF) + arg0), u8 *, 5) != 0) {
                        func_008E7AE0(arg0 + 0x54, temp_s0, 0);
                    }
                }
                func_0026E840(0x84008401);
block_51:
                return 3;
            }
            func_0026E840(0x84008401);
            return 1;
        default:                                    /* switch 1 */
            temp_v0 = func_008D9300(arg1);
            switch (temp_v0) {                      /* switch 3; irregular */
            case 2:                                 /* switch 3 */
                M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) + 1);
block_47:
                M2C_FIELD(arg0, u8 *, 2) = (u8) ((u8) M2C_FIELD(arg0, u8 *, 2) % (u8) M2C_FIELD(arg0, u8 *, 1));
                temp_s0_2 = M2C_FIELD(arg0, u8 *, 2);
                if (arg0 != NULL) {
                    M2C_FIELD(arg0, u8 *, 2) = temp_s0_2;
                    func_008E7B50(arg0 + 0x54, arg0 + 5);
                    func_008E77B0(arg0 + 0x54, temp_s0_2);
                    if (M2C_FIELD(((temp_s0_2 & 0xFF) + arg0), u8 *, 5) != 0) {
                        func_008E7AE0(arg0 + 0x54, temp_s0_2, 0);
                    }
                }
                func_0026E840(0x8400F802);
                goto block_51;
            case 1:                                 /* switch 3 */
                M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) + M2C_FIELD(arg0, u8 *, 1));
                M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) - 1);
                goto block_47;
            default:                                /* switch 3 */
                return 0;
            }
            break;
        }
    } else {
        return 0;
    }
}
