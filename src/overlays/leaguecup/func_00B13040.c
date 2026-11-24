/* compiler: mwcc-3.0.1b210 */
#include "pes6/fixture_display.h"

void func_00B13040(s32 direction) {
    CupFixturePage *page = func_00B14800();
    u8 last;
    if (!page)
        return;
    if (page->groupCount <= 1)
        return;
    last = page->groupCount - 1;
    if (direction < 0) {
        if (page->page > 0)
            page->page += direction;
        else
            page->page = last;
    } else if (direction > 0) {
        if (page->page < last)
            page->page += direction;
        else
            page->page = 0;
    }
    page->action = 1;
}
