/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 mode, active, pad[0x26];
} PlayerStatus;
extern u8 D_00591E4C[];
extern PlayerStatus D_00592803[];
extern u8 D_00592804[];
extern s32 func_00997E10(const u8 *);
s32 func_009D8B80(const u8 *player) {
    u8 index;
    PlayerStatus *status;
    if (*player == D_00591E4C[0])
        return 0;
    index = func_00997E10(player);
    if (index == 0xff)
        return 0;
    status = &D_00592803[index];
    if (status->mode <= 1U)
        return 1;
    return D_00592804[index * 0x28] != 0;
}
