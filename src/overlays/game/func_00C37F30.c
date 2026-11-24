/* compiler: mwcc-3.0.1b151 */
#include "pes6/paired_player_action.h"
extern s32 func_00C375E0(s32 pattern);
extern void func_00C37790(u8 pattern, PairedContext *pair);
extern void func_00C38AC0(f32 point[2], PairedContext *pair);
extern void func_00BD3BE0(PairedContext *pair, s32 mode);
extern const u8 D_00CA7E78[], D_00CA7E08[];
void func_00C37F30(PairedContext *pair) {
    f32 point[2];
    const void *pattern = (const void *)func_00C375E0(pair->control->patternId);
    func_00C37790(pair->control->patternId, pair);
    func_00C38AC0(point, pair);
    if (pattern == D_00CA7E78 || pattern == D_00CA7E08)
        func_00BD3BE0(pair, 2);
    else
        func_00BD3BE0(pair, 1);
    func_00BD3CF0(pair, pair->actor->aimX, pair->actor->aimZ);
    pair->actor->action = 0x24;
}
