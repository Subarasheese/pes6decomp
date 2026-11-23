/* compiler: mwcc-3.0.1b198 */
#include "pes6/cup_navigation.h"

typedef struct {
    u8 reserved00[0xc58];
    CupNavigation navigation;
} CupPage;

extern CupPage *func_00B23A40(void);

s32 func_00B22FD0(void) {
    CupPage *page = func_00B23A40();
    if (!page)
        return 0;
    cup_confirm(&page->navigation);
    return 0;
}
