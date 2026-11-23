/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x137d];
    u8 phase;
    u8 busy;
} CupPage;
extern CupPage *func_00B2BF70(void);
extern s32 func_00B2B1B0(s32, s32);
s32 func_00B2AFF0(void) {
    CupPage *page = func_00B2BF70();
    if (!page)
        return 0;
    if (page->phase)
        return 0;
    if (page->busy)
        return 0;
    if (func_00B2B1B0(1, 0) != -1)
        page->phase = 3;
    else
        page->phase = 0;
    return 0;
}
