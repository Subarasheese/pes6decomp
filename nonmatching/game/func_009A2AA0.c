/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern s32 func_00287870(void);
s32 func_00B29B90();                                /* extern */
s32 func_00B29C80();                                /* extern */
s32 func_00B29E20();                                /* extern */
extern void *D_003EA710;
extern char Pes6MatchPlayers[];
extern char D_00591C09[];
extern char D_00591DD6[];

s32 func_009A2AA0(void) {
    M2C_UNK *var_s1_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_v0;
    u16 temp_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s1;

    var_s3 = 0;
    var_s2 = 0;
    var_s0 = 0;
    if ((*(u8 *)D_00591DD6) != 0) {
        var_s1 = 1;
        if ((*(u8 *)D_00591C09) == 5) {
            var_v0 = (*(u8 *)D_00591C09) == 5;
            if (var_v0 != 0) {
                var_v0 = func_00B29E20() != 0;
                if (var_v0 != 0) {
                    var_v0 = func_00B29B90() != 0;
                }
                if (var_v0 == 0) {
                    var_v0 = func_00B29C80() != 0;
                }
            }
            if (var_v0 == 0) {
                var_s1 = 0;
            }
        }
        if (var_s1 != 0) {
            var_s2 = 1;
        }
    }
    if (var_s2 != 0) {
        temp_s1 = D_003EA710;
        if (M2C_FIELD(temp_s1, s32 *, 0x6C) == 1) {
            if (func_00287870() == 0) {
                var_s0 = 1;
            } else {
                var_s3 = 1;
            }
        }
        if (var_s3 != 0) {
            M2C_FIELD(temp_s1, s32 *, 0x6C) = 0;
            var_s2_2 = 0;
            var_s1_2 = ((void *)Pes6MatchPlayers);
            do {
                temp_a0 = M2C_FIELD(var_s1_2, void **, 4);
                temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
                if (((s32) temp_v1 >= 0x5CA) && ((s32) temp_v1 < 0x5E2) && (M2C_FIELD(temp_a0, u8 *, 0x2C) != 0)) {
                    M2C_FIELD(temp_a0, s8 *, 0x4C) = 0;
                    M2C_FIELD(M2C_FIELD(var_s1_2, void **, 4), u32 *, 4) = func_00208310((s32) M2C_FIELD(M2C_FIELD(var_s1_2, void **, 4), u16 *, 0x30));
                    temp_a0_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s1_2, void **, 4), void **, 0), void **, 0x10);
                    M2C_FIELD(temp_a0_2, s32 *, 0x24) = (s32) (M2C_FIELD(temp_a0_2, s32 *, 0xC) + (M2C_FIELD(temp_a0_2, s8 *, 9) * 8));
                }
                var_s2_2 += 1;
                var_s1_2 += 0x240;
            } while (var_s2_2 < 0x17);
        }
    }
    return var_s0;
}
