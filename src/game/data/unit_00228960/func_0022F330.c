/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_003D81D0[][2];
extern u8 D_003D8248[];

s32 func_0022F330(u8 id, u8 kind) {
    u8 group = 0;
    if ((u32)id >= 59)
        id = 0;
    if (id == D_003D81D0[id][0]) {
        group = D_003D81D0[id][1];
        switch (group) {
        case 0x80:
            if (kind >= 4)
                kind = 0;
            group = D_003D8248[kind];
            break;
        default:
            break;
        }
    }
    return group;
}
