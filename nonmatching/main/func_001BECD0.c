/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D76B0(void *, u32);
extern void func_001EDAE0(void *, s8);
s32 func_00152130(M2C_UNK, s32);                    /* extern */
s32 func_001BF5E0(void *, s32 *);                   /* extern */

void func_001BECD0(void *arg0) {
    s32 sp5C;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;

    sp5C = M2C_FIELD(arg0, s32 *, 0x28);
    var_v1 = M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x78);
    var_s2 = 1;
    if (var_v1 >= 0xFF) {
        var_v1 = 0xFF;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = var_v1;
    func_001D76B0(M2C_FIELD(arg0, void **, 0x38), var_v1 & 0xFF);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x84);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_s2 = func_001BF5E0(arg0, &sp5C);
        break;
    case 0:                                         /* switch 1 */
        var_s1 = sp5C;
        var_s2 = 0;
        switch (var_s1) {                           /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_v0 = M2C_FIELD(arg0, s32 *, 0x6C);
            if (var_v0 == 0) {
                var_v0 = 0x20;
            }
            if ((func_00152130(1, var_v0 & 0xFF) == 1) || (temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x7C) + 1, M2C_FIELD(arg0, s32 *, 0x7C) = temp_v1_2, ((temp_v1_2 < 0x41) == 0))) {
                func_001EDAE0(M2C_FIELD(arg0, void **, 0x64), 1);
                M2C_FIELD(arg0, s32 *, 0x70) = 0xFF;
                func_00152130(0, 0xFF);
                var_s1 += 1;
            }
            break;
        case 1:                                     /* switch 2 */
            if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x88) << 0x3E) >> 0x3F) == 0) {
                var_v1_2 = M2C_FIELD(arg0, s32 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x78);
                var_s0 = 0;
                if (var_v1_2 >= 0xFF) {
                    var_s0 = 1;
                    var_v1_2 = 0xFF;
                }
                M2C_FIELD(arg0, s32 *, 0x2C) = var_v1_2;
                func_001D76B0(M2C_FIELD(arg0, void **, 0x38), var_v1_2 & 0xFF);
                if (var_s0 != 0) {
                    goto block_23;
                }
            } else {
block_23:
                var_s2 = 1;
            }
            break;
        }
        sp5C = var_s1;
        break;
    }
    if (var_s2 == 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = 4;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = sp5C;
}
