/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware, dvCiSetFcache, from crashbashash/DW4_Decomp, src/cri/dvci.c. See THIRD_PARTY.md.
 */

typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
extern void func_00161038(const char *format, ...);
typedef struct DvCiFileLoc {
    unsigned int lsn;
    unsigned int size;
} DvCiFileLoc;
typedef struct DvCiTable {
    int files;
    int nfiles;
    int nent;
    int namelen;
} DvCiTable;
extern DvCiTable D_00387240;
extern char D_0050EAC0[4096];
extern int func_0016F7B8(char *buf, char *list, int listlen, int n, int nameLen);
extern int func_0016FAD8(DvCiFileLoc *files, int n);
extern void func_0016FD30(void);
int func_001700B8(char *list, int listlen, char *buf, unsigned int size, int nameLen) {
    int n;
    int found;
    memset(D_0050EAC0, 0, 4096);
    if (D_00387240.files != 0) {
        func_0016FD30();
    }
    if ((((list == 0) || (buf == 0)) || (listlen == 0)) || (size == 0)) {
        func_0016FD30();
    }
    if (list == 0) {
        return 0;
    }
    if (buf == 0) {
        func_00161038("DVCI: Invalidate filelist buffer pointer.\r\n", 0);
        return 0;
    }
    if ((listlen == 0) || (size == 0)) {
        func_00161038("DVCI: Invalidate filelist buffer size.\r\n", 0);
        return 0;
    }
    n = func_0016F7B8(buf, list, listlen, size / (nameLen + 9), nameLen);
    found = func_0016FAD8((DvCiFileLoc *)buf, n);
    return ((size / (nameLen + 9)) * 8) + (found * (nameLen + 1));
}
