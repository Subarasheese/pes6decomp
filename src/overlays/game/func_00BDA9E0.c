/* compiler: mwcc-3.0.1b210 */
#include "pes6/paired_player_action.h"
extern f32 D_00CBCAD8[], D_00CBCADC[];
extern void func_00BD4040(PairedContext *, s32);
extern void func_00BD3BA0(void *, s32, s32);
void func_00BDA9E0(PairedContext *pair) {
    PairedActor *actor = pair->actor;
    actor->aimX = D_00CBCAD8[0];
    pair->actor->aimZ = D_00CBCADC[0];
    {
        u8 mode;
        switch (D_00CBCAD1[0]) {
        case 0x6e:
            mode = 2;
            break;
        default:
            mode = 6;
            break;
        }
        func_00BD4040(pair, mode);
    }
    func_00BD3BA0(pair, 4, 1);
    func_00BD3BA0(pair, 5, 1);
    func_00BD3CF0(pair, pair->actor->aimX, pair->actor->aimZ);
    pair->actor->action = 0xc5;
}
