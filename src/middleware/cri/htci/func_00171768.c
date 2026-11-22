/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/htci.c (open_file_all). See THIRD_PARTY.md. */

typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
extern void func_0016D5C0(int value);
extern int func_0016D8D0(const char *name, int flags);
extern int func_0016D938(int fd);
extern void func_00161038(const char *format, ...);
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
extern int D_00387810;
extern long func_00170920(int fd);
extern void func_00171248(const char *name, char *out);
int func_00171768(HtCiFileLoc *files, int n) {
    char path[256];
    char *name;
    int i;
    int fd;
    int opened;
    int failed;
    opened = 0;
    failed = 0;
    memset(path, 0, 256);
    if (n > 13) {
        n = 13;
    }
    for (i = 0; i < n; i++) {
        name = ((char *)files) + ((D_00387800.nent * 8) + ((D_00387800.namelen + 1) * i));
        func_00171248(name, path);
        if (name[0] == 0) {
            continue;
        }
        func_0016D5C0(0x6600);
        fd = func_0016D8D0(path, 1);
        func_0016D5C0(0x6601);
        if (fd < 0) {
            failed++;
            func_00161038("HTCI: \"%s\" can't Open.(sceOpen)\n", path);
            continue;
        }
        files[i].fd = fd;
        opened++;
        files[i].size = func_00170920(fd);
        func_00161038("HTCI: \"%s\" Opened.(sceOpen)\n", name);
        func_0016D5C0(0x6800);
        func_0016D938(fd);
        func_0016D5C0(0x6801);
        func_0016D5C0(0x6700);
        func_0016D8D0(path, D_00387810);
        func_0016D5C0(0x6701);
    }

    func_00161038("HTCI: Total %d files.\n", opened);
    if (failed > 0) {
        func_001610B0("HTCI: Error, Can't load all cache file.%c", 10);
    }
    return opened;
}
