/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/lsc.c (lsc_EndStm). See THIRD_PARTY.md. */

typedef struct SfdSj SfdSj;
typedef struct SfdSjChunk {
    char *data;
    int len;
} SfdSjChunk;
typedef struct SfdSjVtbl {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj *sj);
    int (*getUuid)(SfdSj *sj);
    void (*reset)(SfdSj *sj);
    void (*getChunk)(SfdSj *sj, int id, int n, SfdSjChunk *ck);
    void (*ungetChunk)(SfdSj *sj, int id, SfdSjChunk *ck);
    void (*putChunk)(SfdSj *sj, int id, SfdSjChunk *ck);
    int (*getNumData)(SfdSj *sj, int id);
} SfdSjVtbl;
struct SfdSj {
    SfdSjVtbl *vtbl;
};
enum LscStat { LSC_STAT_STOP = 0, LSC_STAT_WAIT = 1, LSC_STAT_EXEC = 2, LSC_STAT_ERROR = 3 };
typedef struct LscStm {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm;
typedef struct LscObj {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj *sj;
    SfdSjChunk ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm stms[16];
} LscObj;
extern int func_00172060(LscObj *lsc, const char *fname, void *dir, int ofst, int nsct);
extern void LSC_CallStatFunc(void);
void func_00172BF0(LscObj *lsc) {
    const char *fname = 0;
    void *dir = 0;
    int ofst = 0;
    int nsct = 0;
    LscStm *stm;
    if (lsc->stm == 0) {
        return;
    }
    if (lsc->loop == 1) {
        stm = &lsc->stms[lsc->rpos];
        fname = stm->fname;
        dir = stm->dir;
        ofst = stm->ofst;
        nsct = stm->nsct;
    }
    lsc->rpos = (lsc->rpos + 1) % 16;
    if ((--lsc->nstm) <= 0) {
        LSC_CallStatFunc();
        lsc->stat = LSC_STAT_WAIT;
    }
    if (lsc->loop == 1) {
        func_00172060(lsc, fname, dir, ofst, nsct);
    }
}
