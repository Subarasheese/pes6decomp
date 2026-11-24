/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_event_buffer.h"

extern void *func_001C4730(void *dst, const void *src, u32 length);

u8 *func_00C12DF0(u8 *src, u32 size) {
    MatchEventBuffer *buffer = &D_00CBFAA0;
    if (src) {
        func_001C4730(&buffer->used, src, size);
        src += size;
    }
    return src;
}
