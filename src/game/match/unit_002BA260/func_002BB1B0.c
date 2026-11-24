/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
#include "pes6/match_camera_playback.h"
s32 func_002BB1B0(void) {
    D_005E3178[0] = D_005E2FA8[0];
    func_00BBBD40(D_005E30E1[0], D_005E2FA4[0]);
    D_005E2FA0.flags |= 8;
    ++D_005E317C[0];
    func_002BB910();
    D_005E2F7C[D_005E2F78[0]] = 0;
    return 1;
}
