/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E77AC;
s32 func_00231240(void);

static inline u8 *get_block(void) {
    if (func_00231240() == 1) {
        return NULL;
    }
    if (D_003E77AC != NULL) {
        return D_003E77AC + 0x4770;
    }
    return NULL;
}

u8 func_002280B0(void) {
    u8 *p = get_block();

    if (func_00231240() == 1) {
        return 0;
    }
    if (p == NULL) {
        return 0;
    }
    return p[0];
}
