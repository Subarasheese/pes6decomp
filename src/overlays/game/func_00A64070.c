/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern u32 func_00A9B980(u8 *player);
extern s32 func_00AA3540(ShotActor *);

s32 func_00A64070(ShotActor *actor) {
    if (func_00AA3540(actor) <= 0x1000000 && (s32)func_00A9B980((u8 *)actor) <= 0x1900000)
        return 1;
    switch (actor->player.role) {
    case 0x28:
    case 0x25:
    case 0xa:
    case 0x41:
        return 1;
    }
    switch (actor->shot.previousRole) {
    case 0x28:
    case 0x25:
    case 0xa:
    case 0x41:
        return 1;
    }
    return 0;
}
