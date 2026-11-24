/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
extern s8 D_005E3290[];
extern u8 D_005E32AD[];
extern u32 D_005E3280[], D_005E327C[];
extern s32 func_002ADC20(u8 *, u8, u32, const s8 *, const u8 *, s32);
s32 func_002BAB50(const CueCommand *p) {
    u32 mask = ~(D_005E3280[0] | D_005E327C[0]);
    u8 selector = p->first;
    func_002ADC20(D_005E30E1, selector, mask, D_005E3290, D_005E32AD, 29);
    return 0;
}
