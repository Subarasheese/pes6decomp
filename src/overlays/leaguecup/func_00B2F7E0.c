/* compiler: mwcc-3.0.1b198 */
#include "pes6/cup_navigation.h"

typedef struct {
    u8 reserved00[0x2b0c];
    CupNavigation navigation;
} CupPage;

extern CupPage *func_00B30600(void);
extern s32 func_00B2F840(s32, s32);

s32 func_00B2F7E0(void) {
    CupPage *page = func_00B30600();
    if (!page)
        return 0;
    if (page->navigation.phase)
        return 0;
    if (page->navigation.busy)
        return 0;
    func_00B2F840(0, -1);
    return 0;
}
