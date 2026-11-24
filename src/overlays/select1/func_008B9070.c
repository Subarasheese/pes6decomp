/* compiler: mwcc-3.0.1b210 */

#include "pes6/controller_layout.h"

s8 func_008B9070(s32 slot) {
    s8 result = PAD_LAYOUT_CUSTOM;
    if (D_0053C840[slot][0] == 13 && D_0053C840[slot][1] == 14 && D_0053C840[slot][2] == 12 &&
        D_0053C840[slot][3] == 15 && D_0053C840[slot][4] == 10 && D_0053C840[slot][5] == 11 &&
        D_0053C840[slot][6] == 8 && D_0053C840[slot][7] == 9 && D_0053C740[slot][0] == 17 &&
        D_0053C740[slot][1] == 18 && D_0053C740[slot][2] == 16 && D_0053C740[slot][3] == 19 &&
        D_0053C740[slot][4] == 10 && D_0053C740[slot][5] == 11 && D_0053C740[slot][6] == 8 &&
        D_0053C740[slot][7] == 9 && D_0053C940.options[slot][0] == 0 &&
        D_0053C940.options[slot][7] == 0 && D_0053C940.options[slot][2] == 1 &&
        D_0053C940.options[slot][4] == 0 && D_0053C940.options[slot][1] == 0)
        result = PAD_LAYOUT_STANDARD;
    else if (D_0053C840[slot][0] == 15 && D_0053C840[slot][1] == 14 && D_0053C840[slot][2] == 12 &&
             D_0053C840[slot][3] == 13 && D_0053C840[slot][4] == 9 && D_0053C840[slot][5] == 10 &&
             D_0053C840[slot][6] == 8 && D_0053C840[slot][7] == 11 && D_0053C740[slot][0] == 18 &&
             D_0053C740[slot][1] == 19 && D_0053C740[slot][2] == 16 && D_0053C740[slot][3] == 17 &&
             D_0053C740[slot][4] == 9 && D_0053C740[slot][5] == 10 && D_0053C740[slot][6] == 8 &&
             D_0053C740[slot][7] == 11 && D_0053C940.options[slot][0] == 0 &&
             D_0053C940.options[slot][7] == 0 && D_0053C940.options[slot][2] == 1 &&
             D_0053C940.options[slot][4] == 0 && D_0053C940.options[slot][1] == 0)
        result = PAD_LAYOUT_ALTERNATE;
    return result;
}
