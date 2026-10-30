/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00A426D0(void *);
extern s32 func_00AB98A0(void *, s8, s32);
M2C_UNK func_00207390(void *, M2C_UNK, s32, u16);   /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
extern s8 *Pes6Ball_Current;
extern char Pes6MatchState_Current[];

s32 func_00A42380(void *arg0) {
    s32 temp_a2;
    s32 temp_v1;
    s32 temp_v1_2;
    u16 temp_a3;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x9C);
    if (!(temp_v1 & 0x80)) {
        if (!(temp_v1 & 0x10)) {
            if (temp_v1 & 2) {
                if ((M2C_FIELD(arg0, s32 *, 0xB0) & 0xA00) == 0xA00) {
                    return 0;
                }
                if (func_00A426D0(arg0) != 0) {
                    return 1;
                }
                if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)Pes6MatchState_Current)) {
                    (*(u8 *)Pes6MatchState_Current) = 0;
                    *Pes6Ball_Current = 1;
                }
                M2C_FIELD(arg0, s8 *, 0x4A) = 0;
                M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
                M2C_FIELD(arg0, s8 *, 0x4D) = 0;
                return 1;
            }
            if (!(temp_v1 & 0x200)) {
                if (temp_v1 & 0x400) {
                    if (func_00AB98A0(arg0, 0, 1) != 0) {
                        return 1;
                    }
                    goto block_9;
                }
block_9:
                temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x9C);
                if (!(temp_v1_2 & 0x100)) {
                    if (temp_v1_2 & 8) {
                        if (func_00A426D0(arg0) != 0) {
                            return 1;
                        }
                        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)Pes6MatchState_Current)) {
                            (*(u8 *)Pes6MatchState_Current) = 0;
                            *Pes6Ball_Current = 1;
                        }
                        M2C_FIELD(arg0, s8 *, 0x4A) = 2;
                        M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
                        M2C_FIELD(arg0, s16 *, 0x18) = 0;
                        M2C_FIELD(arg0, s8 *, 0x4D) = 0;
                        return 1;
                    }
                    if (!(temp_v1_2 & 4)) {
                        if (temp_v1_2 & 0x20) {
                            M2C_FIELD(arg0, s8 *, 0x4A) = 1;
                            M2C_FIELD(arg0, s8 *, 0x50) = 0;
                            M2C_FIELD(arg0, s8 *, 0x4D) = 0;
                            M2C_FIELD(arg0, s8 *, 0x4F) = 0;
                            M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
                            goto block_52;
                        }
                        if (temp_v1_2 & 0x40) {
                            M2C_FIELD(arg0, s8 *, 0x4A) = 1;
                            M2C_FIELD(arg0, s8 *, 0x50) = 0;
                            M2C_FIELD(arg0, s8 *, 0x4D) = 0;
                            M2C_FIELD(arg0, s8 *, 0x4F) = 1;
                            M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
                            goto block_52;
                        }
                        return 0;
                    }
                    if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)Pes6MatchState_Current)) {
                        (*(u8 *)Pes6MatchState_Current) = 0;
                        *Pes6Ball_Current = 1;
                    }
                    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 0x26);
                    M2C_FIELD(arg0, s8 *, 0x16) = 0x12;
block_52:
                    M2C_FIELD(arg0, s16 *, 0x18) = 0;
                    return 1;
                }
                if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)Pes6MatchState_Current)) {
                    (*(u8 *)Pes6MatchState_Current) = 0;
                    *Pes6Ball_Current = 1;
                }
                M2C_FIELD(arg0, s8 *, 0x4A) = 5;
                M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
                M2C_FIELD(arg0, s8 *, 0x4D) = 0;
                return 1;
            }
            if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)Pes6MatchState_Current)) {
                (*(u8 *)Pes6MatchState_Current) = 0;
                *Pes6Ball_Current = 1;
            }
            func_00209A00(M2C_FIELD(arg0, void **, 4), 0x238, 0);
            temp_a3 = M2C_FIELD(arg0, u16 *, 0x2C);
            temp_a2 = temp_a3 - M2C_FIELD(arg0, u16 *, 0x26);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = (s8) (((temp_a2 + 0x10000) & 0xFFFF) < 0x8001);
            func_00207390(M2C_FIELD(arg0, void **, 4), 4, temp_a2, temp_a3);
            M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
            M2C_FIELD(arg0, s16 *, 0x18) = 7;
            M2C_FIELD(arg0, s8 *, 0x4D) = 0;
            return 1;
        }
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)Pes6MatchState_Current)) {
            (*(u8 *)Pes6MatchState_Current) = 0;
            *Pes6Ball_Current = 1;
        }
        M2C_FIELD(arg0, s8 *, 0x4A) = 3;
        M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
        M2C_FIELD(arg0, s8 *, 0x4D) = 0;
        return 1;
    }
    M2C_FIELD(arg0, s8 *, 0x4A) = 4;
    M2C_FIELD(arg0, s8 *, 0x16) = 0x40;
    M2C_FIELD(arg0, s16 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x4D) = 0;
    return 1;
}
