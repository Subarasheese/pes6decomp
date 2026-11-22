/* compiler: mwcc-3.0.1b151 */
/* dreamingmoths/memory-of-alessa, silent-hill-3/src/movie/pss_vibuf.c (viBufModifyPts). See
 * THIRD_PARTY.md. */
#include "pes6/movie_input_buffer.h"
static inline s32 IsPtsInRegion(int tgt, int pos, int len, int size) {
    int tgt1 = ((tgt + size) - pos) % size;
    return tgt1 < len;
}

int func_00137450(ViBuf *f, TimeStamp *new_ts) {
    TimeStamp *ts;
    int rd;
    int datasize;
    int loop;
    int tgt;
    int pos;
    int size;
    int len;
    rd = ((f->wt_ts - f->count_ts) + f->n_ts) % f->n_ts;
    datasize = 2048 * f->n;
    loop = 1;
    if (f->count_ts > 0) {
        while (loop) {
            ts = f->ts + rd;
            if ((ts->len == 0) || (new_ts->len == 0)) {
                break;
            }
            if (IsPtsInRegion(ts->pos, new_ts->pos, new_ts->len, datasize)) {
                len = (((new_ts->pos + new_ts->len) - ts->pos) > ts->len)
                          ? (ts->len)
                          : ((new_ts->pos + new_ts->len) - ts->pos);
                ts->pos = (ts->pos + len) % datasize;
                ts->len -= len;
                if (ts->len == 0) {
                    if (ts->pts >= 0) {
                        ts->pts = -1;
                        ts->dts = -1;
                        ts->pos = 0;
                        ts->len = 0;
                    }
                    f->count_ts = ((f->count_ts - 1) < 0) ? (0) : (f->count_ts - 1);
                }
            } else {
                loop = 0;
            }
            rd = (rd + 1) % f->n_ts;
        }
    }
    return 0;
}
