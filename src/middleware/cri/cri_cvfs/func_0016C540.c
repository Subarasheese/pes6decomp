/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/cvfs.c (cvFsGetFileSizeEx64). See THIRD_PARTY.md. */

enum CvFsOptCode {
    CVFS_OPT_SET_CUR_VOLUME = 1,
    CVFS_OPT_ADD_VOLUME = 2,
    CVFS_OPT_DEL_VOLUME = 3,
    CVFS_OPT_GET_NUM_FILES = 4,
    CVFS_OPT_GET_VOLUME_INFO = 5,
    CVFS_OPT_SET_DEF_VOL = 6,
    CVFS_OPT_IS_FULL_PATH = 100,
    CVFS_OPT_NUM_TR64_HIGH = 200,
    CVFS_OPT_NUM_TR64_LOW = 201,
    CVFS_OPT_FILE_SIZE64_HIGH = 202,
    CVFS_OPT_FILE_SIZE64_LOW = 203,
    CVFS_OPT_FILE_SIZE_EX64_HIGH = 204,
    CVFS_OPT_FILE_SIZE_EX64_LOW = 205,
    CVFS_OPT_FSYS64_INFO = 299,
    CVFS_OPT_FILE_SIZE_BY_HNDL = 300
};
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
extern CvFsVtbl *func_0016A8B0(const char *devname);
extern void func_0016AE20(char *devname, char *fname, const char *path);
long long func_0016C540(const char *path, int arg) {
    char devname[304];
    char fname[304];
    CvFsVtbl *vtbl;
    long long size;
    int high;
    vtbl = func_0016A8B0(devname);
    if (vtbl == 0) {
        return 0;
    }
    func_0016AE20(devname, fname, path);
    size = 0;
    if (vtbl->opt_fn1 != 0) {
        high = vtbl->opt_fn1(path, CVFS_OPT_FILE_SIZE_EX64_HIGH, fname, arg);
        size = (((long long)high) << 32) +
               ((unsigned int)vtbl->opt_fn1(path, CVFS_OPT_FILE_SIZE_EX64_LOW, fname, arg));
    }
    return size;
}
