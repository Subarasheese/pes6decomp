/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 red, green, blue, alpha;
} MatchColor;
extern u16 Pes6MatchContext[];
extern MatchColor func_00241660(s32 team, s32 part, s32 alternate);
extern s32 func_002CE1E0(MatchColor *color, s32 team, s32 strip, s32 component, s32 variant);
extern f32 func_00243930(MatchColor home, MatchColor away, s32 mode);
s16 func_002432D0(s8 homeAlternate, s8 awayAlternate) {
    MatchColor colors[2][3];
    s32 strips[2], alternates[2];
    s32 side;
    s16 contrast;
    s32 distance, shirt, accent, shorts;
    if (homeAlternate == 0)
        strips[0] = 1;
    else
        strips[0] = 3;
    if (awayAlternate == 0)
        strips[1] = 1;
    else
        strips[1] = 3;
    alternates[0] = homeAlternate;
    alternates[1] = awayAlternate;
    for (side = 0; side <= 1; side++) {
        colors[side][0] = func_00241660(Pes6MatchContext[side], 0, alternates[side]);
        colors[side][1] = func_00241660(Pes6MatchContext[side], 1, alternates[side]);
        colors[side][2] = func_00241660(Pes6MatchContext[side], 2, alternates[side]);
    }
    for (side = 0; side <= 1; side++)
        func_002CE1E0(&colors[side][2], Pes6MatchContext[side], strips[side], 5, 0);
    /* Each weighted distance is truncated before the next component is added. */
    shirt = 0;
    shirt += 0.6f * func_00243930(colors[0][0], colors[1][0], 0);
    shirt += 0.2f * func_00243930(colors[0][0], colors[1][1], 0);
    shirt += 0.2f * func_00243930(colors[0][0], colors[1][2], 0);
    accent = 0;
    accent += 0.6f * func_00243930(colors[0][1], colors[1][0], 0);
    accent += 0.2f * func_00243930(colors[0][1], colors[1][1], 0);
    accent += 0.2f * func_00243930(colors[0][1], colors[1][2], 0);
    shorts = 0;
    shorts += 0.4f * func_00243930(colors[0][2], colors[1][0], 0);
    shorts += 0.2f * func_00243930(colors[0][2], colors[1][1], 0);
    shorts += 0.4f * func_00243930(colors[0][2], colors[1][2], 0);
    contrast = (s32)(0.6f * shirt + 0.25f * accent + 0.15f * shorts);
    distance = func_00243930(colors[0][0], colors[1][0], 0);
    if (distance < 10)
        contrast -= 40 - distance;
    if (distance >= 40) {
        if (distance > 50)
            distance = 50;
        contrast += 20 - (50 - distance);
    }
    if (!(10.0f <= func_00243930(colors[0][0], colors[1][1], 0))) {
        if (!(5.0f <= func_00243930(colors[0][0], colors[1][1], 0)))
            contrast -= 30;
        else
            contrast -= 20;
    }
    if (!(10.0f <= func_00243930(colors[0][1], colors[1][0], 0))) {
        if (!(5.0f <= func_00243930(colors[0][1], colors[1][0], 0)))
            contrast -= 30;
        else
            contrast -= 20;
    }
    distance = func_00243930(colors[0][2], colors[1][2], 0);
    if (distance < 6)
        contrast -= 10;
    if (distance >= 40) {
        if (distance > 50)
            distance = 50;
        contrast += 5 - (50 - distance);
    }
    if (!(10.0f <= func_00243930(colors[0][0], colors[1][2], 0)))
        contrast -= 5;
    if (!(10.0f <= func_00243930(colors[0][2], colors[1][0], 0)))
        contrast -= 5;
    if (contrast < 0)
        contrast = 0;
    if (contrast > 100)
        contrast = 100;
    return contrast;
}
