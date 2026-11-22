/* compiler: mwcc-3.0.1b151 */
/* dreamingmoths/memory-of-alessa, silent-hill-3/src/movie/pss_vibuf.c (viBufBeginPut). See
 * THIRD_PARTY.md. */
#include "pes6/movie_input_buffer.h"
extern s32 WaitSema(s32 semaphore);
extern s32 func_00105380(s32 semaphore);

void func_00137EB0(ViBuf *f, u8 **ptr0, int *len0, u8 **ptr1, int *len1) {
    int en;
    int es;
    int fs;
    int fn;
    WaitSema(f->sema);
    fs = (f->dmaStart + f->dmaN) * 2048;
    fn = ((f->n - 2) - f->dmaN) * 2048;
    es = (fs + f->readBytes) % f->buffSize;
    en = fn - f->readBytes;
    if ((f->buffSize - es) >= en) {
        *ptr0 = ((u8 *)f->data) + es;
        *len0 = en;
        *ptr1 = 0;
        *len1 = 0;
    } else {
        *ptr0 = ((u8 *)f->data) + es;
        *len0 = f->buffSize - es;
        *ptr1 = (u8 *)f->data;
        *len1 = en - (f->buffSize - es);
    }
    func_00105380(f->sema);
}
