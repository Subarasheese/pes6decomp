/* compiler: mwcc-3.0.1b151 */

#include "pes6/pass_directions.h"

u16 func_00952FE0(const u8 *list, u8 count, u8 maximum) {
    s32 i;
    u8 sector;
    for (i = 0;; ++i) {
        if (i >= count)
            return 0xffff;
        sector = list[i];
        if (sector == 255)
            return 0xffff;
        if (D_00CB52A0.costs[sector] <= maximum)
            return D_00CA9950[sector];
    }
    return 0xffff;
}
