/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00C11FC0(f32 fparg0) {
    s32 v = (s32) (8.0f * ((13465.0f + fparg0) / 26930.0f));
    v = (v > 0) ? v : 0; v = (v < 7) ? v : 7; return v;
}
