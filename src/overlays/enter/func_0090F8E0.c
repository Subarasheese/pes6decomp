/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_0092DC30[];

s32 func_0090F8E0(s32 angle, s32 scale) {
    return (scale * ((s16 *)D_0092DC30)[(((angle & 0xFFFF) - 0x4000) & 0xFFFF) >> 7]) >> 12;
}
