/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_rating.h"
/* Byte positions in the player attribute block described in edit_player_params.h. */
enum {
    ATTACK = 2,
    DEFENCE = 3,
    BALANCE = 4,
    SPEED = 6,
    ACCELERATION = 7,
    SHORT_PASS_ACCURACY = 12,
    SHOT_ACCURACY = 16,
    TEAMWORK = 23,
    TECHNIQUE = 24
};

typedef struct {
    Pes6PlayerRating attributes[36];
} MatchPlayerAttributes;
extern void func_0023D560(s32 *values, s32 first, s32 last);

void func_0023D190(s8 *output, const MatchPlayerAttributes *eleven) {
    s8 ratings[5] = {0};
    s32 left[11] = {0}, right[11] = {0};
    s32 group, player, total, first, second;
    /* Sort the two ratings independently so each average takes its own six highest values. */
    for (group = 0; group < 5; group++) {
        for (player = 0; player < 11; player++) {
            switch (group) {
            case 0:
                left[player] = (eleven[player].attributes[ATTACK].value - 50) * 2;
                right[player] = (eleven[player].attributes[SHOT_ACCURACY].value - 50) * 2;
                break;
            case 1:
                left[player] = (eleven[player].attributes[DEFENCE].value - 50) * 2;
                right[player] = (eleven[player].attributes[BALANCE].value - 50) * 2;
                break;
            case 2:
                left[player] = (eleven[player].attributes[TEAMWORK].value - 50) * 2;
                right[player] = (eleven[player].attributes[TEAMWORK].value - 50) * 2;
                break;
            case 3:
                left[player] = (eleven[player].attributes[SPEED].value - 50) * 2;
                right[player] = (eleven[player].attributes[ACCELERATION].value - 50) * 2;
                break;
            case 4:
                left[player] = (eleven[player].attributes[TECHNIQUE].value - 50) * 2;
                right[player] = (eleven[player].attributes[SHORT_PASS_ACCURACY].value - 50) * 2;
                break;
            }
        }
        first = 0;
        second = 0;
        func_0023D560(left, 0, 10);
        func_0023D560(right, 0, 10);
        for (player = 10; player >= 5; player--) {
            first += left[player];
            second += right[player];
        }
        {
            f32 factor, value, scaled;
            factor = 1.2f;
            value = (first / 6 + second / 6) / 2;
            scaled = factor * value;
            total = scaled;
        }
        if (total >= 100)
            total = 100;
        if (total < 0)
            total = 0;
        switch (group) {
        case 0:
            ratings[0] = total;
            break;
        case 1:
            ratings[1] = total;
            break;
        case 2:
            ratings[2] = total;
            break;
        case 3:
            ratings[3] = total;
            break;
        case 4:
            ratings[4] = total;
            break;
        }
    }
    {
        s8 *src = ratings;
        s32 count = 5;
        do {
            *output++ = *src++;
        } while (--count > 0);
    }
}
