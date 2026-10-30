/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0090B510(M2C_UNK);                         /* extern */
extern char D_0092F040[];
extern char D_0092F04C[];
extern char D_0092F050[];

s32 func_0090D470(void) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_0090B510(1);
    temp_a1 = (*(s32 *)D_0092F04C) & 0xFFFE1FFF;
    (*(s32 *)D_0092F04C) = temp_a1;
    temp_v0_2 = temp_v0 & ~temp_a1;
    (*(s32 *)D_0092F050) = temp_v0_2;
    if (temp_v0_2 != 0) {
        (*(u8 *)D_0092F040) &= 0xFE;
    }
    return 1;
}
