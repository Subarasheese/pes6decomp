/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x8];
    s32 handle;
} LobbyPage;
extern void func_00214290(s32 handle);
extern void func_0099C7C0(void *page);
extern LobbyPage *D_00A7E238;
void func_009F3100(void) {
    if (D_00A7E238 != 0) {
        func_00214290(D_00A7E238->handle);
        func_0099C7C0(D_00A7E238);
        D_00A7E238 = 0;
    }
}
