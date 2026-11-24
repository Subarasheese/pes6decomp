/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 player[2][32];
    u8 extra[64];
} PlayerSlotMap;
extern PlayerSlotMap D_00CCAE40;
u8 func_00C17E10(u8 side, u8 slot) {
    const PlayerSlotMap *map = &D_00CCAE40;
    if ((u8)side >= 2 || (u8)slot >= 32)
        return 0xff;
    return map->player[(u8)side][(u8)slot];
}
