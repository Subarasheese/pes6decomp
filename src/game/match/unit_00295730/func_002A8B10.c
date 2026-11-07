/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005E21A4[];
extern char D_005E21A8[];
extern char D_005E21AC[];

void func_002A8B10(s8 mode, f32 input, f32 inputFallback) {
    f32 value;
    f32 fallback;

    value = input;
    fallback = inputFallback;
    if (value < 0.0f) {
        value = 0.0f;
    }
    if (!(value <= 4000.0f)) {
        value = 4000.0f;
    }
    if (fallback <= 0.0f) {
        fallback = 0.31f;
    }
    (*(f32 *)D_005E21A4) = value;
    (*(f32 *)D_005E21A8) = fallback;
    (*(s8 *)D_005E21AC) = mode;
}
