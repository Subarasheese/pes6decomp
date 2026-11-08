/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0xFE];
    u16 xFE;
    u8 pad100;
    u8 x101;
} SG;

u16 func_009B30B0(s32, u16);
extern u8 D_005922D6[];

s32 func_0099E300(SG *arg0, s32 arg1) {
    u8 v;

    v = arg0->x101;
    if ((v != 0) && ((v & 0xFF) >= D_005922D6[0]) && (func_009B30B0(arg1, arg0->xFE) < 0x20)) {
        D_005922D6[0] = arg0->x101;
        return 1;
    }
    return 0;
}
