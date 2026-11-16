/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s16 *D_0051FFB8;

void func_001857B0(void) {
    s16 *p = D_0051FFB8;
    if (p != NULL) {
        if (p[3] >= 8) {
            p[3] = 7;
        }
    }
}
