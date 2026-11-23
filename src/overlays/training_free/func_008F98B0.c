/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s32 choice;
    s32 handle;
} TrainingSelection;
extern s32 SD_call(s32);
extern s32 func_00C99AD0(s32, s32);
extern TrainingSelection *D_003AE9D8;
s32 func_008F98B0(s32 arg0, s32 arg1, s32 event) {
    SD_call(0x84028400);
    D_003AE9D8->choice = 1;
    func_00C99AD0(D_003AE9D8->handle, event);
    return 2;
}
