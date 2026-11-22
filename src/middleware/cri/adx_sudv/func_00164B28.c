/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxhst.c (ADXPS2_SetupHostFs). See THIRD_PARTY.md. */

typedef struct AdxHstFsPrm {
    const char *rootdir;
    int openmode;
    int host64;
    int hostlock;
} AdxHstFsPrm;
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
extern CvFsVtbl *D_00170398(void);
extern void func_00171D10(int mode);
extern void func_00171D40(const char *path);
extern void func_00170338(int sw);
extern void func_00170368(int sw);
extern CvFsVtbl *mfCiGetInterface(void);
extern void D_00164B10(void *obj, const char *msg, int code);

void func_00164B28(AdxHstFsPrm *prm) {
    func_0016BDD0(D_00164B10, 0);
    func_0016A748("MFS", mfCiGetInterface, 0);
    func_0016BDD0(D_00164B10, 0);
    func_0016A748("HST", D_00170398, 0);
    func_0016AA80("HST");
    if (prm != 0) {
        func_00171D10(prm->openmode);
        func_00171D40(prm->rootdir);
        if (prm->host64 == 0) {
            func_00170338(0);
        } else {
            func_00170338(1);
        }
        if (prm->hostlock == 0) {
            func_00170368(0);
            return;
        }
        func_00170368(1);
        return;
    }
    func_00171D10(0);
    func_00171D40(0);
    func_00170338(0);
    func_00170368(0);
}
