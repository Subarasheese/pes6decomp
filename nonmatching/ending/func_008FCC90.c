/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001F87E0(M2C_UNK, s32, u8, void *);        /* extern */
s32 func_002FA990();                                /* extern */
M2C_UNK func_002FA9A0(s32, s32, u8, void *);        /* extern */
M2C_UNK func_002FA9B0();                            /* extern */
extern char D_00908410[];
extern char D_00908418[];
extern void *D_00908420;
extern char D_00908425[];

u32 func_008FCC90(void) {
    s32 temp_a1;
    s32 var_v0;
    u32 var_v0_2;
    u32 var_v0_3;
    u32 var_v1;
    u8 temp_a2;
    u8 temp_v1;
    u8 var_v0_4;

    temp_a2 = M2C_FIELD(D_00908420, u8 *, 7);
    var_v0_4 = temp_a2;
    if ((s32) temp_a2 <= 0) {
        var_v0_4 = 1;
    }
    temp_a1 = ((0xFF / (s32) (var_v0_4 & 0xFF)) * (*(u8 *)D_00908410)) & 0xFF;
    if ((*(u8 *)D_00908425) != 0) {
        if (!((*(s32 *)D_00908418) & 0x8000)) {
            temp_v1 = M2C_FIELD(D_00908420, u8 *, -6);
            if (temp_v1 != 2) {
                var_v0_3 = 1;
                switch (temp_v1) {                  /* irregular */
                case 0:
                    var_v1 = temp_a1 & 0xFF;
                    if (var_v1 == 0) {
                        var_v1 = 1;
                    }
                    func_002FA9A0((0xFFU / var_v1) * (*(u8 *)D_00908410), temp_a1, temp_a2, D_00908420);
                    if (func_002FA990() == 0) {
                        var_v0_2 = 0;
                    } else {
                        func_002FA9B0();
                        var_v0_2 = 1;
                    }
                    return var_v0_2;
                case 1:
                    if (temp_a2 != 0) {
                        var_v0_3 = func_001F87E0(0, temp_a1, temp_a2, D_00908420) & 0xFF;
                    }
                    return var_v0_3;
                default:
                    return 1U;
                }
            } else {
                if (temp_a2 != 0) {
                    var_v0 = func_001F87E0(0, temp_a1, temp_a2, D_00908420);
                    goto block_31;
                }
                return 1U;
            }
        } else {
            goto block_6;
        }
    } else {
block_6:
        var_v0 = func_001F87E0(0, temp_a1, temp_a2, D_00908420);
block_31:
        return var_v0 & 0xFF;
    }
}
