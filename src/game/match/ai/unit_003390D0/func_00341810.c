/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00341810(void *arg0) {
    u8 t;
    if (arg0 == NULL) return 0;
    t = M2C_FIELD(arg0, u8 *, 5);
    switch (t) {
    case 0xC: case 0xD: case 2: case 3: case 4: case 5:
        return 1;
    }
    return 0;
}
