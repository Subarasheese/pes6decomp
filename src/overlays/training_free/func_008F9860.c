/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s32 choice;
    s32 handle;
} TrainingSelection;
extern s32 func_00C99A40(void);
extern s32 func_00C99AD0(s32, s32);
extern TrainingSelection *D_003AE9D8;
s32 func_008F9860(s32 arg0, s32 arg1, s32 event) {
    func_00C99A40();
    D_003AE9D8->choice = 0;
    func_00C99AD0(D_003AE9D8->handle, event);
    return 2;
}
