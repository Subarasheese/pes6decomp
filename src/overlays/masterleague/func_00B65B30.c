/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct {
    u8 reserved00[0x69c];
    u8 phase;
} CupPage;
extern CupPage *func_00B64F60(void);
s32 func_00B65B30(void) {
    CupPage *page = func_00B64F60();
    if (!page)
        return 0;
    if (page->phase)
        return 0;
    page->phase = 4;
    return 0;
}
