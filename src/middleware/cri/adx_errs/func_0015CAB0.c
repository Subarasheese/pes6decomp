/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxf.c (adxf_CreateAdxFs). See THIRD_PARTY.md. */

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
typedef struct AdxfHandle AdxfHandle;
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
extern AdxStmObj *func_001630D0(SfdSj *sj, int maxsct);
extern void func_0015B478(const char *msg);
struct AdxfHandle {
    signed char used;
    signed char stat;
    signed char sjflag;
    signed char stopnw;
    AdxStmObj *stm;
    SfdSj *sj;
    int fsize_sct;
    int fsize_byte;
    int ofst;
    int rqsct_ofst;
    int rqsct;
    int rdsct;
    void *buf;
    int bsize;
    int rqrdsct;
    int skpsct;
    void *dir;
    const char *fname;
    int stm_ofst;
    int stm_nsct;
};
extern AdxfHandle *func_0015CA58(void);

AdxfHandle *func_0015CAB0(void) {
    AdxfHandle *adxf;
    void *stm;
    adxf = func_0015CA58();
    if (adxf == 0) {
        func_0015B478("E04041201:not enough ADXF handle (adxf_CreateAdxFs)");
        return 0;
    }
    stm = func_001630D0(0, 256);
    adxf->stm = stm;
    if (stm == 0) {
        func_0015B478("E02111001:can't create stm handle (adxf_CreateAdxFs)");
        return 0;
    }
    adxf->stat = 1;
    adxf->rqsct_ofst = 0;
    adxf->rqsct = 0;
    adxf->rdsct = 0;
    adxf->sjflag = 0;
    adxf->sj = 0;
    adxf->stopnw = 0;
    adxf->rqrdsct = 512;
    adxf->used = 1;
    return adxf;
}
