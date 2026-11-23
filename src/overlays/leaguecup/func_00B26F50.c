/* compiler: mwcc-3.0.1b198 */
#include "pes6/cup_navigation.h"

typedef struct {
    u8 reserved00[0xd98];
    CupNavigation navigation;
} CupPage;

extern CupPage *func_00B279D0(void);

s32 func_00B26F50(void) {
    CupPage *page = func_00B279D0();
    if (!page)
        return 0;
    cup_confirm(&page->navigation);
    return 0;
}
