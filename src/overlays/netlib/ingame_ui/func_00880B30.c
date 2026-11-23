/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern s32 func_008809D0(void), func_008809E0(void);
extern void Pes6Process_Start(s32);
extern s32 Pes6Process_Create(s32, s32 (*)(void), s32 (*)(void), s32, s32, const char *);
extern char D_0088A750[];
extern s32 D_008B2448[];
extern u8 D_008B2450[], D_008B2458[];
void func_00880B30(void) {
    if (!D_008B2448[0]) {
        s32 handle = Pes6Process_Create(0, func_008809E0, func_008809D0, 0, 0, D_0088A750);
        D_008B2448[0] = handle;
        Pes6Process_Start(handle);
    }
    D_008B2450[0] = 0;
    D_008B2458[0] = 0;
}
