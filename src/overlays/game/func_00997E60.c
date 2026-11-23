/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 state;
    u8 reserved01[15];
    u8 id;
    u8 reserved11[23];
} Slot;
extern Slot D_00592800[8];
s32 func_00997E60(const u8 *id) {
    s32 i = 0;
    Slot *slot = D_00592800;
    do {
        if (*id == slot->id && slot->state < 8)
            return 1;
        ++slot;
        ++i;
    } while (i < 8);
    return 0;
}
