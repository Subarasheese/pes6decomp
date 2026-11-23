/* compiler: mwcc-3.0.1b210-sdata4 */
#include "pes6/challenge_markers.h"
extern s32 func_0081B8B0(void *, u8 *);
void func_0081BA70(TrainingSprites *sprites, u8 *markers) {
    allocateMarkerSprites(sprites, markers);
    func_0081B8B0(sprites, markers);
}
