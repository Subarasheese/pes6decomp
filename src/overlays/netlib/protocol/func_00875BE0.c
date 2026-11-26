/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_listing_reply.h"
s32 func_00875BE0(NetlibPacket *packet, NetlibListing *list) {
    s32 i;
    if (!packet || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x9102)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = list->count; i < 20; i++) {
        NetlibListingRow *row;
        if (func_00873EB0(packet) == -1)
            break;
        row = &list->rows[i];
        func_00873F60(packet, &row->id);
        func_001C48E8(row->name, 0, sizeof(row->name));
        func_00873EE0(packet, row->name, sizeof(row->name) - 1);
        func_00873F60(packet, &row->value04);
        func_00873F60(packet, &row->value08);
        func_00874120(packet, &row->field4D);
        func_00874090(packet, &row->field58);
        func_00874090(packet, &row->field4E);
        func_001C48E8(row->text50, 0, sizeof(row->text50));
        func_00873EE0(packet, row->text50, sizeof(row->text50) - 1);
        func_00874120(packet, &row->field5A);
        func_00874120(packet, &row->field5B);
        func_00874120(packet, &row->field5C);
        func_00874120(packet, &row->field56);
    }
    func_00874460(packet);
    list->count = i;
    return 0;
}
