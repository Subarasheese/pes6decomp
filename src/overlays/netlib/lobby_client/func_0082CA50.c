/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_request.h"

enum { LOBBY_REQUEST_COUNT = 172 };
extern s32 D_008A4900[LOBBY_REQUEST_COUNT];

s32 func_0082CA50(s32 request, s32 state) {
    if (request < 0 || request >= LOBBY_REQUEST_COUNT)
        return 0;
    D_008A4900[request] = state;
    return 1;
}
