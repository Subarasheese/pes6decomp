/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
extern s32 func_00C12B00(u8);
extern u8 D_003E9D53;
s32 func_002C04B0(MatchEvent *record) {
    s32 result = 0;
    if (func_00C12B00(func_00C132C0((u8 *)record))) {
        u8 id = func_00C132B0((u8 *)record);
        if (id != D_003E9D53) {
            D_003E9D53 = id;
            result = id != 255 && D_003E9D51 == ((id >> 5) & 1);
        }
    }
    return result;
}
