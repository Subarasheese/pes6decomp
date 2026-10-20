/* compiler: mwcc-3.0.1b210 */
#include "types.h"
s32 func_00145460(s32 arg0) {
    u16 v = *(u16 *)(arg0 + 0x10);
    return v ? arg0 + (v & 0xFFFF) : 0;
}
