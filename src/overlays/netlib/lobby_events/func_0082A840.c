/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_channel_status.h"
extern u32 func_001CDA50(s32);
extern s32 func_00872800(void *, u8);
extern s32 D_008A4988[], D_008A5438[], D_008A5A18[];
s32 func_0082A840(s32 channel) {
    u32 value;
    s32 unavailable = 0;
    if (netlib_channel_unavailable(channel) == 1)
        unavailable = 1;

    if (D_008A4398[0] == 0)
        D_008A4988[0] = -1;
    switch (D_008A4988[0]) {
    case 0:
        if (func_00862110(D_008A4398[0], channel) == 1) {
            value = func_001CDA50(1);
            if (func_00872800(&D_008A4398[0][channel], value) == 0) {
                D_008A5A18[0] = 0;
                D_008A5438[0] = 0;
                D_008A4988[0]++;
            } else {
                D_008A4988[0] = -1;
            }
            if (unavailable == 1)
                D_008A4988[0] = -1;
        } else {
            D_008A4988[0] = -1;
        }
        break;
    case 1:
        if (D_008A5A18[0] == 1) {
            D_008A4988[0]++;
        } else {
            if (func_00862110(D_008A4398[0], channel) == 0)
                D_008A4988[0] = -1;
            if (++D_008A5438[0] > 7200)
                D_008A4988[0] = 3;
            if (unavailable == 1)
                D_008A4988[0] = -1;
        }
        break;
    case 2:
        D_008A4988[0] = 0;
        D_008A5438[0] = 0;
        return 4;
    case 3:
        D_008A4988[0] = 0;
        D_008A5438[0] = 0;
        return 1;
    default:
        D_008A4988[0] = 0;
        D_008A5438[0] = 0;
        return 2;
    }
    return 0;
}
