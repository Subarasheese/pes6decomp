/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxf.c (ADXF_GetPtStat). See THIRD_PARTY.md. */

extern char D_003C7EB8[]; /* E0041303:illigal parameter 'ptid'.(adxf_GetPtStat) */
extern char D_003C7EF0[]; /* AFS */
extern char D_003C7EF8[]; /* E0040701:Illigal format(not AFS).(adxf_GetPtStat) */
extern char D_003C7F30[]; /* E0040702:Illigal number of file.(adxf_GetPtStat) */
extern char D_003C7F68[]; /* E2122501:AFS file has 128MB or more of inside file.(adxf_GetPtStat) */
typedef unsigned int size_t;
extern int func_001C4698(const void *, const void *, size_t);
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
typedef struct AdxfPtInfo AdxfPtInfo;
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
struct AdxfPtInfo {
    AdxfPtInfo *next;
    int size;
    int nfile;
    unsigned short nentry;
    signed char type;
    signed char rev;
    char fname[256];
    void *curdir;
    int base;
    unsigned int top;
};
extern AdxfPtInfo *D_003785D8[256];
extern int D_00378B04;
extern AdxfHandle *D_00378B08;
extern int D_00378B0C;
extern int D_00378B10;
extern unsigned char *D_00378B18;
extern int D_00378B1C;
extern int func_0015B890(int bytes);
extern void func_0015C480(void);
extern int adxf_ReadNw(AdxfHandle *adxf, int nsct, void *buf);
extern int adxf_GetStat(AdxfHandle *adxf);
int adxf_GetPtStat(int ptid) {
    AdxfPtInfo *ptinfo;
    unsigned short *nsct16 = 0;
    unsigned int *nsct32 = 0;
    unsigned short *top16 = 0;
    unsigned int *top32 = 0;
    int stat;
    int nfile;
    int nsct;
    int nword;
    int i;
    if (ptid != D_00378B0C) {
        func_0015B478(D_003C7EB8);
        return -3;
    }
    if ((D_00378B08 == 0) && (ptid != (-1))) {
        return D_00378B10;
    }
    stat = adxf_GetStat(D_00378B08);
    D_00378B10 = stat;
    if (stat != 3) {
        return stat;
    }
    ptinfo = D_003785D8[ptid];
    if (ptinfo->rev == 1) {
        top32 = &ptinfo->top;
        nsct32 = top32 + 1;
    } else {
        top16 = (unsigned short *)(&ptinfo->top);
        nsct16 = top16 + 1;
    }
    if (ptinfo->nfile == 0) {
        if (func_001C4698(D_00378B18, D_003C7EF0, 3) != 0) {
            func_0015B478(D_003C7EF8);
            D_00378B10 = 4;
            func_0015C480();
            return D_00378B10;
        }
        i = 1;
        if (((((D_00378B18 + (i * 4))[0] | ((D_00378B18 + (i * 4))[1] << 8)) |
              ((D_00378B18 + (i * 4))[2] << 16)) |
             ((D_00378B18 + (i * 4))[3] << 24)) > 0x10000) {
            func_0015B478(D_003C7F30);
            D_00378B10 = 4;
            func_0015C480();
            return D_00378B10;
        }
        nfile = (ptinfo->nentry = D_00378B18[i * 4] | (D_00378B18[(i * 4) + 1] << 8));
        ptinfo->nfile = nfile;
        if (ptinfo->rev == 1) {
            ptinfo->size = (sizeof(AdxfPtInfo)) + ((nfile + 1) * 4);
        } else {
            ptinfo->size = (((nfile * 2) + (sizeof(AdxfPtInfo))) >> 2) << 2;
        }
        if (ptinfo->rev == 1) {
            *top32 = ((((D_00378B18 + 8)[0] | ((D_00378B18 + 8)[1] << 8)) |
                       ((D_00378B18 + 8)[2] << 16)) |
                      ((D_00378B18 + 8)[3] << 24)) /
                     2048;
        } else {
            *top16 = ((((D_00378B18 + 8)[0] | ((D_00378B18 + 8)[1] << 8)) |
                       ((D_00378B18 + 8)[2] << 16)) |
                      ((D_00378B18 + 8)[3] << 24)) /
                     2048;
        }
        i = 3;
    } else {
        i = 1;
    }
    nword = D_00378B1C * 512;
    for (; i < nword; i += 2) {
        if (ptinfo->rev == 1) {
            nsct32[D_00378B04++] =
                func_0015B890((((D_00378B18 + (i * 4))[0] | ((D_00378B18 + (i * 4))[1] << 8)) |
                               ((D_00378B18 + (i * 4))[2] << 16)) |
                              ((D_00378B18 + (i * 4))[3] << 24));
        } else {
            nsct = func_0015B890((((D_00378B18 + (i * 4))[0] | ((D_00378B18 + (i * 4))[1] << 8)) |
                                  ((D_00378B18 + (i * 4))[2] << 16)) |
                                 ((D_00378B18 + (i * 4))[3] << 24));
            if (nsct & 0xFFFF0000) {
                func_0015B478(D_003C7F68);
                D_00378B10 = 4;
                func_0015C480();
                return D_00378B10;
            }
            nsct16[D_00378B04++] = nsct;
        }
        if (D_00378B04 >= ptinfo->nfile) {
            D_00378B10 = 3;
            func_0015C480();
            break;
        }
    }

    if (i < nword) {
        return D_00378B10;
    }
    if (adxf_ReadNw(D_00378B08, D_00378B1C, D_00378B18) < 0) {
        D_00378B10 = 4;
        func_0015C480();
    } else {
        D_00378B10 = D_00378B08->stat;
    }
    return D_00378B10;
}
