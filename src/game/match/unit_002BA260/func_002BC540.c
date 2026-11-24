/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
extern f32 D_005E3274[];
extern u32 D_005E3278[];
extern u8 D_005E328A[], D_005E328B[], D_005E328C[], D_005E328D[], D_005E3304[], D_005E3305[];
extern void func_002ABF10(void *effects), func_002AD120(void *selectionState);
extern void func_002AD0E0(u8 *selectionState, s32 side, u8 limit),
    func_002AD0B0(void *selectionState, u8 option);
void func_002BC540(void) {
    CueRuntime *state = &D_005E2FA0;
    state->flags = D_005E3278[0];
    state->duration = D_005E3274[0];
    state->frame = 0;
    state->zoom = -1.0f;
    state->distance = -1.0f;
    state->selection = D_005E328D[0];
    state->style = -1;
    state->focus = -1;
    state->camera = -1;
    state->threshold = D_005E3304[0];
    state->interval = D_005E3305[0];
    state->parameter = -1.0f;
    state->offset = 0.0f;
    state->angle = -1.0f;
    state->mode = 0;
    state->x = 0.0f;
    state->y = 0.0f;
    state->z = 0.0f;
    func_002ABF10(state->effects);
    state->moveMode = 0;
    state->moveParameter = 0;
    state->moveDuration = 0.0f;
    func_002AD120(state->selectionState);
    func_002AD0E0(state->selectionState, 0, D_005E328A[0]);
    func_002AD0E0(state->selectionState, 1, D_005E328B[0]);
    func_002AD0B0(state->selectionState, D_005E328C[0]);
}
