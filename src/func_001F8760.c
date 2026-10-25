/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001F8760(u8 *s) {
    s32 n = 0;
    s32 c;

    for (c = *s; c != 0; c = *s) {
        if (((u8)c & 0xC0) != 0x80) {
            n++;
        }
        s++;
    }
    return n;
}
