/* compiler: mwcc-3.0.1b151 */
/* kira-502/dotr-decomp, src/movie/readbuf.c (readBufBeginGet). See THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    u8 data[0x50000];
    s32 writeIndex, count, capacity;
} MovieReadBuffer;
s32 func_00134370(MovieReadBuffer *buffer, u8 **out) {
    s32 count, capacity;
    count = buffer->count;
    if (count) {
        capacity = buffer->capacity;
        *out = buffer->data + ((capacity + (buffer->writeIndex - count)) % capacity);
    }
    return buffer->count;
}
