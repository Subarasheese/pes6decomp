/* compiler: mwcc-3.0.1b151 */
/* kira-502/dotr-decomp, src/movie/vibuf.c (viBufReset). See THIRD_PARTY.md. */
#include "pes6/movie_input_buffer.h"
typedef struct {
    u64 tag, reserved;
} MovieDmaTag;
extern s32 DIntr(void);
extern s32 EIntr(void);
#define MOVIE_D4_QWC (*(volatile u32 *)0x1000B420)
#define MOVIE_D4_MADR (*(volatile u32 *)0x1000B410)
#define MOVIE_D4_TADR (*(volatile u32 *)0x1000B430)
#define MOVIE_D_ENABLEW (*(volatile u32 *)0x1000F590)
#define MOVIE_D_ENABLER (*(volatile u32 *)0x1000F520)
#define MOVIE_D4_CHCR (*(volatile u32 *)0x1000B400)
s32 func_00137FA0(ViBuf *buffer) {

    s32 i;
    buffer->dmaStart = 0;
    buffer->dmaN = 0;
    buffer->readBytes = 0;
    buffer->isActive = 1;
    buffer->count_ts = 0;
    buffer->wt_ts = 0;
    for (i = 0; i < buffer->n_ts; i++) {
        buffer->ts[i].pts = -1;
        buffer->ts[i].dts = -1;
        buffer->ts[i].pos = 0;
        buffer->ts[i].len = 0;
    }

    for (i = 0; i < buffer->n; i++) {
        ((MovieDmaTag *)buffer->tag)[i].tag =
            (((u64)(((u32)buffer->data + (i * 0x800)) & 0x0FFFFFFF)) << 32) | 0x30000080;
    }

    ((MovieDmaTag *)buffer->tag)[i].tag =
        (((u64)(((u32)buffer->tag) & 0x0FFFFFFF)) << 32) | 0x20000000;
    MOVIE_D4_QWC = 0;
    MOVIE_D4_MADR = (u32)buffer->data & 0x0FFFFFFF;
    MOVIE_D4_TADR = ((u32)buffer->tag) & 0x0FFFFFFF;
    DIntr();
    MOVIE_D_ENABLEW = (MOVIE_D_ENABLER) | 0x10000;
    MOVIE_D4_CHCR = 5;
    MOVIE_D_ENABLEW = (MOVIE_D_ENABLER) & 0xFFFEFFFF;
    EIntr();
    return 1;
}
