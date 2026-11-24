/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
#include "pes6/match_camera_playback.h"
extern s8 D_005E2FC1[];
s32 func_002BB240(void) {
    u8 started = 1;
    D_005E3178[0] = D_005E2FA8[0];
    if (D_005E2FA0.flags & 4) {
        u32 parameter = D_005E2FC1[0];
        func_00BBBF40(D_005E30E1[0], parameter);
    } else if (D_005E2FA0.flags & 1) {
        u32 parameter = D_005E2FC1[0];
        started = func_00BBBFA0(D_005E30E1[0], parameter);
    } else if (D_005E2FA0.flags & 2) {
        u32 parameter = D_005E2FC1[0];
        func_00BBBEE0(D_005E30E1[0], parameter);
    }
    if (started == 1) {
        D_005E2FA0.flags |= 8;
    }
    ++D_005E317C[0];
    func_002BB910();
    D_005E2F7C[D_005E2F78[0]] = 0;
    return 1;
}
