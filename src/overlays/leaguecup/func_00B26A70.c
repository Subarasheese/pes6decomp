/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0xd99];
    u8 phase;
    u8 busy;
} CupPage;
extern CupPage *func_00B279D0(void);
extern s32 func_00B26C30(s32, s32);
s32 func_00B26A70(void) {
    CupPage *page = func_00B279D0();
    if (!page)
        return 0;
    if (page->phase)
        return 0;
    if (page->busy)
        return 0;
    if (func_00B26C30(1, 0) != -1)
        page->phase = 3;
    else
        page->phase = 0;
    return 0;
}
