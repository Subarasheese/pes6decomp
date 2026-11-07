/* compiler: mwcc-3.0.1b210 */
#include "types.h"
u8 func_002645A0(u8 *object, s32 index) {
    s32 slot = index & 0xFF;
    s32 offset = slot * 10;
    u8 column = object[slot + 20];
    return object[offset + column];
}
