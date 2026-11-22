/* compiler: mwcc-3.0.1b151 */
#include "types.h"

s32 Pes6Player_GetParams(s32);
extern char D_00CE35B0[];

s32 func_00B94C80(s32 arg0) {
    s32 value;
    s32 *entry;
    int value2;
    ;
    value2 = 0x1388;
    if ((arg0 & 0xFFFF) < value2) {
        entry = &(*((s32 *)D_00CE35B0));
        value = (*entry) + 0x7CF0;
        return (value + ((arg0 & 0xFFFF) * 0x7C)) + 0x34;
    }
    return Pes6Player_GetParams(0);
}
