/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x4824];
    s32 *ids;
} Ctx;

extern Ctx *D_003E74CC;

s32 func_00208210(s32 id) {
    s32 *ids = D_003E74CC->ids;
    s32 i;

    for (i = 0; i < 205; i++, ids++) {
        if (id == *ids) {
            return i;
        }
    }
    return 205;
}
