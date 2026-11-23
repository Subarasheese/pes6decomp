/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x4];
    s32 handle;
} TrainingSelection;
extern void *Pes6Heap_Alloc(s32, s32);
extern s32 func_001BC300(void);
extern s32 SD_call(s32);
typedef s32 (*MenuAction)(s32, s32, s32);
extern s32 func_00C9A270(u32, MenuAction, MenuAction, MenuAction);
extern TrainingSelection *D_003AE9D8;
extern s32 func_008F9780(s32, s32, s32);
extern s32 func_008F9860(s32, s32, s32);
extern s32 func_008F98B0(s32, s32, s32);
s32 func_008F9910(void) {
    func_001BC300();
    D_003AE9D8 = Pes6Heap_Alloc(1, 8);
    SD_call(0x84028400);
    D_003AE9D8->handle = func_00C9A270(0xC003A, &func_008F98B0, &func_008F9860, &func_008F9780);
    return 0;
}
