/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00264790(u8 *o, u8 v) {
    u8 i;
    o[o[0x14]] = v;
    for (i = o[0x14] + 1; i < 10; i++) {
        o[i] = 0;
    }
}
