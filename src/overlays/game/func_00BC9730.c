/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/highlight_requests.h"

s32 func_00BC9730(HighlightRequest *request) {
    if (!request || request->state != 1)
        return 0;
    return markedClip(request, request->slot, 6, 1);
}
