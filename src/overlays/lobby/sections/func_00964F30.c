/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00950AA0(s32, s32);
s32 func_00950D30(s32);
s32 func_009523D0(s32);
s32 func_00952510(s32);
extern s32 D_003EAC90;

s32 func_00964F30(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00950AA0(func_00950D30(D_003EAC90), arg0);
    if (temp_v0 == 0) {
        return 0;
    }
    return func_00952510(func_009523D0(temp_v0) & 0xFFFF);
}
