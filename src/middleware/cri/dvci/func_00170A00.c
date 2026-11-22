/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/htci.c (htCiOpen). See THIRD_PARTY.md. */

typedef unsigned int size_t;
extern void *memset(void *, int, size_t);
typedef struct SrdObj SrdObj;
extern void func_0016D5C0(int value);
extern int func_0016D8D0(const char *name, int flags);
extern void func_00161038(const char *format, ...);
typedef struct HtCiFile {
    signed char used;
    signed char cached;
    signed char state;
    signed char rsv;
    long long size;
    int nsct;
    int end_fg;
    int fd;
    int pos;
    char *buf;
    int req;
    int done;
    SrdObj *stm;
} HtCiFile;
typedef struct HtCiFileLoc {
    int fd;
    int size;
} HtCiFileLoc;
extern char D_003876D0[304];
extern int D_00387810;
extern void func_00170400(void *detail, const char *message);
extern long func_00170768(const char *fname);
extern HtCiFile *func_001709A8(void);
extern void func_001709E0(HtCiFile *h);
extern void func_00171248(const char *name, char *out);
extern void func_00171B40(const char *name, HtCiFileLoc *loc);
HtCiFile *func_00170A00(const char *fname, void *atr, int rw) {
    HtCiFileLoc loc;
    HtCiFile *h;
    memset(&loc, 0, sizeof(loc));
    if (fname == 0) {
        func_00170400(0, "E0092708:fname is null.(htCiOpen)");
        return 0;
    }
    if (rw != 0) {
        func_00170400(0, "E0092709:rw is illigal.(htCiOpen)");
        return 0;
    }
    h = func_001709A8();
    if (h == 0) {
        func_00170400(0, "E0092710:not enough handle resource.(htCiOpen)");
        return 0;
    }
    func_00171B40(fname, &loc);
    if (loc.size == 0) {
        func_00171248(fname, D_003876D0);
        func_00161038("HTCI: File cache was not hit. \"%s\"\n", fname);
        h->size = func_00170768(fname);
        if (h->size == 0) {
            return 0;
        }
        func_0016D5C0(0x4900);
        h->fd = func_0016D8D0(D_003876D0, D_00387810);
        func_0016D5C0(0x4901);
        if (h->fd < 0) {
            func_00170400(0, "E0092711:sceOpen fail.(htCiOpen)");
            func_001709E0(h);
            return 0;
        }
        h->cached = 0;
    } else {
        h->cached = 1;
        h->fd = loc.fd;
        h->size = loc.size;
    }
    h->pos = 0;
    h->buf = 0;
    h->req = 0;
    h->nsct = (h->size + 2047) >> 11;
    h->end_fg = 0;
    h->state = 0;
    h->used = 1;
    return h;
}
