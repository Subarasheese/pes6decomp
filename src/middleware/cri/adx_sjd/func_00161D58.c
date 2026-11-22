/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/query_runtime_streams_003FF810.c (func_003FF810). See THIRD_PARTY.md. */
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
typedef struct QueryStream QueryStream;
struct QueryStreamOps {
    void *unknown[6];
    void (*request)(QueryStream *, int, int, struct RuntimeSpan *);
};
struct QueryStream {
    struct QueryStreamOps *ops;
};
extern s32 func_001585B0(void *);
extern int func_00177A18(QueryStream *);
extern int func_00158598(void *);

int func_00161D58(u8 *opaque, int *position, int *available, int *remaining) {
    StreamGroup *context = (StreamGroup *)opaque;
    int i;
    QueryStream *first = context->streams[0];
    QueryStream **streams = context->streams;
    struct RuntimeSpan *span = context->stream_spans;
    int count;
    int maximum;
    for (i = 0; i < func_001585B0(context->engine); i++) {
        QueryStream *stream = streams[i];
        stream->ops->request(stream, 0, 0x4000, &span[i]);
    }

    *position = (context->stream_spans[0].start - func_00177A18(first)) / 2;
    count = context->stream_spans[0].length / 2;
    maximum = context->maximum_available;
    if (count < maximum)
        maximum = count;
    *available = maximum;
    if (context->remaining_limit >= 0)
        *remaining = context->remaining_limit - context->consumed;
    else
        *remaining = 0x1FFFFFFF;
    return func_00158598(context->engine);
}
