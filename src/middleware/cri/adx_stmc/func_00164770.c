/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware, ADXPS2_SetupDvdFs, from crashbashash/DW4_Decomp, src/cri/adxdvd.c. See
 * THIRD_PARTY.md. */
extern const char D_003C8838[]; /* "MFS" */
extern const char D_003C8840[]; /* "CDV" */
typedef struct AdxDvdFsPrm {
    const char *rootdir;
    int rdmode;
    int trycount;
    int spindlctrl;
    int datapattern;
} AdxDvdFsPrm;
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
extern void func_0016A748(char *devname, CvFsVtbl *(*get_if)(void), void *prm);
extern void func_0016AA80(char *devname);
extern void func_0016BDD0(CvFsErrFn func, void *obj);
extern CvFsVtbl *D_0016E9B0(void);
extern void func_00170228(int trycount, int spindlctrl, int datapattern, int mode);
extern void func_00170248(const char *path);
extern CvFsVtbl *mfCiGetInterface(void);
extern volatile char D_00384C20[16];
extern volatile char D_00384C30[29];
extern void D_00164758(void *obj, const char *msg, int code);
void func_00164770(AdxDvdFsPrm *prm) {
    /* The CRI initializer reads its volatile version record. */
    D_00384C20;
    D_00384C30;
    func_0016BDD0(D_00164758, 0);
    func_0016A748(D_003C8838, mfCiGetInterface, 0);
    func_0016BDD0(D_00164758, 0);
    func_0016A748(D_003C8840, D_0016E9B0, 0);
    func_0016AA80(D_003C8840);
    if (prm != 0) {
        func_00170228(prm->trycount, prm->spindlctrl, prm->datapattern, prm->rdmode);
        func_00170248(prm->rootdir);
        return;
    }
    func_00170228(0, 0, 0, 0);
    func_00170248(0);
}
