/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/lsc.c (lsc_StatWait). See THIRD_PARTY.md. */

typedef unsigned int size_t;
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
extern size_t func_001C80F0(const char *);
typedef void (*CvFsErrFn)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn)(CvFsErrFn func, void *obj);
typedef int (*CvFsPathFn)(const char *path);
typedef int (*CvFsGetFreeSizeFn)(void);
typedef int (*CvFsOpenFn)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn)(int fd);
typedef int (*CvFsFdIntFn)(int fd);
typedef int (*CvFsSeekFn)(int fd, int offset, int origin);
typedef int (*CvFsXferFn)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn)(int fd, int len);
typedef int (*CvFsGetNumFilesFn)(void);
typedef int (*CvFsLoadDirInfoFn)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn)(const char *path, int arg);
typedef int (*CvFsOptFn2)(int fd, int code, int arg);
typedef struct CvFsVtbl {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn entry_err_func;
    CvFsPathFn get_file_size;
    CvFsGetFreeSizeFn get_free_size;
    CvFsOpenFn open;
    CvFsFdFn close;
    CvFsSeekFn seek;
    CvFsFdIntFn tell;
    CvFsXferFn req_rd;
    CvFsXferFn req_wr;
    CvFsFdFn stop_tr;
    CvFsFdIntFn get_stat;
    CvFsFdIntFn get_sct_len;
    CvFsSetSctLenFn set_sct_len;
    CvFsFdIntFn get_num_tr;
    CvFsPathFn change_dir;
    CvFsPathFn is_exist_file;
    CvFsGetNumFilesFn get_num_files;
    CvFsLoadDirInfoFn load_dir_info;
    CvFsFdIntFn get_max_byte_rate;
    CvFsPathFn make_dir;
    CvFsPathFn remove_dir;
    CvFsPathFn delete_file;
    CvFsGetFileSizeExFn get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2 opt_fn2;
} CvFsVtbl;
typedef struct CvFsHandle {
    CvFsVtbl *vtbl;
    int fd;
} CvFsHandle;
typedef struct AdxStmObj {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj *sj;
    CvFsHandle *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj;
extern void func_001631E8(AdxStmObj *stm, const char *fname, void *dir, int ofst, int nsct);
extern void func_00163378(AdxStmObj *stm);
extern int func_001634B0(AdxStmObj *stm, int pos);
extern int func_001635A0(AdxStmObj *stm);
extern void func_001636A8(AdxStmObj *stm);
extern void func_00163820(AdxStmObj *stm, int eos);
extern int func_001640A8(AdxStmObj *stm, int min, int max);

enum LscStmStat { LSC_STM_STAT_WAIT = 0, LSC_STM_STAT_READ = 1, LSC_STM_STAT_END = 2 };
extern void LSC_CallErrFunc(const char *format, ...);
void func_00172A00(LscObj *lsc) {
    LscStm *stm = &lsc->stms[lsc->rpos];
    const char *fname;
    unsigned int len;
    unsigned int i;
    int sum;
    if (lsc->nstm <= 0) {
        return;
    }
    func_001636A8(lsc->stm);
    func_00163378(lsc->stm);
    fname = stm->fname;
    len = func_001C80F0(fname);
    sum = 0;
    for (i = 0; i < len; i++) {
        sum += (unsigned char)fname[i];
    }

    if (sum != stm->fname_sum) {
        LSC_CallErrFunc("E0013: '%s' is different from entry file name.(LSC_ExecServer)\n",
                        stm->fname);
        return;
    }
    func_001631E8(lsc->stm, stm->fname, stm->dir, stm->ofst, stm->nsct);
    func_00163820(lsc->stm, stm->nsct);
    lsc->stm_size = stm->nsct;
    stm->rdsct = 0;
    lsc->reading = 0;
    func_001640A8(lsc->stm, lsc->flow_min, lsc->flow_max);
    func_001634B0(lsc->stm, 0);
    func_001635A0(lsc->stm);
    lsc->reading = 1;
    stm->stat = LSC_STM_STAT_READ;
}
