/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchObj28_Heading[];

void func_002A9220(f32 fparg0) {
    f32 temp_f1;
    s32 var_a0;

    temp_f1 = 49152.0f - ((32768.0f * fparg0) / 3.1415927f);
    if (temp_f1 >= 2.1474836e9f) {
        var_a0 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a0 = (s32) temp_f1;
    }
    (*(s16 *)Pes6MatchObj28_Heading) = var_a0 & 0xFFFF;
}
