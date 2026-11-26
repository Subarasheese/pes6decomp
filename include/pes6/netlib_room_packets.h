#ifndef PES6_NETLIB_ROOM_PACKETS_H
#define PES6_NETLIB_ROOM_PACKETS_H

#include "pes6/netlib_room.h"

/* The protocol places option 15 between options 11 and 12. */
static inline void netlib_write_room_options(NetlibPacket *packet, const NetlibRoomOptions *options) {
    func_00874420(packet, &options->values[0]);
    func_00874420(packet, &options->values[1]);
    func_00874420(packet, &options->values[2]);
    func_00874420(packet, &options->values[3]);
    func_00874420(packet, &options->values[4]);
    func_00874420(packet, &options->values[5]);
    func_00874420(packet, &options->values[6]);
    func_00874420(packet, &options->values[7]);
    func_00874420(packet, &options->values[8]);
    func_00874420(packet, &options->values[9]);
    func_00874420(packet, &options->values[10]);
    func_00874420(packet, &options->values[11]);
    func_00874420(packet, &options->values[15]);
    func_00874420(packet, &options->values[12]);
    func_00874420(packet, &options->values[13]);
    func_00874420(packet, &options->values[14]);
}

static inline void netlib_read_room_options(NetlibPacket *packet, NetlibRoomOptions *options) {
    func_00874120(packet, &options->values[0]);
    func_00874120(packet, &options->values[1]);
    func_00874120(packet, &options->values[2]);
    func_00874120(packet, &options->values[3]);
    func_00874120(packet, &options->values[4]);
    func_00874120(packet, &options->values[5]);
    func_00874120(packet, &options->values[6]);
    func_00874120(packet, &options->values[7]);
    func_00874120(packet, &options->values[8]);
    func_00874120(packet, &options->values[9]);
    func_00874120(packet, &options->values[10]);
    func_00874120(packet, &options->values[11]);
    func_00874120(packet, &options->values[15]);
    func_00874120(packet, &options->values[12]);
    func_00874120(packet, &options->values[13]);
    func_00874120(packet, &options->values[14]);
}

#endif
