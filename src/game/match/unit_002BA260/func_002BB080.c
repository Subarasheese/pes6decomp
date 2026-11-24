/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_cue_script.h"
#include "pes6/match_camera_playback.h"
extern u16 func_00BBCB00(void);
extern void func_00BBCB50(u16 frames);
s32 func_002BB080(void) {
    func_00BBCB50((u16)((f32)func_00BBCB00() + (f32)D_00591BE4[0] * D_005E2FA4[0]));
    D_005E3178[0] = D_005E2FA8[0];
    D_005E2FA0.flags |= 8;
    func_002BB910();
    D_005E2F7C[D_005E2F78[0]] = 0;
    return 1;
}
