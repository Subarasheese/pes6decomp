/* compiler: mwcc-3.0.1b151 */

#include "pes6/tactical_player.h"

extern u16 func_009B3070(u16 first, u16 second);
extern s32 func_0098F750(TacticalActor *);
extern u8 D_00CB5372[];

u8 func_00964DA0(TacticalActor *actor, u16 direction) {
    if (func_0098F750(actor)) {
        if (D_00CB5372[actor->player.side])
            return 0;
        return (func_009B3070(actor->player.angle, direction) > 0x4800);
    } else
        return 0;
}
