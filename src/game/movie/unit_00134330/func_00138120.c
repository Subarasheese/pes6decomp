/* compiler: mwcc-3.0.1b151 */
/* kira-502/dotr-decomp, src/movie/vibuf.c (viBufCreate). See THIRD_PARTY.md. */
#include "pes6/movie_input_buffer.h"
typedef struct {
    s32 count, max_count, init_count, wait_threads;
    u32 attr, option;
} MovieSemaphore;
extern s32 func_00105360(MovieSemaphore *param);
extern s32 func_00137FA0(ViBuf *buffer);
s32 func_00138120(ViBuf *buffer, MovieQuadword *data, MovieQuadword *tag, s32 sectors,
                  TimeStamp *ts, s32 timestampCount) {
    MovieSemaphore sema;
    buffer->data = data;
    buffer->tag = (MovieQuadword *)(((u32)tag & 0x0fffffff) | 0x20000000);
    buffer->n = sectors;
    buffer->buffSize = sectors << 11;
    buffer->ts = ts;
    buffer->n_ts = timestampCount;
    sema.init_count = 1;
    sema.max_count = 1;
    buffer->sema = func_00105360(&sema);
    func_00137FA0(buffer);
    buffer->totalBytes = 0;
    return 1;
}
