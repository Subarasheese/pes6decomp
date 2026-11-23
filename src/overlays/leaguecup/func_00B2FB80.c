/* compiler: mwcc-3.0.1b198 */
#include "pes6/cup_navigation.h"

typedef struct {
    u8 reserved00[0x2b0c];
    CupNavigation navigation;
} CupPage;

extern CupPage *func_00B30600(void);

s32 func_00B2FB80(void) {
    CupPage *page = func_00B30600();
    if (!page)
        return 0;
    cup_confirm(&page->navigation);
    return 0;
}
