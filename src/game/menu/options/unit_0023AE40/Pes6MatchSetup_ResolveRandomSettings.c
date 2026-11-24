/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_random_settings.h"

extern u8 D_00591C09[], Pes6MatchContext_Stadium[], D_00591BB6[], D_00591BB8[], D_00591BB7[],
    D_00591BC6[], D_00591BC7[], D_00591BC8[], D_00591BC9[], D_00591BC4[], D_00591BC5[],
    D_00591BCA[], D_00591BD1[];
extern u16 Pes6MatchContext[], D_00591BB2[];
extern s32 D_008DA060[];
typedef struct {
    u8 unavailable, id, reserved[18];
} StadiumEntry;
extern StadiumEntry Pes6StadiumTable[];
extern s32 Pes6Random_Below(s32), func_00295590(void), func_00246550(s32);
extern u8 *Pes6OptionData_GetBlock2CC(void);
extern void func_00351FC0(s32, s32, s32, s32),
    func_002CBF20(s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, s32 *);

void Pes6MatchSetup_ResolveRandomSettings(void) {
    s32 index;
    s32 eligible;
    s32 homeStrip, awayStrip, homeKeeper, awayKeeper;
    if (D_00591C09[0] != 0 && D_00591C09[0] != 7 && D_00591C09[0] != 5)
        return;
    if (Pes6MatchSettings_RandomFlags.stadium == 1) {
        do {
            index = (u16)Pes6Random_Below(36) + 1;
            if (index >= 36)
                index = 35;
        } while (Pes6StadiumTable[index].unavailable);
        Pes6MatchContext_Stadium[0] = Pes6StadiumTable[index].id;
    }
    if (Pes6MatchSettings_RandomFlags.time == 1)
        D_00591BB6[0] = Pes6Random_Below(2);
    if (Pes6MatchSettings_RandomFlags.season == 1)
        D_00591BB8[0] = Pes6Random_Below(2);
    if (Pes6MatchSettings_RandomFlags.weather == 1) {
        if (Pes6MatchSettings_RandomFlags.season == 1)
            func_00351FC0(D_00591BB7[0], 0, 0, 0);
        else
            func_00351FC0(D_00591BB7[0], 0, 0, 0xff);
        D_00591BB7[0] = func_00295590();
    } else if (Pes6MatchSettings_RandomFlags.season == 1)
        func_00351FC0(D_00591BB7[0], 0xff, 0, 0);
    else
        func_00351FC0(D_00591BB7[0], 0xff, 0, 0xff);
    if (Pes6MatchSettings_RandomFlags.kits == 1) {
        func_002CBF20(Pes6MatchContext[0], D_00591BB2[0], 0, 1, 0, &homeStrip, &awayStrip,
                      &homeKeeper, &awayKeeper);
        D_00591BC6[0] = homeStrip;
        D_00591BC7[0] = awayStrip;
        D_00591BC8[0] = homeKeeper;
        D_00591BC9[0] = awayKeeper;
    }
    if (Pes6MatchSettings_RandomFlags.stadiumOptionC4 == 1)
        D_00591BC4[0] = Pes6Random_Below(4);
    if (Pes6MatchSettings_RandomFlags.stadiumOptionC5 == 1)
        D_00591BC5[0] = Pes6Random_Below(4);
    if (Pes6MatchSettings_RandomFlags.ball == 1) {
        do {
            D_00591BCA[0] = Pes6Random_Below(17);
            eligible = 1;
            switch (D_00591BCA[0]) {
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
                eligible = 0;
                break;
            }
        } while (!eligible);
    }
    if (D_003E9A7D.optionD1 == 1) {
        do {
            D_00591BD1[0] = Pes6Random_Below(15);
            eligible = 1;
            switch (D_00591BD1[0]) {
            case 14:
                if (!func_00246550(196))
                    eligible = 0;
                break;
            case 13:
                if (!func_00246550(197))
                    eligible = 0;
                break;
            case 11:
                if (!func_00246550(198))
                    eligible = 0;
                break;
            case 12:
                if (!func_00246550(199))
                    eligible = 0;
                break;
            }
        } while (!eligible);
        D_00591BD1[0] = D_008DA060[D_00591BD1[0]];
    }
    if (!Pes6MatchContext_Stadium[0]) {
        D_00591BC4[0] = 0;
        D_00591BC5[0] = 0;
    } else if (D_00591C09[0] != 5) {
        const u8 *options = Pes6OptionData_GetBlock2CC();
        D_00591BC4[0] = options[11];
        D_00591BC5[0] = options[12];
        if (Pes6MatchSettings_RandomFlags.stadiumOptionC4 == 1)
            D_00591BC4[0] = Pes6Random_Below(4);
        if (Pes6MatchSettings_RandomFlags.stadiumOptionC5 == 1)
            D_00591BC5[0] = Pes6Random_Below(4);
        if (D_00591BC4[0] == 4)
            D_00591BC4[0] = 3;
        if (D_00591BC5[0] == 4)
            D_00591BC5[0] = 3;
    }
}
