/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    s32 state;
    u8 reserved[0x180];
    s32 result;
} LobbyFilePage;
extern LobbyFilePage *D_00A7DC00;
extern void *func_0099C7F0(s32);
extern void func_00976060(void), func_00976040(void), func_00976080(s32), func_0099D030(s32),
    func_009B10A0(s32), func_009B0FD0(s32);
extern u32 func_009761E0(void);
extern s32 Pes6File_AllChannelsIdle(void);
s32 func_009B1750(s32 input) {
    s32 result = 0;
    func_00976060();
    switch (func_009761E0()) {
    case 0: {
        LobbyFilePage *page = func_0099C7F0(sizeof(*page));
        D_00A7DC00 = page;
        page->state = 0;
        func_00976080(1);
        break;
    }
    case 1:
        func_0099D030(1);
        func_00976080(2);
        break;
    case 2:
        func_009B10A0(input);
        break;
    case 3:
        if (Pes6File_AllChannelsIdle())
            func_00976080(4);
        break;
    case 4:
        func_009B0FD0(input); /* fall through */
    case 5:
        result = D_00A7DC00->result;
        break;
    }
    func_00976040();
    return result;
}
