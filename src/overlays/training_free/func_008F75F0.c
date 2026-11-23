/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x10];
    s32 current;
    s32 previous;
    u8 reserved18[0x39];
    s8 selection;
} TrainingSession;
extern void func_0026B580(void *, s32, s32);
extern void SD_call(u32);
extern TrainingSession *D_003AE9D0;
s32 func_008F75F0(s32 arg0, s32 arg1, s32 arg2, s32 event) {
    SD_call(0x84008401);
    D_003AE9D0->previous = (s32)D_003AE9D0->current;
    func_0026B580(D_003AE9D0, 4, event);
    D_003AE9D0->selection = -1;
    return 2;
}
