/* compiler: mwcc-3.0.1b198 */
#include "pes6/cup_navigation.h"

typedef struct {
    u8 reserved00[0xd98];
    CupNavigation navigation;
} CupPage;

extern CupPage *func_00B279D0(void);
extern s32 func_00B26C30(s32, s32);

s32 func_00B26B70(void) {
    CupPage *page = func_00B279D0();
    if (!page)
        return 0;
    if (page->navigation.phase)
        return 0;
    if (page->navigation.busy)
        return 0;
    func_00B26C30(0, 1);
    return 0;
}
