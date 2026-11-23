/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 id;
    u8 pad01[0x15];
    u8 role;
    u8 pad17[0xf9];
    u32 distance;
} BallPlayer;
typedef struct {
    u8 pad00[0x84];
    u16 state;
} BallState;
extern BallState *Pes6Ball_Current;
extern u8 D_00591E19[], D_00591E4C[];
s32 func_00A0B0C0(BallPlayer *player) {
    u8 id = player->id;
    if (id == D_00591E4C[0])
        return 1;
    if (id == D_00591E19[0]) {
        switch (Pes6Ball_Current->state) {
        case 5:
        case 0:
            break;
        default:
            goto check_role;
        }
        if (player->distance < 0x100000U)
            return 1;
    }
check_role:
    if (player->role == 1 && player->distance < 0x100000U)
        return 1;
    return 0;
}
