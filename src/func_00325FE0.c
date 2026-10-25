/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

static inline s32 IsShotKind(s32 kind) {
    if (kind == 11 || kind == 17 || kind == 5) {
        return 1;
    }
    return 0;
}

s32 func_00325FE0(s32 *out, s32 *obj, s32 index) {
    if (IsShotKind(obj[0])) {
        *out = ((s32 *)((u8 *)obj + 0x8DC))[index];
        return 1;
    }
    *out = 4;
    return 0;
}
