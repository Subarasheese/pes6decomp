/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/netlib_socket.h"

extern s32 D_003EA368;
extern s32 D_003EA364;
extern s32 func_002DCA60(const char *name);
extern s32 func_002DDC50(const char *name);
extern s32 func_002DE6E0(s32 domain, s32 type, s32 protocol);
extern s32 func_002DDDD0(s32 descriptor, s32 option, s32 *value);
extern u16 func_002DCE70(u16 port);
extern void *func_001C48E8(void *dest, s32 value, u32 count);

s32 func_008663A0(const char *name, s32 port, NetlibSocketChannel *channel, s32 timeout) {
    s32 address;
    if (!name || !channel || port < 0 || timeout < 0) {
        D_003EA368 = 0;
        D_003EA364 = 0;
        return -24;
    }
    switch (D_003EA368) {
    case 0: {
        D_003EA368 = 1;
        break;
    }
    case 1: {
        address = func_002DCA60(name);
        if (address == -1) {
            address = func_002DDC50(name);
            if (address == -1) {
                D_003EA368 = 0;
                D_003EA364 = 0;
                return -25;
            }
            if (address == 0) {
                D_003EA368 = 3;
                return -64;
            }
        }
        {
            s32 enabled, result;
            channel->descriptor = func_002DE6E0(0, 0, 0);
            if (channel->descriptor == -1) {
                D_003EA368 = 0;
                D_003EA364 = 0;
                return -30;
            }
            enabled = 1;
            func_002DDDD0(channel->descriptor, 1, &enabled);
            func_001C48E8(&channel->peer, 0, sizeof(channel->peer));
            channel->peer.family = 0;
            channel->peer.port = func_002DCE70((u16)port);
            channel->peer.address = address;
            result = func_0085F470(channel);
            D_003EA364 = 0;
            if (result == 0) {
                D_003EA368 = 0;
                D_003EA364 = 0;
                return 0;
            }
            D_003EA368 = 2;
            return -102;
        }
    }
    case 2: {
        if (func_0085F470(channel) == 0) {
            D_003EA368 = 0;
            D_003EA364 = 0;
            return 0;
        }
        if (D_003EA364 >= timeout * 60) {
            func_0085F3D0(channel, 1);
            D_003EA368 = 0;
            D_003EA364 = 0;
            return -35;
        }
        D_003EA364++;
        break;
    }
    case 3: {
        address = func_002DDC50(name);
        if (address == -1) {
            D_003EA368 = 0;
            D_003EA364 = 0;
            return -25;
        }
        if (address == 0) {
            D_003EA368 = 3;
            return -64;
        }
        {
            s32 enabled, result;
            channel->descriptor = func_002DE6E0(0, 0, 0);
            if (channel->descriptor == -1) {
                D_003EA368 = 0;
                D_003EA364 = 0;
                return -30;
            }
            enabled = 1;
            func_002DDDD0(channel->descriptor, 1, &enabled);
            func_001C48E8(&channel->peer, 0, sizeof(channel->peer));
            channel->peer.family = 0;
            channel->peer.port = func_002DCE70((u16)port);
            channel->peer.address = address;
            result = func_0085F470(channel);
            D_003EA364 = 0;
            if (result == 0) {
                D_003EA368 = 0;
                D_003EA364 = 0;
                return 0;
            }
            D_003EA368 = 2;
            return -102;
        }
    }
    default:
        break;
    }
    return -64;
}
