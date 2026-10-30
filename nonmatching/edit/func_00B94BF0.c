/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F8B60(s32);
extern char D_00CE35B0[];

s32 func_00B94BF0(s32 arg0) {
    return (*(s32 *)D_00CE35B0) + (func_002F8B60(arg0) * 0x220) + 0xBEB90;
}
