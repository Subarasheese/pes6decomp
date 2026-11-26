/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_text_message.h"
s32 func_00868770(NetlibPacket *packet, NetlibTextMessages *messages) {
    if (!packet || !messages)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x200a)
        return NETLIB_UNEXPECTED_TAG;
    if (messages->count >= 0 && messages->count < 30) {
        func_00874470(packet);
        netlib_read_text_message(packet, &messages->rows[messages->count]);
        func_00874460(packet);
        messages->count++;
        return 0;
    }
    return 0;
}
