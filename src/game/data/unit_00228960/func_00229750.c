/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_0022F190(void);
s32 func_00231240(void);
s32 func_00229600(void);

static inline u8 *get_entry(u8 i) {
    u8 *q = func_0022F190();

    if (func_00231240() == 1) {
        return NULL;
    }
    if (q == NULL) {
        return NULL;
    }
    if (i >= 37) {
        return NULL;
    }
    return q + i * 128 + 0x8A310;
}

u8 *func_00229750(void) {
    u8 i = func_00229600();

    if (func_00231240() == 1) {
        return NULL;
    }
    return get_entry(i);
}
