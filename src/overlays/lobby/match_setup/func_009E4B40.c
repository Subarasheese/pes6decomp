/* compiler: mwcc-3.0.1b198 */
#pragma inline_depth(16)
#include "pes6/lobby_caption.h"
s32 func_009E4B40(void) {
    LobbyCaptionPage *page = D_00A7DF08[0];
    u8 pageIndex;
    if (!page)
        return 0;
    if (!page->selectionEnabled)
        return 1;
    pageIndex = page->page;
    if (pageIndex == 1)
        return (u8)(13 - pageIndex * 9);
    return 10;
}
