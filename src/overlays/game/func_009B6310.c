/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_replay.h"

f32 func_009B6310(void) {
    f32 position = D_00CBAA14[0];
    s32 start = D_00CBAA04[0];
    if (D_00CBAA02[0] < start) {
        if (!(D_00CBAA18[0] < (f32)(u32)start)) {
            if (position < (f32)(u32)start)
                position += 300.f;
        } else if (!(position < (f32)(u32)start))
            position -= 300.f;
    }
    return position - D_00CBAA18[0];
}
