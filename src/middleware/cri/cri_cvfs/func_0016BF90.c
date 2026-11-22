/* compiler: ee-gcc-2.96-nsa-G0 */
/* crashbashash/DW4_Decomp, src/cri/cvfs.c (cvFsAddVolumeEx). See THIRD_PARTY.md. */

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
typedef struct CvFsOptPrm {
    void *prm[5];
} CvFsOptPrm;
typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
extern char D_003C9CF0[];
extern char D_003C9D18[];
extern char D_003C9D40[];
extern char D_003C9D68[];
extern void func_0016A550(const char *msg);
extern CvFsVtbl *func_0016A8B0(const char *devname);
int func_0016BF90(const char *devname, const char *volume, void *image, int option) {
    CvFsOptPrm arg;
    CvFsVtbl *vtbl;
    if (devname == 0) {
        func_0016A550(D_003C9CF0);
        return -1;
    }
    if (volume == 0) {
        func_0016A550(D_003C9D18);
        return -1;
    }
    if (image == 0) {
        func_0016A550(D_003C9D40);
        return -1;
    }
    vtbl = func_0016A8B0(devname);
    if (vtbl == 0) {
        func_0016A550(D_003C9D68);
        return -1;
    }
    memset(&arg, 0, sizeof(arg));
    arg.prm[0] = image;
    arg.prm[1] = (void *)volume;
    arg.prm[2] = (void *)option;
    if (vtbl->opt_fn1 != 0) {
        return vtbl->opt_fn1(&arg, CVFS_OPT_ADD_VOLUME, 0, 0);
    }
    return -1;
}
