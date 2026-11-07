/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
void *func_00841AE0();
s8 func_00841B80(void) {
    s8 v;
    void *p = func_00841AE0();
    if (p == NULL) return 4;
    v = M2C_FIELD(p, s8 *, 0x80);
    switch (v) {
    case 0: case 1: case 2: case 3:
        return v;
    }
    return 4;
}
