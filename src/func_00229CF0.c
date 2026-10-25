/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_00228A80(void);
s32 func_00231240(void);

static inline u8 *get_b2(void) {
    u8 *q = func_00228A80();

    if (func_00231240() == 1) {
        return NULL;
    }
    if (q == NULL) {
        return NULL;
    }
    return q + 0xA680;
}

void func_00229CF0(s32 v) {
    u8 *p = get_b2();

    if (func_00231240() == 1) {
        return;
    }
    if (p != NULL) {
        *(u8 *)(p + 1) = v;
    }
}
