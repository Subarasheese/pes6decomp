/* compiler: mwcc-3.0.1b210-sdata4 */
#include "pes6/challenge_markers.h"
typedef s32 (*SetupMarkers)(void *, u8 *);
extern s32 func_0081B8A0(void *, u8 *);
extern s32 func_0081B890(void *, u8 *);
extern s32 func_0081B880(void *, u8 *);
extern s32 func_0081B870(void *, u8 *);
extern s32 func_0081B860(void *, u8 *);
void func_0081BBD0(TrainingSprites *sprites, u8 *markers, u8 exercise) {
    allocateMarkerSprites(sprites, markers);
    {
        SetupMarkers setup[] = {func_0081B8A0, func_0081B890, func_0081B880, func_0081B870,
                                func_0081B860};
        setup[exercise](sprites, markers);
    }
}
