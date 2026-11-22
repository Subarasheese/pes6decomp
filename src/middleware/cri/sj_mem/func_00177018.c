/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware, sjrbf_Create, from crashbashash/DW4_Decomp, src/cri/sjrbf.c. See THIRD_PARTY.md.
 */

typedef struct SfdSjChunk {
    char *data;
    int len;
} SfdSjChunk;
typedef void (*SjErrFunc)(void *obj, int code);
typedef struct SjRbfObj SjRbfObj;
typedef struct SjRbfVtbl {
    void *reserved[3];
    void (*destroy)(SjRbfObj *sj);
    const char *(*getUuid)(SjRbfObj *sj);
    void (*reset)(SjRbfObj *sj);
    void (*getChunk)(SjRbfObj *sj, int line, int nbyte, SfdSjChunk *ck);
    void (*ungetChunk)(SjRbfObj *sj, int line, SfdSjChunk *ck);
    void (*putChunk)(SjRbfObj *sj, int line, SfdSjChunk *ck);
    int (*getNumData)(SjRbfObj *sj, int line);
    int (*isGetChunk)(SjRbfObj *sj, int line, int nbyte, int *rbyte);
    void (*entryErrFunc)(SjRbfObj *sj, SjErrFunc func, void *obj);
} SjRbfVtbl;
struct SjRbfObj {
    const SjRbfVtbl *vtbl;
    int used;
    const char *uuid;
    int ndata;
    int nfree;
    int wpos;
    int rpos;
    char *buf;
    int bsize;
    int xsize;
    int flowcnt[2][2];
    SjErrFunc err;
    void *errobj;
};
extern SjRbfVtbl D_00391448;
extern SjRbfObj D_00391480[256];
extern const char D_003CC2A0[16];
extern void D_00176E58(void *obj, int code);
extern void SJRBF_Destroy(SjRbfObj *sj);
extern const char *SJRBF_GetUuid(SjRbfObj *sj);
extern void SJRBF_EntryErrFunc(SjRbfObj *sj, SjErrFunc func, void *obj);
extern void SJRBF_Reset(SjRbfObj *sj);
extern void func_001771E8(SjRbfObj *sj);
extern int SJRBF_GetNumData(SjRbfObj *sj, int line);
extern void SJRBF_GetChunk(SjRbfObj *sj, int line, int nbyte, SfdSjChunk *ck);
extern void SJRBF_PutChunk(SjRbfObj *sj, int line, SfdSjChunk *ck);
extern void SJRBF_UngetChunk(SjRbfObj *sj, int line, SfdSjChunk *ck);
extern int SJRBF_IsGetChunk(SjRbfObj *sj, int line, int nbyte, int *rbyte);
SjRbfObj *func_00177018(char *buf, int bsize, int xsize) {
    SjRbfObj *sj;
    int i;
    for (i = 0; i < 256; i++) {
        if (D_00391480[i].used == 0) {
            break;
        }
    }

    sj = 0;
    if (i != 256) {
        sj = &D_00391480[i];
        sj->used = 1;
        sj->vtbl = &D_00391448;
        sj->buf = buf;
        sj->bsize = bsize;
        sj->xsize = xsize;
        sj->uuid = D_003CC2A0;
        sj->err = D_00176E58;
        sj->errobj = sj;
        func_001771E8(sj);
    }
    return sj;
}
