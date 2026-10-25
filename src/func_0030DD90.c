/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x10];
    u8 kind;
    u8 pad11[0x22F];
} Rec240;

extern Rec240 D_0058E5B0[];

s32 func_0030DD90(u8 *out, s32 index) {
    if ((u8)index != 0xFF) {
        index = (u8)index % 23;
    } else {
        index = 1;
    }
    *out = D_0058E5B0[index].kind;
    return 1;
}
