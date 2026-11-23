/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved00[0x772];
    u8 phase;
} CupPage;
extern CupPage *func_009A8D80(void);
s32 func_009B3050(void) {
    CupPage *page = func_009A8D80();
    if (!page)
        return 0;
    if (page->phase)
        return 0;
    page->phase = 6;
    return 0;
}
