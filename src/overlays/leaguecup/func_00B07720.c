/* compiler: mwcc-3.0.1b198 */
#include "pes6/cup_navigation.h"

typedef struct {
    u8 reserved00[0xce0];
    CupNavigation navigation;
} CupPage;

extern CupPage *func_00B080B0(void);

s32 func_00B07720(void) {
    CupPage *page = func_00B080B0();
    if (!page)
        return 0;
    cup_confirm(&page->navigation);
    return 0;
}
