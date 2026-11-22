/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/htci.c (close_file_all). See THIRD_PARTY.md. */

extern void func_0016D5C0(int value);
extern int func_0016D938(int fd);
extern void func_001610B0(const char *format, ...);
typedef struct HtCiFileLoc {
    int fd;
    int size;
} HtCiFileLoc;
typedef struct HtCiTable {
    int files;
    unsigned int nfiles;
    int nent;
    int namelen;
} HtCiTable;
extern HtCiTable D_00387800;
extern void func_00171248(const char *name, char *out);
extern void func_00171B18(void);
int func_00171920(void) {
    char path[256];
    HtCiFileLoc *files;
    char *name;
    unsigned int i;
    unsigned int n;
    int closed;
    int ret;
    closed = 0;
    files = (HtCiFileLoc *)D_00387800.files;
    if (files == 0) {
        return 0;
    }
    n = D_00387800.nfiles;
    for (i = 0; i < n; i++) {
        name = ((char *)files) + ((D_00387800.nent * 8) + ((D_00387800.namelen + 1) * i));
        func_00171248(name, path);
        if (name[0] == 0) {
            continue;
        }
        func_0016D5C0(0x6900);
        ret = func_0016D938(files[i].fd);
        func_0016D5C0(0x6901);
        if (ret < 0) {
            func_001610B0("HTCI: \"%s\" can't Close.(sceClose)\n", path);
        } else {
            func_001610B0("HTCI: \"%s\" Closed.(sceClose)\n", path);
            closed++;
        }
    }

    func_001610B0("HTCI: Total %d files\n", closed);
    func_00171B18();
    return 1;
}
