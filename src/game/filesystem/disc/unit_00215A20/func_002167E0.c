/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/memory_card_request.h"
extern s32 func_00116508(s32 port, s32 slot);
static inline s32 card_start_command16(s32 port, s32 slot) {
    D_00538228[0] = 0;
    D_0053822C[0] = port;
    D_00538230[0].value = slot;
    return func_00116508(port, slot);
}
s32 func_002167E0(CardRequest *request) {
    s32 port, slot, status, result;
    port = request->port;
    slot = request->slot;
    status = card_start_command16(port, slot);
    D_00538224[0] = 0;
    result = 0;
    if (status == 0) {
        request->state = 0;
        result = -127;
    }
    return result;
}
