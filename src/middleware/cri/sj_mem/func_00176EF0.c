/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/sjrbf.c (sjrbf_Init). See THIRD_PARTY.md. */

typedef struct SfdSjChunk {
    char *data;
    int len;
} SfdSjChunk;
typedef void (*SjErrFunc)(void *obj, int code);
typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
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
extern int D_00391478;
extern SjRbfObj D_00391480[256];
void func_00176EF0(void) {
    if (D_00391478 == 0) {
        memset(D_00391480, 0, sizeof(D_00391480));
    }
    D_00391478 += 1;
}
