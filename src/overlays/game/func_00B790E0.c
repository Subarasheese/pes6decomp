/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_player.h"
typedef struct {
    u8 reserved00[0x24], state;
    u8 reserved25[0xb0 - 0x25];
    s32 complete;
} ReactionState;
extern u8 D_00591BE4[], D_005927C8[], D_005927B8[];
extern u32 D_00591E14[];
extern u64 func_00B25780(void);
extern s32 func_002DCA30(void);
extern void func_00B257D0(s32);
void func_00B790E0(ReactionState *actor) {
    if (func_00B25780()) {
        s32 ready = 0;
        if (!actor->state) {
            if (actor->complete || D_00591E14[0] > (u32)(3 * D_00591BE4[0] / 2))
                ready = 1;
        } else if (D_00591E14[0] > (u32)(3 * D_00591BE4[0] / 2 - ((u32)D_00591BE4[0] / 2)))
            ready = 1;
        if (ready && !func_002DCA30())
            func_00B257D0(0);
    } else {
        if (D_005927C8[0] || D_005927B8[0]) {
            D_005927C8[0] = 0;
            D_005927B8[0] = 0;
        }
    }
}
