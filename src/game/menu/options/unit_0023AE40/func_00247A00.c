/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern s32 func_002DCA30(void);

s32 func_00247A00(s32 pad, s32 slot, MatchPadSlot *slots) {
    switch (D_008DC230[pad]) {
    case 64:
        SD_call(0x8400F803);
        do {
            slots[slot].nameMode--;
            func_0023EC10(&D_003E9B10, PAD_REDRAW_NAMES);
            if (slots[slot].nameMode < 0)
                slots[slot].nameMode = 2;
        } while ((func_002DCA30() && slots[slot].nameMode == 0) ||
                 (slots[slot].nameMode == 1 && slots[slot].name[0] == '\0'));
        break;
    case 128:
        SD_call(0x8400F803);
        do {
            slots[slot].nameMode++;
            func_0023EC10(&D_003E9B10, PAD_REDRAW_NAMES);
            if (slots[slot].nameMode >= 3)
                slots[slot].nameMode = 0;
        } while ((func_002DCA30() && slots[slot].nameMode == 0) ||
                 (slots[slot].nameMode == 1 && slots[slot].name[0] == '\0'));
        break;
    }
    switch (D_008DC270[pad]) {
    case 1:
        SD_call(0x84028400);
        D_008DC270[pad] = 0;
        return 2;
    case 2:
        SD_call(0x84008401);
        D_008DC270[pad] = 0;
        return 1;
    }
    return 0;
}
