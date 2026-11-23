/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern void *Pes6Heap_Alloc(s32, s32);
extern s32 SD_call(s32);
typedef s32 (*MenuAction)(s32, s32, s32);
extern s32 func_00C9A270(u32, MenuAction, MenuAction, MenuAction);
extern s32 *D_003AE9D0;
extern s32 func_008F9530(s32, s32, s32);
extern s32 func_008F9600(s32, s32, s32);
extern s32 func_008F9660(s32, s32, s32);
s32 func_008F96C0(void) {
    D_003AE9D0 = Pes6Heap_Alloc(1, 4);
    SD_call(0x84028400);
    *D_003AE9D0 = func_00C9A270(0x6C001F, &func_008F9660, &func_008F9600, &func_008F9530);
    return 0;
}
