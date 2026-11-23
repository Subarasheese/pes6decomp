/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0xe5];
    s8 selection;
} TrainingSession;
extern void func_0026B580(void *, s32, s32);
extern void SD_call(u32);
extern TrainingSession *D_003AE9D0;
s32 func_008F6B90(s32 arg0, s32 arg1, s32 arg2, s32 event) {
    func_0026B580(D_003AE9D0, 7, event);
    D_003AE9D0->selection = -1;
    SD_call(0x84028400);
    return 2;
}
