/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x20];
    s32 selection;
    u8 reserved24[0x4];
    s32 count;
} TrainingCursor;
extern s32 SD_call(s32);
extern s32 func_00901FA0(void);
extern TrainingCursor *D_003AE9D0;
s32 func_00901A70(void) {
    s32 count = D_003AE9D0->count;
    D_003AE9D0->selection = ((D_003AE9D0->selection - 1) + count) % count;
    func_00901FA0();
    SD_call(0x8400F802);
    return 0;
}
