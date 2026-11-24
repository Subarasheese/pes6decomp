/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

extern void SD_call(s32 sound);
extern void func_00B12510(u8 group);

s32 func_00B12E50(void) {
    CupFixturePage *page = func_00B14800();
    if (!page)
        return 1;
    switch (page->action) {
    case 1:
        SD_call(0x8400F803);
        func_00B12510(page->page);
        page->action = 0;
        break;
    case 2:
        SD_call(0x84008401);
        return 1;
    default:
        break;
    }
    return 0;
}
