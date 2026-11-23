/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x4];
    u8 state;
    u8 reserved05[0xf];
    u8 active;
} LobbyPage;
extern s32 func_008178F0(s32);
extern s32 func_00817C00(void);
extern s32 func_008187D0(void);
extern s32 func_00828D70(void);
extern s32 func_00835C40(void);
extern void func_0099C7C0(void *page);
extern s32 func_009E1FD0(void);
extern LobbyPage *D_00A7DF00;
void func_009E2CF0(void) {
    if (D_00A7DF00 != 0) {
        if (D_00A7DF00->state != 3) {
            func_008187D0();
            func_00817C00();
        }
        if (D_00A7DF00->state == 0) {
            func_00828D70();
        }
        if (D_00A7DF00->active != 0) {
            D_00A7DF00->active = 0U;
            func_00835C40();
            func_008178F0(1);
        }
        func_009E1FD0();
        func_0099C7C0(D_00A7DF00);
        D_00A7DF00 = 0;
    }
}
