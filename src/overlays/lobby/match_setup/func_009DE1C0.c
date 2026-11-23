/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s32 handle;
    u8 reserved04[0x204];
    u8 active;
} LobbyPage;
extern void func_00214290(s32 handle);
extern s32 func_00835C40(void);
extern void func_0099C7C0(void *page);
extern s32 func_009DEB20(void);
extern s32 func_008178F0(s32);
extern LobbyPage *D_00A7DEC8;
void func_009DE1C0(void) {
    if (D_00A7DEC8 != 0) {
        if (D_00A7DEC8->active != 0) {
            D_00A7DEC8->active = 0U;
            func_00835C40();
            func_008178F0(1);
        }
        if (D_00A7DEC8 != 0) {
            func_00214290(D_00A7DEC8->handle);
            func_009DEB20();
            func_0099C7C0(D_00A7DEC8);
            D_00A7DEC8 = 0;
        }
    }
}
