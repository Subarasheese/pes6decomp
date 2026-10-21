/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6Team_GetPlayerId(s32, s32, s32);                         /* extern */

s32 func_00221630(s32 arg0, s32 arg1) {
    return (Pes6Team_GetPlayerId(arg0, arg1, 0) & 0xFFFF) == 0x7FF0;
}
