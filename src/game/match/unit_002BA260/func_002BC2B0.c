/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
extern void func_002BC540(void), func_00BBCC30(void);
extern f32 D_005E3170[], D_005E3174[];
extern u32 D_005E3178[], D_005E317C[];
void func_002BC2B0(void) {
    s32 i;
    D_005E2F70.program = 0;
    D_005E2F70.dirty = 0;
    for (i = 0; i < 4; ++i) {
        D_005E2F70.history[i].frame = 0;
        D_005E2F70.history[i].parameter = 0.0f;
        D_005E2F70.history[i].distance = -1.0f;
        D_005E2F70.history[i].actor = -1;
        D_005E2F70.history[i].selection = 0;
    }
    D_005E2F70.duration = 10.0f;
    D_005E2F70.elapsed = 0.0f;
    D_005E2F70.excluded = 0;
    D_005E2F70.defaultDuration = 10.0f;
    D_005E2F70.seen = 0;
    D_005E2F70.previous[0] = 0xff;
    D_005E2F70.previous[1] = 0xff;
    D_005E2F70.previous[2] = 0xff;
    D_005E2F70.previous[3] = 0xff;
    D_005E2F70.mode = 2;
    D_005E2F70.defaultFlags = 0;
    D_005E2F70.limit[1] = 29;
    D_005E2F70.limit[0] = 29;
    D_005E2F70.option[0] = 0;
    D_005E2F70.option[2] = 0;
    D_005E2F70.option[1] = 0;
    D_005E2F70.option[3] = 0;
    for (i = 0; i < 29; ++i) {
        D_005E2F70.weights[i] = 0;
        D_005E2F70.order[i] = i;
        D_005E2F70.alternateWeights[i] = 0;
        D_005E2F70.alternateOrder[i] = i;
    }
    D_005E2F70.threshold = 50;
    D_005E2F70.interval = 10;
    func_002BC540();
    D_005E3170[0] = 0.0f;
    D_005E3174[0] = 0.0f;
    D_005E3178[0] = 0;
    D_005E317C[0] = 0;
    func_00BBCC30();
}
