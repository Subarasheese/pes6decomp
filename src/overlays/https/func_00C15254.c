/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern const u8 D_00C53D71[];
s32 func_00C15254(s32 ch) { return (D_00C53D71[ch] & 1) ? ch + 32 : ch; }
