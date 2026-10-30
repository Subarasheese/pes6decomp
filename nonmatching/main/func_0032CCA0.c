/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_0030E540(s32);
extern u8 func_0030DBA0(void);
extern s32 func_0030DC00(void *, s32);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern int func_0030F380(void);
extern s32 func_0030DCC0(void *, void *, s32);
extern s32 func_0030FE30(void *, s32);
extern M2C_UNK func_0032CC20;
extern M2C_UNK func_0032CC40;

s32 func_0032CCA0(void *arg0, s32 arg1) {
    void *sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    s32 var_v0;
    u8 temp_s2;

    temp_s2 = func_0030E540(0) & 0xFF;
    if (func_0030DBA0() != 0) {
        if (func_0030F380() == 0) {
            if (Pes6MatchPlayer_GetSquadIndex(temp_s2) == 1) {
                func_0030FE30(&sp40, 1);
                func_0030DCC0(&sp4C, &sp48, (s32) M2C_FIELD(sp40, u8 *, 4));
                if (!(sp4C <= 3840.0f)) {
                    if (M2C_FIELD(sp40, s32 *, 0) != 1) {
                        if (!(sp48 < -3752.0f)) {
                            if (!(sp48 < 3752.0f)) {
                                var_v0 = 3;
                            } else {
                                var_v0 = 7;
                            }
                        } else {
                            var_v0 = 4;
                        }
                    } else {
                        func_0030DC00(&sp44, (s32) M2C_FIELD(sp40, u8 *, 0x20));
                        if (!(sp44 < -3752.0f)) {
                            if (!(sp44 < 3752.0f)) {
                                var_v0 = 3;
                            } else {
                                var_v0 = 7;
                            }
                        } else {
                            var_v0 = 4;
                        }
                    }
                    M2C_FIELD(arg0, s32 *, 0x54) = var_v0;
                    M2C_FIELD(arg0, s32 *, 0x50) = 1;
                    M2C_FIELD(arg0, M2C_UNK **, 0x58) = &func_0032CC40;
                    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
                    goto block_29;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x58) = &func_0032CC20;
                return 0;
            }
            goto block_29;
        }
        goto block_4;
    }
block_4:
    M2C_FIELD(arg0, M2C_UNK **, 0x58) = &func_0032CC20;
block_29:
    return 1;
}
