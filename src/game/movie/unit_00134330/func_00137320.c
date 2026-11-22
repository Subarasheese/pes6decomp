/* compiler: mwcc-3.0.1b151 */
/* dreamingmoths/memory-of-alessa, silent-hill-3/src/movie/pss_vibuf.c (viBufPutTs). See
 * THIRD_PARTY.md. */
#include "pes6/movie_input_buffer.h"
extern s32 WaitSema(s32 semaphore);
extern s32 func_00105380(s32 semaphore);
extern s32 func_00137450(ViBuf *buffer, TimeStamp *timestamp);

int func_00137320(ViBuf *f, TimeStamp *ts) {
    int ret;
    ret = 0;
    WaitSema(f->sema);
    if (f->count_ts < f->n_ts) {
        func_00137450(f, ts);
        if ((ts->pts >= 0) || (ts->dts >= 0)) {
            f->ts[f->wt_ts].pts = ts->pts;
            f->ts[f->wt_ts].dts = ts->dts;
            f->ts[f->wt_ts].pos = ts->pos;
            f->ts[f->wt_ts].len = ts->len;
            f->count_ts++;
            f->wt_ts = (f->wt_ts + 1) % f->n_ts;
        }
        ret = 1;
    }
    func_00105380(f->sema);
    return ret;
}
