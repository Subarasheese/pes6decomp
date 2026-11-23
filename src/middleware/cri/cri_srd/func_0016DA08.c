/* compiler: ee-gcc-2.96-G0 */
/* DTR_ExecHndl adapted from LucasPicoli/god-hand-decomp, src/cod/0033fdc0.c. See THIRD_PARTY.md.
 */
#include "pes6/cri_stream_joint.h"
typedef struct SjObj SjObj;
typedef struct SjIf {
    void *obj;
    void (*addRef)(SjObj *sj);
    void (*release)(SjObj *sj);
    void (*destroy)(SjObj *sj);
    void *(*getUuid)(SjObj *sj);
    void (*reset)(SjObj *sj);
    void (*getChunk)(SjObj *sj, int id, int len, SjChunk *ck);
    void (*ungetChunk)(SjObj *sj, int id, SjChunk *ck);
    void (*putChunk)(SjObj *sj, int id, SjChunk *ck);
    int (*getNumData)(SjObj *sj, int id);
} SjIf;
struct SjObj {
    SjIf *vt;
};
extern char D_003CA320[];
extern char D_003CA340[];
extern char D_003CA368[];
extern char D_003CA398[];
extern char D_003CA3C0[];
typedef struct {
    signed char f0;
    signed char active;
    signed char busy;
    char pad3;
    SjObj *src;
    SjObj *dst;
    SjChunk sourceTransfer;
    SjChunk destTransfer;
    int dma[5];
    char pad30[8];
    int unit;
    int total;
} SjDmaXfer;
extern void func_001610B0(const char *fmt, ...);
extern void SJ_SplitChunk(SjChunk *in, int length, SjChunk *out, SjChunk *rest);
extern void SyncDCache(void *start, void *end);
extern int sceSifSetDma(int *dma, int ch);
void func_0016DA08(SjDmaXfer *transfer) {
    SjChunk sourceChunk;
    SjChunk sourceRemainder;
    SjChunk destChunk;
    SjChunk destRemainder;
    int length;
    if (transfer->active != 1)
        return;
    if (transfer->busy == 1) {
        transfer->src->vt->putChunk(transfer->src, 0, &transfer->sourceTransfer);
        transfer->sourceTransfer.data = 0;
        transfer->sourceTransfer.len = 0;
        transfer->dst->vt->putChunk(transfer->dst, 1, &transfer->destTransfer);
        transfer->destTransfer.data = 0;
        transfer->destTransfer.len = 0;
        transfer->total += transfer->sourceTransfer.len;
        transfer->busy = 0;
        if (transfer->sourceTransfer.len != 0) {
            func_001610B0(D_003CA320);
            for (;;)
                ;
        }
    }
    if (transfer->busy != 0)
        return;
    transfer->src->vt->getChunk(transfer->src, 1, 0x7FFFFFFF, &sourceChunk);
    transfer->dst->vt->getChunk(transfer->dst, 0, 0x7FFFFFFF, &destChunk);
    length = destChunk.len;
    if (sourceChunk.len < length)
        length = sourceChunk.len;
    length = (length / transfer->unit) * transfer->unit;
    SJ_SplitChunk(&sourceChunk, length, &sourceChunk, &sourceRemainder);
    transfer->src->vt->ungetChunk(transfer->src, 1, &sourceRemainder);
    SJ_SplitChunk(&destChunk, length, &destChunk, &destRemainder);
    transfer->dst->vt->ungetChunk(transfer->dst, 0, &destRemainder);
    if (length <= 0)
        return;
    if (sourceChunk.len & 0x3F) {
        func_001610B0(D_003CA340);
        func_001610B0(D_003CA368, sourceChunk.data, destChunk.data, sourceChunk.len);
        for (;;)
            ;
    }
    if (((int)sourceChunk.data) & 0x3F) {
        func_001610B0(D_003CA398);
        func_001610B0(D_003CA368, sourceChunk.data, destChunk.data, sourceChunk.len);
        for (;;)
            ;
    }
    if (((int)destChunk.data) & 0x3F) {
        func_001610B0(D_003CA3C0);
        func_001610B0(D_003CA368, sourceChunk.data, destChunk.data, sourceChunk.len);
        for (;;)
            ;
    }
    SyncDCache(sourceChunk.data, (sourceChunk.data + sourceChunk.len) - 1);
    transfer->dma[0] = ((int)sourceChunk.data) & 0x0FFFFFFF;
    transfer->dma[1] = (int)destChunk.data;
    transfer->dma[2] = sourceChunk.len;
    transfer->dma[3] = 0;
    transfer->dma[4] = sceSifSetDma(transfer->dma, 1);
    if (transfer->dma[4] == 0) {
        transfer->src->vt->ungetChunk(transfer->src, 1, &sourceChunk);
        transfer->dst->vt->ungetChunk(transfer->dst, 0, &destChunk);
        return;
    }
    transfer->sourceTransfer = sourceChunk;
    transfer->destTransfer = destChunk;
    transfer->busy = 1;
}
