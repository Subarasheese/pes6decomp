/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0xc];
    s32 firstHandle;
    s32 secondHandle;
} LobbyPage;
extern void func_00214290(s32 handle);
extern void func_0099C7C0(void *page);
extern LobbyPage *D_00A7DD60;
void func_009C63F0(void) {
    if (D_00A7DD60 != 0) {
        func_00214290(D_00A7DD60->firstHandle);
        func_00214290(D_00A7DD60->secondHandle);
        func_0099C7C0(D_00A7DD60);
        D_00A7DD60 = 0;
    }
}
