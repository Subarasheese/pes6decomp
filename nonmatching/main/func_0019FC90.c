/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0051FF7C[];

void func_0019FC90(void) {
    s32 *base = *(s32 **)D_0051FF7C;
    s32 i = 0;
    s32 *p = base + 1;
    if (*base > 0) {
        do {
            i += 1;
            *p = *p + (s32)base;
            p += 1;
        } while (i < *base);
    }
}
