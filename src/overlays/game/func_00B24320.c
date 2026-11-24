/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"
void func_00B24320(s32 which, s32 first, s32 second) {
    s32 side = (which != 0);
    s32 firstBit, secondBit, mask, otherSide;
    D_00CBBF10->pending = 1;
    firstBit = (first != 0) << side;
    secondBit = (second != 0) << side;
    mask = 1 << side;
    otherSide = (u8)~mask;
    D_00CBBF10->first &= otherSide;
    D_00CBBF10->second &= otherSide;
    D_00CBBF10->present &= otherSide;
    D_00CBBF10->first |= firstBit;
    D_00CBBF10->second |= secondBit;
    D_00CBBF10->present |= mask;
}
