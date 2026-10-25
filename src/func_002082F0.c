/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x178C];
    u8 *items[1];
} Game;

extern Game *D_003E74CC;

s32 func_002082F0(s32 index) {
    return D_003E74CC->items[index][1] << 1;
}
