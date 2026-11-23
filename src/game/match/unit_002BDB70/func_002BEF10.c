/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_statistics.h"
extern u8 func_00C18DC0(s32);
extern s32 func_00C12C80(u8);

s32 func_002BEF10(MatchEvent *record) {
    s32 result = 0;
    int qualifies;
    if (func_00C132C0((u8 *)record) == 1) {
        D_003E9D52 = func_00C13280(record)->minute;
    } else {
        qualifies = 0;
        if (func_00C12C80(func_00C132C0((u8 *)record)) && D_003E9D50 == func_00C132B0((u8 *)record))
            qualifies = (func_00C13280(record)->flags & 3) == 2;
        if (qualifies) {
            u8 period = func_00C18DC0(D_003E9D52);
            s32 player = func_00C132B0((u8 *)record);
            u16 grid = func_00C13280(record)->value.packedPosition;
            s32 half = ((s32)((u8)period + (((u8)player >> 5) & 1)) % 2);
            s32 sign = 1 - 2 * half;
            f32 y = (f32)sign * ((17458.0f / 209.0f) * (f32)((s32)grid / 312) - 8729.0f);
            if (y <= 0.0f) {
                result = 0;
            } else {
                result = 1;
            }
        }
    }
    return result;
}
