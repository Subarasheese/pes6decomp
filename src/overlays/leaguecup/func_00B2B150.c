/* compiler: mwcc-3.0.1b198 */
#include "pes6/cup_navigation.h"

typedef struct {
    u8 reserved00[0x137c];
    CupNavigation navigation;
} CupPage;

extern CupPage *func_00B2BF70(void);
extern s32 func_00B2B1B0(s32, s32);

s32 func_00B2B150(void) {
    CupPage *page = func_00B2BF70();
    if (!page)
        return 0;
    if (page->navigation.phase)
        return 0;
    if (page->navigation.busy)
        return 0;
    func_00B2B1B0(0, -1);
    return 0;
}
