/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_assignment.h"

extern s32 func_001B9DF0(void);
extern s32 Pes6SaveData_GetUnavailableFlag(void);

s32 func_00248910(void) {
    s32 result = 0, pad = func_0024E650();
    if (!func_001B9DF0()) {
        switch (D_008DC270[pad]) {
        case 1:
            SD_call(0x84028400);
            result = 2;
            break;
        case 2:
            SD_call(0x84008401);
            result = 1;
            break;
        }
    }
    if (!Pes6SaveData_GetUnavailableFlag()) {
        switch (D_008DC230[pad]) {
        case 128:
            D_0053CB40[pad] = 5;
            Pes6PadAssign[pad].state = 5;
            func_0023EC10(&D_003E9B10, PAD_REDRAW_CURSORS);
            SD_call(0x8400F802);
            break;
        }
    }
    return result;
}
