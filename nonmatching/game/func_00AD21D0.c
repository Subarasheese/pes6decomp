/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A09950(void *);                          /* extern */
s32 func_00A14020(void *);                          /* extern */
s32 func_00A1B4A0();                                /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchState_Current[];
extern char D_00591E19[];
extern char D_005926D8[];
extern char D_005926DE[];

s32 func_00AD21D0(void *arg0) {
    f32 var_f0;
    s32 temp_v0;
    s32 temp_v1_3;
    u16 temp_a0;
    void *temp_v1;
    void *temp_v1_2;

    if (!(func_00A1B4A0() & 0xFF)) {
        temp_v1 = M2C_FIELD(arg0, void **, 4);
        if (M2C_FIELD(temp_v1, f32 *, 0x38) <= (f32) ((M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), u16 *, 8) * 2) - 4)) {
            if ((s32) (*(u8 *)D_005926DE) >= 0) {
                var_f0 = (f32) (*(u8 *)D_005926DE);
            } else {
                var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926DE) >> 1) | ((*(u8 *)D_005926DE) & 1));
            }
            if (((*(f32 *)D_005926D8) <= var_f0) && ((*(u8 *)D_00591E19) != M2C_FIELD(arg0, u8 *, 0))) {
                goto block_40;
            }
            goto block_8;
        }
    }
block_8:
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) <= 32.0f) {
        if (func_00A14020(arg0) == 0) {
            return 0;
        }
        goto block_11;
    }
block_11:
    temp_v1_2 = M2C_FIELD(arg0, void **, 4);
    temp_v0 = M2C_FIELD(M2C_FIELD(temp_v1_2, void **, 4), u8 *, 3) * 2;
    if ((temp_v0 != 0) && !(M2C_FIELD(temp_v1_2, f32 *, 0x38) < (f32) temp_v0)) {
        if ((*(u8 *)Pes6MatchState_Current) != 0) {
            temp_v1_3 = (*(u8 *)Pes6MatchState_Current) & 0xFF;
            if (M2C_FIELD(arg0, u8 *, 0) != temp_v1_3) {
                if (temp_v1_3 != 1) {
                    if (temp_v1_3 == 0xC) {
                        goto block_21;
                    }
                    goto block_22;
                }
block_21:
                return 1;
            }
        }
block_22:
        temp_a0 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
        switch (temp_a0) {                          /* irregular */
        case 4:
            if (func_00A09950(arg0) == 0) {
                return 0;
            }
        case 5:
        case 15:
        case 11:
        case 13:
block_40:
            return 1;
        case 0:
            if ((M2C_FIELD(arg0, u8 *, 0x16) == 5) && (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E19))) {
                return 0;
            }
            goto block_40;
        default:
            return 0;
        }
    } else {
        return 0;
    }
}
