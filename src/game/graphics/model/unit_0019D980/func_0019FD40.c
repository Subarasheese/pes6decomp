/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off
#include "pes6/model_vertex.h"

void func_0019FD40(u16 corners[4], u16 face) {
    s32 index = (u16)face;
    s32 topLeft, bottomLeft, topRight, bottomRight;
    s32 row, column;
    if (index < 0)
        return;
    if (index < 96) {
        column = index % 6;
        row = index / 6;
        bottomLeft = column + row * 7;
        topLeft = bottomLeft + 7;
        bottomRight = bottomLeft + 1;
        topRight = topLeft + 1;
    } else if (index < 160) {
        index -= 96;
        column = index % 4;
        row = index / 4;
        bottomLeft = column + row * 4 + 119;
        topLeft = bottomLeft + 4;
        bottomRight = bottomLeft + 1;
        topRight = topLeft + 1;
        if (column == 3) {
            bottomRight = row * 7;
            topRight = bottomRight + 7;
        }
    } else if (index < 184) {
        index -= 160;
        row = index / 6;
        column = 5 - index % 6;
        bottomRight = row + column * 4 + 187;
        bottomLeft = bottomRight + 4;
        topRight = bottomRight + 1;
        topLeft = bottomLeft + 1;
        if (column == 5) {
            bottomLeft = row + 119;
            topLeft = bottomLeft + 1;
        }
        if (row == 3) {
            topLeft = 5 - column;
            topRight = topLeft + 1;
        }
    } else if (index < 208) {
        index -= 184;
        row = 3 - index / 6;
        column = 5 - index % 6;
        topRight = row + column * 4 + 211;
        topLeft = topRight + 4;
        bottomRight = topRight + 1;
        bottomLeft = topLeft + 1;
        if (column == 5) {
            topLeft = row + 183;
            bottomLeft = topLeft + 1;
        }
        if (row == 3) {
            bottomLeft = 117 - column;
            bottomRight = bottomLeft + 1;
        }
    } else {
        return;
    }
    if (corners) {
        corners[0] = topLeft;
        corners[2] = bottomLeft;
        corners[1] = topRight;
        corners[3] = bottomRight;
    }
}
