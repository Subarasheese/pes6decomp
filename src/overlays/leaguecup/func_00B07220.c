/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0xce1];
    u8 phase;
    u8 busy;
} CupPage;
extern CupPage *func_00B080B0(void);
extern s32 func_00B073E0(s32, s32);
s32 func_00B07220(void) {
    CupPage *page = func_00B080B0();
    if (!page)
        return 0;
    if (page->phase)
        return 0;
    if (page->busy)
        return 0;
    if (func_00B073E0(1, 0) != -1)
        page->phase = 3;
    else
        page->phase = 0;
    return 0;
}
