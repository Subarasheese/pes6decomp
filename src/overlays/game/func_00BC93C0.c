/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/highlight_requests.h"

s32 func_00BC93C0(HighlightRequest *request) {
    if (!request || request->state != 2)
        return 0;
    return markedClip(request, request->slot, 9, 1);
}
