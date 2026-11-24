/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_stream.h"

extern char *strcpy(char *, const char *);

s32 func_00253D80(s32 group, s32 mode, s32 asset, s32 offset, s32 volume, s32 delay,
                  const char *path, s32 direct, s32 source) {
    StreamTicket ticket;
    switch (mode) {
    case 0:
        ticket.buffer = 0;
        ticket.index = -1;
        ticket.slot = 0;
        ticket.hold = 0;
        ticket.group = group;
        ticket.asset = asset;
        if (!*path)
            ticket.path[0] = 0;
        else
            strcpy(ticket.path, path);
        ticket.channel = -1;
        ticket.offset = offset;
        ticket.advance = 1;
        ticket.volume = volume;
        ticket.delay = delay;
        ticket.direct = direct;
        ticket.source = source;
        ticket.length = 0;
        ticket.position = 0;
        ticket.elapsed = 0;
        ticket.wait = 0;
        ticket.startTick = 0;
        ticket.waitTick = 0;
        ticket.elapsedTicks = 0;
        {
            D_00588DB0[group].count++;
            if (D_00588DB0[group].count < D_00588DB0[group].capacity) {
                if (D_00588DB0[group].write >= D_00588DB0[group].capacity)
                    D_00588DB0[group].write = 0;
                D_00588DB0[group].tickets[D_00588DB0[group].write] = ticket;
                D_00588DB0[group].write++;
            } else
                D_00588DB0[group].count--;
        }
        break;
    }
    return 0;
}
