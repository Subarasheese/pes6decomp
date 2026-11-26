/* compiler: mwcc-3.0.1b151-O3 */
#pragma inline_depth(16)
#include "pes6/netlib_directory_page.h"
s32 func_00868990(NetlibPacket *packet, NetlibDirectoryPage *list) {
    s32 i;
    if (!packet || !list)
        return NETLIB_INVALID_ARGUMENT;
    if (packet->tag != 0x2003)
        return NETLIB_UNEXPECTED_TAG;
    func_00874470(packet);
    for (i = list->count; i < 200; i++) {
        NetlibDirectoryRow *row;
        if (func_00873EB0(packet) == -1)
            break;
        row = &list->rows[i];
        func_00873FD0(packet, &row->id);
        func_00873FD0(packet, &row->value04);
        func_001C48E8(row->name, 0, sizeof(row->name));
        func_00873EE0(packet, row->name, sizeof(row->name) - 1);
        func_001C48E8(row->text2C, 0, sizeof(row->text2C));
        func_00873EE0(packet, row->text2C, sizeof(row->text2C) - 1);
        func_00874040(packet, &row->field2A);
        func_00874090(packet, &row->field3C);
        func_00874040(packet, &row->field3E);
    }
    func_00874460(packet);
    list->count = i;
    return 0;
}
