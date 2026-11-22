/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_009E7300(s32);
extern u32 func_009E74C0(void);
extern s32 func_009E74D0(void);
extern s8 D_00A7DF20[];
extern s32 D_00A7DF24[];

s32 func_009E6A10(s32 request) {
    s32 status;
    s32 result;
    s32 phase;
    phase = D_00A7DF20[0];
    result = 0;
    switch (phase) {
    case 0:
        if (func_009E74D0() != 1)
            break;
        phase += 1;
    case 1:
        status = func_009E7300(request);
        switch (status) {
        case 0:
            break;
        case 1:
            D_00A7DF24[0] = 2;
            phase += 1;
            break;
        default:
            D_00A7DF24[0] = 6;
            phase += 1;
            break;
        }
        break;
    case 2:
        if (func_009E74C0() != 1)
            break;
        phase += 1;
    case 3:
        result = D_00A7DF24[0];
        break;
    }
    D_00A7DF20[0] = phase;
    return result;
}
