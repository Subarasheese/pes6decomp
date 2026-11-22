/* compiler: mwcc-3.0.1b151 */
/* kira-502/dotr-decomp, src/movie/readbuf.c (readBufEndGet). See THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    u8 data[0x50000];
    s32 writeIndex, count, capacity;
} MovieReadBuffer;
s32 func_00134330(MovieReadBuffer *buffer, s32 size) {
    s32 remaining = buffer->count;
    size = size < remaining ? size : remaining;
    buffer->count -= size;
    return size;
}
