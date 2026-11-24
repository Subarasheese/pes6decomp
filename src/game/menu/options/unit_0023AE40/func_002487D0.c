/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_assignment.h"

void func_002487D0(void) {
    s32 pad = func_0024E650();
    switch (D_008DC230[pad]) {
    case 64:
        D_0053CB40[pad] = 6;
        Pes6PadAssign[pad].state = 6;
        func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
        SD_call(0x8400F802);
        break;
    }
    switch (D_008DC270[pad]) {
    case 1:
        D_003E9B00 = 3;
        SD_call(0x84028400);
        break;
    case 2:
        D_0053CB40[pad] = 6;
        Pes6PadAssign[pad].state = 6;
        func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
        SD_call(0x84008401);
        break;
    }
}
