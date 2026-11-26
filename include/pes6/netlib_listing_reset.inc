/* The two listing protocols reset different sets of fields. */
#include "pes6/netlib_listing_reply.h"

s32 NETLIB_LISTING_HANDLER(NetlibPacket *packet, NetlibListing *list, s32 *result) {
    s32 i;
    if (!packet || !list || !result)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != NETLIB_LISTING_TAG)
        return NETLIB_UNEXPECTED_TAG;
    list->count = 0;
    for (i = 0; i < 20; i++) {
        NetlibListingRow *row = &list->rows[i];
        row->id = 0;
        func_001C48E8(row->name, 0, sizeof(row->name));
        row->value04 = 0;
        row->value08 = 0;
        row->field4D = 0;
        row->field58 = 0;
        row->field4E = 0;
        func_001C48E8(row->text50, 0, sizeof(row->text50));
        row->field5A = 0;
#if NETLIB_LISTING_CLEAR_5B
        row->field5B = 0;
#endif
    }
    func_00874470(packet);
    func_00873FD0(packet, result);
    func_00874460(packet);
    return 0;
}

#undef NETLIB_LISTING_HANDLER
#undef NETLIB_LISTING_TAG
#undef NETLIB_LISTING_CLEAR_5B
