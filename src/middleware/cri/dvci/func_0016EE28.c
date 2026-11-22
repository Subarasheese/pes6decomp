/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dvci.c (dvCiOpen). See THIRD_PARTY.md. */

typedef struct {
    unsigned int lsn;
    unsigned int size;
    char name[16];
    unsigned char date[8];
    unsigned int flag;
} sceCdlFILE;
typedef struct {
    unsigned char trycount;
    unsigned char spindlctrl;
    unsigned char datapattern;
    unsigned char pad;
} sceCdRMode;
extern int func_00113D78(int mode);
typedef struct SrdObj SrdObj;
extern void func_0016D5C0(int value);
extern void func_001610B0(const char *format, ...);
typedef struct DvCiFile {
    signed char used;
    signed char cached;
    signed char state;
    signed char instat;
    unsigned int size;
    int nsct;
    int pos;
    int req;
    int done;
    char *buf;
    SrdObj *stm;
    sceCdlFILE fp;
    sceCdRMode rmode;
} DvCiFile;
extern char D_00387110[304];
extern void func_0016E9E0(void *detail, const char *message);
extern int func_0016EA10(sceCdlFILE *fp, const char *name);
extern DvCiFile *func_0016EDD0(void);
extern void func_0016EE08(DvCiFile *h);
extern void func_0016F5E8(const char *name, char *path);
extern int func_0016FE58(const char *name, sceCdlFILE *fp);
DvCiFile *func_0016EE28(const char *fname, void *atr, int rw) {
    DvCiFile *h;
    int ret;
    if (fname == 0) {
        func_0016E9E0(0, "E0092908:fname is null.(dvCiOpen)");
        return 0;
    }
    if (rw != 0) {
        func_0016E9E0(0, "E0092909:rw is illigal.(dvCiOpen)");
        return 0;
    }
    h = func_0016EDD0();
    if (h == 0) {
        func_0016E9E0(0, "E0092910:not enough handle resource.(dvCiOpen)");
        return 0;
    }
    ret = func_0016FE58(fname, &h->fp);
    if (h->fp.size == 0) {
        func_0016F5E8(fname, D_00387110);
        func_001610B0("DVCI: File cache was not hit. \"%s\"\n", D_00387110);
        func_0016D5C0(0x8300);
        func_00113D78(0);
        func_0016D5C0(0x8301);
        if (func_0016EA10(&h->fp, D_00387110) == 0) {
            func_0016E9E0(0, "E0092911:sceCdSearchFile fail.(dvCiOpen)");
            func_0016EE08(h);
            return 0;
        }
        h->cached = 0;
    } else {
        h->cached = 1;
    }
    h->nsct = (h->fp.size + 2047) / 2048;
    h->used = 1;
    h->size = h->fp.size;
    h->pos = 0;
    h->buf = 0;
    h->req = 0;
    h->done = 0;
    h->state = 0;
    h->stm = 0;
    if (ret == 1) {
        h->nsct = 0x7fffffff;
    }
    return h;
}
