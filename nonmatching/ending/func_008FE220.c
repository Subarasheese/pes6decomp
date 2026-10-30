/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00132280(void *);                      /* extern */
M2C_UNK func_00209830(void *);                      /* extern */
M2C_UNK func_0027B780(s32, u16, void *, f32);       /* extern */
s32 func_00B2A420(u8);                              /* extern */
M2C_UNK func_00B2ACF0(s32);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_009085D0[];

void func_008FE220(void) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s1_2;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s0_2;
    void *temp_a0;
    void *temp_a0_3;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;

    var_s1 = ((void *)Pes6MatchPlayers);
    var_s0 = 0;
    do {
        if (M2C_FIELD(M2C_FIELD(var_s1, void **, 4), u8 *, 0x2C) != 0) {
            func_00B2ACF0(func_00B2A420(M2C_FIELD(var_s1, u8 *, 0)));
            func_00209830(M2C_FIELD(var_s1, void **, 4));
        }
        var_s0 = (var_s0 + 1) & 0xFF;
        var_s1 += 0x240;
    } while (var_s0 < 0x17);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_009085D0);
    do {
        temp_a0 = M2C_FIELD(var_s1_2, void **, 4);
        if (M2C_FIELD(temp_a0, u8 *, 0x2C) != 0) {
            func_00209830(temp_a0);
            temp_a2 = M2C_FIELD(var_s1_2, void **, 4);
            temp_v1 = M2C_FIELD(temp_a2, void **, 0);
            if (temp_v1 != NULL) {
                temp_a0_2 = M2C_FIELD(temp_v1, s32 *, 0x10);
                if (temp_a0_2 != 0) {
                    func_0027B780(temp_a0_2, M2C_FIELD(temp_a2, u16 *, 0x30), temp_a2, M2C_FIELD(temp_a2, f32 *, 0x38));
                    temp_v1_2 = M2C_FIELD(var_s1_2, void **, 4);
                    temp_a0_3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_v1_2, void **, 0), void **, 0x10), void **, 0x24), void **, 4);
                    M2C_FIELD(temp_a0_3, u8 *, 0x1F) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x2D);
                    if (M2C_FIELD(M2C_FIELD(var_s1_2, void **, 4), u8 *, 0x2D) != 0) {
                        func_00132280(temp_a0_3);
                    }
                }
            }
        }
        var_s0_2 = (var_s0_2 + 1) & 0xFF;
        var_s1_2 += 0x240;
    } while (var_s0_2 < 3);
}
