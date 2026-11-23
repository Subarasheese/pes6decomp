/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern void SD_call(u32);
extern void func_009130E0(void);
extern void func_009133C0(s32, s32);
extern s32 *D_00923FCC;
s32 func_00913060(void) {
    s32 selection;
    if ((*D_00923FCC) > 0) {
        SD_call(0x8400F802);
        *D_00923FCC -= 1;
        selection = *D_00923FCC;
        func_009133C0(0, selection);
        func_009133C0(1, selection);
        func_009130E0();
    }
    return 0;
}
