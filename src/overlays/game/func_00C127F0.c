/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_buffer.h"

extern void *func_001C4730(void *dst, const void *src, u32 length);

void func_00C127F0(MatchEvent *event, const u8 *source) {
    u8 *data = &D_00CBFAA0.data[event->stamp];
    func_001C4730(data, source, D_00CBFAA0.eventSize[data[0]]);
    event->kind = data[0];
    event->player = data[1];
}
