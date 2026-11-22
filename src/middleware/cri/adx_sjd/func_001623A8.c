/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/s3.c (func_003FFCF8). See THIRD_PARTY.md. */
#include "types.h"
struct RuntimeSpan {
    s32 start;
    s32 length;
};
typedef struct StreamGroup {
    s8 active;
    s8 lifecycle;
    u8 stream_count;
    s8 mode;
    void *engine;
    void *resource;
    struct QueryStream *streams[2];
    struct RuntimeSpan request_span;
    struct RuntimeSpan stream_spans[2];
    s32 progress_2c;
    s32 progress_30;
    s32 progress_34;
    s32 maximum_available;
    s32 remaining_limit;
    s32 consumed;
    s32 progress_44;
    void (*callback_48)(void *);
    void *callback_argument_4c;
    void (*callback_50)(void *, s32, s32, s32);
    void *callback_argument_54;
    u8 transfer_buffer[0x40];
    s32 result_98;
} StreamGroup;
extern s32 func_00158658(void *);
extern s32 func_00158A58(void *);
extern s32 func_00158A60(void *);

void func_001623A8(StreamGroup *p) {
    void *o = p->engine;
    s32 a = func_00158658(o);
    s32 b = func_00158A58(o);
    s32 c = func_00158A60(o);
    s32 n = a - p->progress_34;
    if (c < n)
        n = c;
    p->progress_2c += n;
    p->progress_30 += b;
    p->progress_34 += n;
}
