/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_001EEDA0(u8 *obj, u8 value) {
    if (obj == NULL) {
        return;
    }
    if (obj[0xA3] == value) {
        return;
    }
    obj[0xA3] = value;
    obj[0xA7] = value;
    obj[0xAB] = value;
    obj[0xAF] = value;
    obj[0x11E] |= 2;
}
