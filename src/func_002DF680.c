/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_002E19B0(void *, s32);

void func_002DF680(u8 *obj, s32 value) {
    s32 i;
    u8 *part;

    if (obj == NULL) {
        return;
    }
    for (i = 0, part = obj; i < 2; i++) {
        func_002E19B0(part + 0x28, value);
        part += 0x24;
    }
}
