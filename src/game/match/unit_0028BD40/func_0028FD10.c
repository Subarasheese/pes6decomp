/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

void func_0028FD10(u32 masks[][3], u8 count, const u8 *groups, const SquadPosition *positions) {
    s32 i, selected, maxX, ties, j;
    s32 n = count;
    if (!n)
        return;
    ties = 0;
    selected = 0;
    maxX = -1;
    for (i = 0; i < OUTFIELD_SLOTS; i++) {
        if (groups[i + 1] == 12) {
            if (maxX == positions[i].x)
                ties++;
            else if (maxX < positions[i].x) {
                maxX = positions[i].x;
                ties = 1;
                selected = i;
            }
        }
    }
    if (ties == 1) {
        selected++;
        for (j = 0; j < 3; j++) {
            masks[selected][j] &= ~0x10000;
            masks[selected][j] &= ~0x900;
        }
        if (n >= 2) {
            for (i = 0; i < STARTING_ELEVEN; i++)
                if (i != selected && groups[i] == 12) {
                    for (j = 0; j < 3; j++)
                        masks[i][j] &= ~0x20000;
                }
        }
    }
}
