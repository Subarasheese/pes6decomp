/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_setup.h"

typedef struct {
    f32 x, y, z, w;
} PadVec;

extern s32 func_008B32E0(s32);
extern void func_008B3290(s32, const PadVec *);

void func_0024BE20(s8 pad) {
    PadVec point = {0}, bounds = {0};
    s8 visible = 0;
    D_003E9B18->handles[17 + pad] = func_008B32E0(D_003E9B18->handles[17 + pad]);
    switch (matchPadSideKind(Pes6PadAssign[pad].side)) {
    case 1:
        D_003E9B18->handles[17 + pad] = func_008B3310(D_003E9B1C, pad + 17, 0, 2, 0, 1);
        visible = 1;
        break;
    case 4:
    case 11:
        D_003E9B18->handles[17 + pad] = func_008B3310(D_003E9B1C, 25, 0, 2, 0, 1);
        visible = 1;
        break;
    case 10:
    case 0:
        D_003E9B18->handles[17 + pad] = func_008B3310(D_003E9B1C, 27, 0, 2, 0, 1);
        visible = 1;
        break;
    case 2:
        D_003E9B18->handles[17 + pad] = func_008B3310(D_003E9B1C, pad + 29, 0, 2, 0, 1);
        visible = 1;
        break;
    case 3:
        D_003E9B18->handles[17 + pad] = func_008B3310(D_003E9B1C, 26, 0, 2, 0, 1);
        visible = 1;
        break;
    }
    if (visible == 1) {
        switch (Pes6PadAssign[pad].side) {
        case -1:
        case -4:
        case -2:
        case -11:
        case -3:
            func_008B32B0(D_003E9B18->handles[2], &bounds, (u16)(pad + 2));
            point.x = bounds.x;
            point.y = bounds.y;
            point.z = func_008B32A0(D_003E9B18->handles[2], (u16)(pad + 2));
            func_008B3290(D_003E9B18->handles[17 + pad], &point);
            break;
        case 1:
        case 4:
        case 2:
        case 11:
        case 3:
            func_008B32B0(D_003E9B18->handles[2], &bounds, (u16)(pad + 18));
            point.x = bounds.x;
            point.y = bounds.y;
            point.z = func_008B32A0(D_003E9B18->handles[2], (u16)(pad + 18));
            func_008B3290(D_003E9B18->handles[17 + pad], &point);
            break;
        default:
            func_008B32B0(D_003E9B18->handles[2], &bounds, (u16)(pad + 10));
            point.x = bounds.x;
            point.y = bounds.y;
            point.z = func_008B32A0(D_003E9B18->handles[2], (u16)(pad + 10));
            func_008B3290(D_003E9B18->handles[17 + pad], &point);
            break;
        }
    }
}
