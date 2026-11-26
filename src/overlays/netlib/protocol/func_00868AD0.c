/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_directory_page.h"
s32 func_00868AD0(NetlibPacket *packet, NetlibDirectoryPage *list, s32 *result) {
    s32 i;
    if (!packet || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x2002)
        return NETLIB_UNEXPECTED_TAG;
    list->count = 0;
    for (i = 0; i < 200; i++) {
        NetlibDirectoryRow *r = &list->rows[i];
        r->id = 0;
        r->value04 = 0;
        func_001C48E8(r->name, 0, sizeof(r->name));
        func_001C48E8(r->text2C, 0, sizeof(r->text2C));
        r->field2A = 0;
        r->field3C = 0;
        r->field3E = 0;
    }
    func_00874470(packet);
    func_00873FD0(packet, result);
    func_00874460(packet);
    return 0;
}
