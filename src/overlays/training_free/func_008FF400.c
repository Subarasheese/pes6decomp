/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x18];
    u8 previousOption;
    u8 reserved19[0x7];
    u8 previousMode;
} TrainingMenu;
extern void Pes6Heap_Free(void *);
extern s32 func_0017E150(s32);
extern s32 func_001BC2B0(void);
extern s32 func_002CAFC0(void);
extern s32 Pes6Keyboard_Acquire();
extern s32 func_008FAB70(s32);
extern s32 func_009B4450(u8);
extern s32 func_009B4630(u8);
extern TrainingMenu *D_003AE9D0;
extern s8 D_00591DB4[];
extern s8 D_00591DB5[];
s32 func_008FF400(void) {
    func_0017E150(0);
    func_001BC2B0();
    Pes6Keyboard_Acquire();
    D_00591DB5[0] = 1;
    D_00591DB4[0] = 1;
    func_009B4450(D_003AE9D0->previousMode);
    func_008FAB70(1);
    func_009B4630(D_003AE9D0->previousOption);
    Pes6Heap_Free(D_003AE9D0);
    D_003AE9D0 = 0;
    func_002CAFC0();
    return 1;
}
