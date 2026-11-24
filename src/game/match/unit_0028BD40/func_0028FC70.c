/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

void func_0028FC70(u32 masks[][3], u8 count, const u8 *groups, const SquadPosition *positions) {
    s32 i, selected, minX, j;
    if (count < 2)
        return;
    selected = 0;
    minX = 48;
    for (i = 0; i < OUTFIELD_SLOTS; i++) {
        if (groups[i + 1] == 5) {
            if (positions[i].x < minX) {
                minX = positions[i].x;
                selected = i;
            }
        }
    }
    selected++;
    for (j = 0; j < 3; j++)
        masks[selected][j] &= ~0x12;
}
