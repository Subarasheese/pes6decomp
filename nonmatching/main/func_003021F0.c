/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32, s32);
s32 func_00255E70(s32, s32, s32);
s32 func_009E1C90(s32, s32);
s32 func_00BD9E70(void);
extern char *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char Pes6MatchContext_FrameCounter[];
extern char D_00CB5F24[];
extern char D_00CB5F28[];
extern char D_00CB5F3C[];
extern char D_00CB5F44[];
extern char D_00CB5F45[];
extern char D_00CB5F48[];
extern char D_00CB5F64[];
extern char D_00CB5F68[];
extern char D_00CB5F90[];

s32 func_003021F0(void) {
    s16 temp_s0;
    s32 off;
    s32 a2;
    s32 v;
    s32 d;
    s32 idx;
    char *p;

    if (*(u8 *)D_00CB5F28 == 0) {
        return 0xFF;
    }
    if (*(u8 *)D_00CB5F68 == 0) {
        return 0xFF;
    }
    if (*(u8 *)D_00CB5F28 == 0xFF) {
        idx = 1;
    } else {
        idx = (s32)*(u8 *)D_00CB5F28 % 23;
    }
    off = idx * 0x240;
    p = Pes6MatchPlayers + off;
    temp_s0 = *(s16 *)(p + 0x14);
    if (*(s32 *)D_00CB5F24 == 3
        && (func_009E1C90(1, off) & 0xFF) == 0xA
        && (func_009E1C90(2, off) & 0xFF) == 0
        && func_00BD9E70() != 0) {
        v = (s32)*(f32 *)(Pes6Ball_Current + 0x14);
        if (v <= 0) v = -v;
        if (v < 0x571) {
            v = (s32)*(f32 *)(Pes6Ball_Current + 0x18);
            if (v <= 0) v = -v;
            if ((f32)v <= 1963.0f) {
                if (func_00255E70(*(u8 *)(p + 0x12), 0, 0) == 0) return 6;
                return 5;
            }
        }
        if (func_00255E70(*(u8 *)(p + 0x12), 0, 0) == 0) return 4;
        return 3;
    }
    if (*(s32 *)D_00CB5F64 != 3 && *(s32 *)D_00CB5F64 != 1) {
        return 0xFF;
    }
    if (*(s32 *)D_00CB5F24 == 0xB) {
        d = *(s32 *)D_00CB5F3C - *(s32 *)Pes6MatchContext_FrameCounter;
        if (d <= 0) d = -d;
        if (d == 0) {
            u8 m = *(u8 *)D_00CB5F44;
            if ((m == 6 || m == 2 || m == 1) && *(u32 *)D_00CB5F90 >= 0x90001U) {
                return Pes6Random_Below(3, *(s32 *)D_00CB5F24) & 0xFFFF;
            }
        }
    }
    if (*(s32 *)D_00CB5F24 != 7) {
        return 0xFF;
    }
    d = *(s32 *)D_00CB5F3C - *(s32 *)Pes6MatchContext_FrameCounter;
    if (d <= 0) d = -d;
    if (d != 0) {
        return 0xFF;
    }
    a2 = 0;
    if (*(u8 *)D_00CB5F44 == 3) {
    } else if (*(u8 *)D_00CB5F44 == 2) {
        if (*(f32 *)(Pes6Ball_Current + 0x4F4) * (f32)temp_s0 < -9241.0f) {
            if (func_00255E70(*(u8 *)(p + 0x12), 3, 0) == 0) return 8;
            return 7;
        }
    } else if (*(u8 *)D_00CB5F44 == 1) {
        if (*(u8 *)D_00CB5F45 == 3) {
            a2 = 1;
        } else if (*(u8 *)D_00CB5F45 == 2 || *(u8 *)D_00CB5F45 == 1) {
            if (*(s32 *)D_00CB5F48 >= 0x4001) a2 = 1;
            else a2 = 2;
        }
    }
    a2 &= 0xFF;
    if (a2 == 2) {
        if (func_00255E70(*(u8 *)(p + 0x12), 3, a2) == 0) return 9;
        return 10;
    }
    if (a2 == 1) {
        if (func_00255E70(*(u8 *)(p + 0x12), 3, a2) == 0) return 5;
        return 6;
    }
    return 0xFF;
}
