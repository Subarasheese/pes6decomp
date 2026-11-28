/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[4];
    s32 phase;
} MasterLeaguePage;
extern u32 func_00B36410(void);
extern s32 SD_call(s32 sound);
s32 func_00B36300(void) {
    MasterLeaguePage *page = (MasterLeaguePage *)func_00B36410();
    if (!page)
        return 1;
    switch (page->phase) {
    case 2:
        SD_call(0x84028400);
        break;
    default:
        return 0;
    }
    return 1;
}
