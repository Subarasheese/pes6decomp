/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad00[0x168];
    s32 index;
} TrainingSituation;
extern s32 func_002631D0(void);
extern TrainingSituation *func_00CF93F0(void);
extern const s32 D_00813DB0[];

s32 func_00804FF0(void) {
    if (func_002631D0() != 5)
        return 0;
    return D_00813DB0[func_00CF93F0()->index];
}
