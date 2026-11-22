/* compiler: ee-gcc-2.96-G0 */
/* Raikaru/Persona4-Decompilation, src/cri/re4/lsc.c (LSC_EntryFileRange). See THIRD_PARTY.md. */

typedef unsigned char Uint8;
typedef signed char Sint8;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef char Char8;
typedef struct SJ_OBJ *SJ;
typedef struct {
    Uint8 *data;
    Sint32 len;
} SJCK;
typedef struct {
    Uint8 data[16];
} SJUUID;
typedef struct {
    void *QueryInterface;
    void *AddRef;
    void *Release;
    void (*Destroy)(SJ sj);
    const SJUUID *(*GetUuid)(SJ sj);
    void (*Reset)(SJ sj);
    void (*GetChunk)(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);
    void (*UngetChunk)(SJ sj, Sint32 id, SJCK *ck);
    void (*PutChunk)(SJ sj, Sint32 id, SJCK *ck);
    Sint32 (*GetNumData)(SJ sj, Sint32 id);
    Sint32 (*IsGetChunk)(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);
    void (*EntryErrFunc)(SJ sj, void (*func)(void *obj, Char8 *msg), void *obj);
} SJ_IF;
struct SJ_OBJ {
    SJ_IF *vtbl;
};
typedef struct ADXSTM_OBJ *ADXSTM;
typedef struct {
    Sint32 id;
    Char8 *fname;
    Sint32 fname_sum;
    void *dir;
    Sint32 ofst;
    Sint32 nsct;
    Sint32 stat;
    Sint32 pos;
} LSC_ENTRY;
typedef struct {
    Sint8 used;
    Sint8 stat;
    Sint8 stm_start;
    Sint8 loop_flag;
    Sint8 pause_flag;
    Uint8 pad5[3];
    SJ sj;
    Sint32 pad0c;
    Sint32 pad10;
    Sint32 min_val;
    Sint32 bufsize;
    Sint32 wr_idx;
    Sint32 rd_idx;
    Sint32 num_stm;
    ADXSTM stm;
    Sint32 cur_nsct;
    Sint32 pad30;
    Sint32 pad34;
    LSC_ENTRY tbl[16];
} LSC_OBJ;
typedef LSC_OBJ *LSC;
extern void LSC_CallErrFunc(Char8 *fmt, ...);
extern Uint32 func_001C80F0(const char *);
extern char D_003CAEB8[], D_003CAEE8[];
Sint32 func_00172060(LSC lsc, Char8 *fname, void *dir, Sint32 ofst, Sint32 nsct) {
    LSC_ENTRY *ent;
    Sint32 id;
    Sint32 pos;
    Uint32 len;
    Sint32 i;
    if (lsc == 0) {
        LSC_CallErrFunc(D_003CAEB8);
        return -1;
    }
    if (lsc->num_stm >= 16) {
        return -1;
    }
    if (fname == 0) {
        LSC_CallErrFunc(D_003CAEE8, fname);
        return -1;
    }
    ent = &lsc->tbl[lsc->wr_idx];
    ent->fname = fname;
    pos = (lsc->wr_idx + 15) % 16;
    id = (lsc->tbl[pos].id == 0x7FFFFFFF) ? (0) : (lsc->tbl[pos].id + 1);
    ent->id = id;
    len = func_001C80F0(fname);
    ent->fname_sum = 0;
    for (i = 0; i < len; i++) {
        ent->fname_sum += (Uint8)fname[i];
    }

    ent->ofst = ofst;
    ent->nsct = nsct;
    ent->pos = 0;
    ent->stat = 0;
    ent->dir = dir;
    lsc->num_stm++;
    lsc->wr_idx = (lsc->wr_idx + 1) % 16;
    if (lsc->stat == 1) {
        lsc->stat = 2;
    }
    return id;
}
