/* compiler: mwcc-3.0.1b198 */

#include "pes6/match_weather.h"
extern u8 Pes6MatchContext_Stadium[], D_00591BB6[], D_00591BB8[];
extern u8 func_00351EB0(s32);
extern s32 Pes6Random_Below(s32);
extern u8 D_00591C09[];
extern u16 Pes6MatchContext[], Pes6Team_ResolveSpecialId(u16);
extern u8 func_0021FC40(u16);
extern s32 func_0022F470(void);

void func_003520A0(u8 weather, u8 chance, u8 seed) {
    u8 region;
    StadiumWeatherInput input;
    u8 time = D_00591BB6[0] == 0 ? 13 : 21;
    u8 mode = D_00591C09[0];
    u8 stadium, month;
    region = 0;
    if (seed == 0) {
        do {
            seed = (u8)Pes6Random_Below(255);
        } while (seed == 0);
    }
    if (mode == 0 || mode == 7) {
        stadium = func_00351EB0(Pes6MatchContext_Stadium[0]);
        month = D_00591BB8[0] == 0 ? 8 : 2;
        region = 0;
    } else {
        stadium = func_0021FC40(Pes6Team_ResolveSpecialId(Pes6MatchContext[0]));
        month = func_0022F470();
        region = 1;
    }
    input.stadium = stadium;
    input.weather = weather;
    input.chance = chance;
    input.month = month;
    input.time = time;
    input.seed = seed;
    input.variation = 0;
    func_00295650(&input, &region);
    func_00295610();
}
