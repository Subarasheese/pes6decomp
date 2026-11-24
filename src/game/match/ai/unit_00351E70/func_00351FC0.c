/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_weather.h"
extern u8 Pes6MatchContext_Stadium[], D_00591BB6[], D_00591BB8[];
extern u8 func_00351EB0(s32);
extern s32 Pes6Random_Below(s32);

void func_00351FC0(u8 weather, u8 chance, u8 seed, u8 variation) {
    u8 region;
    StadiumWeatherInput input;
    region = 0;
    if (seed == 0) {
        do {
            seed = (u8)Pes6Random_Below(255);
        } while (seed == 0);
    }
    input.stadium = func_00351EB0(Pes6MatchContext_Stadium[0]);
    input.weather = weather;
    input.chance = chance;
    input.month = D_00591BB8[0] == 0 ? 8 : 2;
    input.time = D_00591BB6[0] == 0 ? 13 : 21;
    input.seed = seed;
    input.variation = variation;
    func_00295650(&input, &region);
    func_00295610();
}
