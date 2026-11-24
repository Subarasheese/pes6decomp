/* compiler: mwcc-3.0.1b151 */

#include "pes6/pass_directions.h"

static inline u16 choosePriority(const u8 *list, u8 count, u8 maximum) {
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

u16 func_00950A00(u16 direction, u8 count, u8 maximum) {
    const u8 *orders[8] = {D_00CB52A0.preference[0], D_00CB52A0.preference[3],
                           D_00CB52A0.preference[6], D_00CB52A0.preference[5],
                           D_00CB52A0.preference[1], D_00CB52A0.preference[4],
                           D_00CB52A0.preference[7], D_00CB52A0.preference[2]};
    s32 sector = ((direction + 0x1000) % 0x10000) >> 13;
    return (u16)choosePriority(orders[sector], count, maximum);
}
