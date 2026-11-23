/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_strip_colors.h"

extern s16 func_002432D0(s8 home, s8 away);
extern s32 Pes6Team_ResolveSpecialId(s32 team);

static inline void chooseAwayStrip(void) {
    s16 first = (s32)func_00243930(func_00241660(Pes6MatchContext[0], STRIP_PRIMARY_SHIRT, 0),
                                   func_00241660(D_00591BB2[0], STRIP_PRIMARY_SHIRT, 0), 0);
    s16 alternate = (s32)func_00243930(func_00241660(Pes6MatchContext[0], STRIP_PRIMARY_SHIRT, 0),
                                       func_00241660(D_00591BB2[0], STRIP_PRIMARY_SHIRT, 1), 0);
    if (first >= alternate) {
        D_003E9E88[0] = 0;
        D_003E9E88[1] = 0;
    } else {
        D_003E9E88[0] = 0;
        D_003E9E88[1] = ALL_STRIP_PARTS;
    }
}

void func_00244AB0(void) {
    s16 homeFirst, awayAlternate, homeAlternate, bothAlternate;
    D_003E9E88[0] = 0;
    D_003E9E88[1] = 0;
    homeFirst = func_002432D0(0, 0);
    awayAlternate = func_002432D0(0, 1);
    homeAlternate = func_002432D0(1, 0);
    bothAlternate = func_002432D0(1, 1);
    if (homeFirst >= 10 || awayAlternate >= 10) {
        if (homeFirst >= awayAlternate) {
            D_003E9E88[0] = 0;
            D_003E9E88[1] = 0;
        } else {
            D_003E9E88[0] = 0;
            D_003E9E88[1] = ALL_STRIP_PARTS;
        }
        if (homeFirst > 35) {
            D_003E9E88[0] = 0;
            D_003E9E88[1] = 0;
        }
    } else {
        if (homeAlternate >= bothAlternate) {
            if (homeAlternate > 10) {
                D_003E9E88[1] = 0;
                D_003E9E88[0] = ALL_STRIP_PARTS;
            } else
                chooseAwayStrip();
        } else {
            if (bothAlternate > 10) {
                D_003E9E88[0] = ALL_STRIP_PARTS;
                D_003E9E88[1] = ALL_STRIP_PARTS;
            } else
                chooseAwayStrip();
        }
    }
    if (Pes6MatchContext[0] != 0x126 && D_00591BB2[0] != 0x127 &&
        (u16)Pes6Team_ResolveSpecialId(Pes6MatchContext[0]) ==
            (u16)Pes6Team_ResolveSpecialId(D_00591BB2[0])) {
        D_003E9E88[0] = 0;
        D_003E9E88[1] = ALL_STRIP_PARTS;
    }
    if ((Pes6MatchContext[0] == 0x68 && D_00591BB2[0] == 0x73) ||
        (Pes6MatchContext[0] == 0x73 && D_00591BB2[0] == 0x68)) {
        D_003E9E88[0] = 0;
        D_003E9E88[1] = 0;
    }
}
