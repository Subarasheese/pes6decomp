/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern u8 D_00591C09[];
extern s32 Pes6SaveData_GetUnavailableFlag(void);
extern s32 func_0023E090(void);
extern s8 D_00591DB5[];
extern s8 D_00591DB6[];

s32 func_0024E650(void) {
    s32 i, limit = MATCH_PAD_COUNT, pad = 0xff;
    if (Pes6SaveData_GetUnavailableFlag())
        limit = 2;
    if (D_00591DB5[0] == 1) {
        if (matchPadConnected(D_00591DB6[0]))
            pad = D_00591DB6[0];
    }
    if (pad == 0xff) {
        if (D_00591C09[0] == 5 || func_0023E090())
            pad = 0;
    }
    if (pad == 0xff) {
        for (i = 0; i < limit; i++) {
            if (matchPadConnected(i))
                pad = i;
            if (pad != 0xff)
                break;
        }
        if (pad == 0xff)
            pad = 0;
    }
    return pad;
}
