/* compiler: ee-gcc-2.96-G0 */
/* new-coke/rez-decomp, src/cri/cvfs.c (cvfs_lib_finish). See THIRD_PARTY.md. */

typedef int (*CvFsFn)();
typedef struct {
    CvFsFn exec_server;
    CvFsFn entry_err_func;
    CvFsFn get_file_size;
    CvFsFn get_free_size;
    CvFsFn open;
    CvFsFn close;
    CvFsFn seek;
    CvFsFn tell;
    CvFsFn req_rd;
    CvFsFn req_wr;
    CvFsFn stop_tr;
    CvFsFn get_stat;
    CvFsFn get_sct_len;
    CvFsFn set_sct_len;
    CvFsFn get_num_tr;
    CvFsFn change_dir;
    CvFsFn is_exist_file;
    CvFsFn get_num_files;
    CvFsFn load_dir_info;
    CvFsFn get_max_byte_rate;
    CvFsFn make_dir;
    CvFsFn remove_dir;
    CvFsFn delete_file;
    CvFsFn get_file_size_ex;
    CvFsFn opt_fn1;
    CvFsFn opt_fn2;
    char pad_68[8];
} CvFsDevIf;
typedef struct {
    CvFsDevIf *dev;
    char name[12];
} CvFsDev;
typedef struct {
    CvFsDevIf *dev;
    void *fd;
} CvFsHn;
extern char D_0050E780[];
extern CvFsDev D_0050E580[32];
extern CvFsHn D_0050E440[40];
extern int D_00385094;
extern void *memset(void *s, int c, unsigned int n);

void func_0016A640(void) {
    int i;
    if ((--D_00385094) == 0) {
        for (i = 0; i < 40; i++) {
            if (D_0050E440[i].dev)
                D_0050E440[i].dev->close(D_0050E440[i].fd);
            D_0050E440[i].dev = 0;
            D_0050E440[i].fd = 0;
        }

        for (i = 0; i < 32; i++)
            D_0050E580[i].name[0] = 0;

        memset(D_0050E780, 0, 9);
        D_0050E780[0] = 0;
    }
}
