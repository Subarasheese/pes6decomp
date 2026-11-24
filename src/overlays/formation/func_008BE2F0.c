/* compiler: mwcc-3.0.1b210 */
#include "pes6/formation_plan.h"
typedef struct {
    u8 slot, side, reserved02, disabled, reserved04[2], selection, reserved07[33];
} FormationSlot;
extern FormationSlot D_00592800[8];
extern s8 D_00591DB6[];
extern u8 D_0059295B[], D_0059295C[];
extern s8 D_008B144E[];
extern s32 func_008B9660(void), func_008B4920(void);
u8 func_008BE2F0(u8 side) {
    s32 i;
    u8 first = 0xff;
    s32 active = 0;
    if (func_008B4920()) {
        if (side == (D_008B144E[0] & 1))
            return 0;
        return 0xff;
    }
    if ((s16)func_008B9660() == 4)
        return D_00591DB6[0];
    if ((s16)func_008B9660() == 1) {
        for (i = 0; i < 8; i++) {
            if (D_00591DB6[0] == D_00592800[i].slot && side == D_00592800[i].side) {
                active = 1;
                break;
            }
        }
    }
    if ((!active || D_0059295B[side] == D_00591DB6[0]) && D_0059295B[side] < 8 &&
        D_0059295B[0] != D_0059295C[0])
        return D_0059295B[side];
    for (i = 0; i < 8; i++) {
        if (D_00592800[i].slot < 8 && side == D_00592800[i].side) {
            first = D_00592800[i].slot;
            break;
        }
    }
    if (active == 1)
        first = D_00591DB6[0];
    return first;
}
