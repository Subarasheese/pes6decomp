/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_direction_state.h"
extern u16 D_00CAC770[];

u16 func_00B42980(const u8 *choices, u8 count, u8 *limit) {
    u16 i = 0;
    u8 highest = 0;
    for (;; ++i) {
        u8 sector, score;
        if (i >= count)
            return 0xffff;
        sector = choices[i];
        if (sector == 255)
            return 0xffff;
        score = D_00CB52A0.costs[sector];
        if (highest < score)
            highest = score;
        if (score <= *limit) {
            *limit = highest;
            return D_00CAC770[sector];
        }
    }
}
