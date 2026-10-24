/* compiler: mwcc-3.0.1b210 */
#include "pes6/unit_0030f470.h"

s32 func_003102A0(s16 *output, s32 value, s32 mode) {
    s32 lower;
    s32 upper = (s32)output;

    /* Retail initializes both bounds only for modes 0 through 3. */
    switch (mode) {
    case 0:
        lower = 0;
        upper = 45;
        break;
    case 1:
        lower = 45;
        upper = 90;
        break;
    case 2:
        lower = 90;
        upper = 105;
        break;
    case 3:
        lower = 105;
        upper = 120;
        break;
    }
    *output = pes6_call_002C1D20(lower, upper, value);
    return 1;
}
