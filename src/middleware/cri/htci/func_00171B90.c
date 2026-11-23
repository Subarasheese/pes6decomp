/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware, htCiLoadFcache, from crashbashash/DW4_Decomp, src/cri/htci.c. See THIRD_PARTY.md.
 */

typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
extern void func_00161038(const char *format, ...);
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
extern char D_0050FAC0[4096];
extern void func_00170400(void *detail, const char *message);
extern int func_00171468(char *buf, char *list, int n, int nameLen);
extern int func_00171608(const char *name, void *buf);
extern int func_00171768(HtCiFileLoc *files, int n);
extern int func_00171920(void);
extern void func_00171B18(void);
int func_00171B90(const char *path, void *buf, unsigned int size, int nameLen) {
    int n;
    int found;
    int stride;
    memset(D_0050FAC0, 0, 4096);
    if (D_00387800.files == 0) {
        func_00171B18();
    }
    func_00171920();
    if (path == 0) {
        return 0;
    }
    if (buf == 0) {
        func_00161038("HTCI: Invalidate filelist buffer pointer.\r\n", 0);
        return 0;
    }
    if (size == 0) {
        func_00161038("HTCI: Invalidate filelist buffer size.\r\n", 0);
        return 0;
    }
    memset(buf, 0, size);
    if (func_00171608(path, D_0050FAC0) == 0) {
        func_00161038("HTCI: Can't read filelist file.(%s)\n", path);
        func_00170400(0, "E0111501:can't read filelist.(htCiLoadDirInfo)");
        return 0;
    }
    n = func_00171468(buf, D_0050FAC0, size / (nameLen + 9), nameLen);
    stride = nameLen + 1;
    found = func_00171768(buf, n);
    return ((size / (nameLen + 9)) * 8) + (found * stride);
}
