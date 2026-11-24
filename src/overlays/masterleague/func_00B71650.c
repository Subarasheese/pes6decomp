/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x10], action, reserved11[9], groupCount, page;
} FixtureSelector;
extern FixtureSelector *func_00B71C80(void);
void func_00B71650(s32 direction) {
    FixtureSelector *page = func_00B71C80();
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
    page->action = 4;
}
