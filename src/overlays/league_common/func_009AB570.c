/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved00[0x5b2];
    u8 phase;
} CupPage;
extern CupPage *func_009AB630(void);
s32 func_009AB570(void) {
    CupPage *page = func_009AB630();
    if (!page)
        return 0;
    if (page->phase)
        return 0;
    page->phase = 5;
    return 0;
}
