/* compiler: mwcc-3.0.1b210 */
#include "types.h"
s32 Pes6Texture_GetClut(s32 arg0) {
    u16 v = *(u16 *)(arg0 + 0x12);
    return v ? arg0 + (v & 0xFFFF) : 0;
}
