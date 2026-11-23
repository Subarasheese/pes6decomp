/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern void *func_001E6E10(s32);
extern s32 func_001E9090(s32, s32);
extern s32 func_00209C60(s32, s32);
extern s32 func_00209D20(s32, s32, s32, s32);
extern s32 func_0020A2A0(s32, s32, s32);
extern s32 func_0020A460(s32, s32, s32);
extern s32 D_0065D408[];
s32 func_0063A4A0(s32 target, s32 slot, s32 mode, s32 index) {
    s32 result;
    result = (s32)func_001E6E10(target);
    if (result == 0) {
        func_00209C60(D_0065D408[0], mode);
        func_0020A460(D_0065D408[0], index, slot);
        func_00209C60(D_0065D408[0], mode);
        result = func_001E9090(func_00209D20(D_0065D408[0], index, slot, 0), target);
        func_00209C60(D_0065D408[0], mode);
        func_0020A2A0(D_0065D408[0], index, slot);
    }
    return result;
}
