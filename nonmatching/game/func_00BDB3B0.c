/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B29E20(void);
extern s32 func_00B29C50(void);
extern char Pes6MatchPlayers[];
extern char D_00591C09[];
extern char Pes6MatchSquads[];

u8 func_00BDB3B0(s32 arg0) {
    s32 var_a2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_v0;
    u32 var_s4;
    u8 var_s3;
    void *var_s5;

    var_a2 = 1;
    if ((((arg0 != 0) ? 0xC : 1) + 0xA) != 0xFF) {
        var_a2 = ((arg0 != 0) ? 0xC : 1) + 0xA;
    }
    var_s4 = -1U;
    var_s3 = 0;
    var_s5 = ((void *)Pes6MatchPlayers) + (var_a2 * 0x240);
    var_s2 = 0;
    do {
        var_s1 = 0;
        var_v0 = M2C_FIELD(M2C_FIELD(var_s5, void **, 4), u8 *, 0x2C) == 1;
        var_s0 = 0;
        if (var_v0 != 0) {
            var_v0 = M2C_FIELD(((M2C_FIELD(var_s5, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(var_s5, u8 *, 0x12) * 0x6900))), u8 *, 0xD4) == 1;
        }
        if (var_v0 != 0) {
            var_v0 = M2C_FIELD(((M2C_FIELD(var_s5, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(var_s5, u8 *, 0x12) * 0x6900))), u8 *, 0xF8) == 0;
        }
        if (var_v0 != 0) {
            if (((*(u8 *)D_00591C09) == 5) && (func_00B29E20() == 0) && (func_00B29C50() == 0)) {
                var_v0_2 = 1;
            } else {
                var_v0_2 = M2C_FIELD(((M2C_FIELD(var_s5, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(var_s5, u8 *, 0x12) * 0x6900))), u8 *, 0x14) == 0;
            }
            if (var_v0_2 != 0) {
                var_s0 = 1;
            }
        }
        if ((var_s0 != 0) && (M2C_FIELD(var_s5, u8 *, 0x16) != 0xFF)) {
            var_s1 = 1;
        }
        if (var_s1 != 0) {
            temp_v0 = M2C_FIELD(var_s5, u32 *, 0x124);
            if (temp_v0 < var_s4) {
                var_s3 = M2C_FIELD(var_s5, u8 *, 0);
                var_s4 = temp_v0;
            }
        }
        var_s2 += 1;
        var_s5 -= 0x240;
    } while (var_s2 < 0xB);
    return var_s3;
}
