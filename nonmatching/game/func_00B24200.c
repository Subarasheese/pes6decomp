/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF10[];

s32 func_00B24200(s32 arg0) {
    s32 temp_a2;
    s32 temp_a3;

    temp_a3 = 1 << (arg0 != 0);
    temp_a2 = (*(u8 *)D_00CBBF10) & 3;
    (*(u8 *)D_00CBBF10) = ((*(u8 *)D_00CBBF10) & ~3) | (temp_a2 & (~temp_a3 & 0xFF) & 3);
    return (temp_a2 & temp_a3) != 0;
}
