/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved00[0x28];
    u8 phase;
} CupPage;
extern CupPage *func_009B84D0(void);
s32 func_009B88B0(void) {
    CupPage *page = func_009B84D0();
    if (!page)
        return 0;
    if (page->phase)
        return 0;
    page->phase = 2;
    return 0;
}
