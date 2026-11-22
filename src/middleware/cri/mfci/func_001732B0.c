/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/mfci.c (mfCiReqRd). See THIRD_PARTY.md. */

typedef unsigned int size_t;
extern void *memcpy(void *, const void *, size_t);
extern void *memset(void *, int, size_t);
typedef struct MfCiFile {
    signed char used;
    signed char stat;
    char rsv;
    char rsv2;
    int sctsize;
    int size;
    int nsct;
    int pos;
    int nbyte;
    int reqsct;
    char name[20];
    int ofs;
    int len;
} MfCiFile;
extern void func_00172DC8(void);
extern void func_00172DE0(void);
extern void func_00172E10(void *detail, const char *message);
extern char *func_00172E58(char *name, int *size);

int func_001732B0(MfCiFile *fh, int nsct, char *buf) {
    char *data;
    int size;
    int n;
    int ofs;
    int len;
    int avail;
    if (fh == 0) {
        func_00172E10(fh, "E01100307:handl is null.");
        return 0;
    }
    if (nsct < 0) {
        func_00172E10(fh, "E01100308:nsct < 0.(mfCiReqRd)");
        return 0;
    }
    if (buf == 0) {
        func_00172E10(fh, "E01100309:buf is null.(mfCiReqRd)");
        return 0;
    }
    if (nsct == 0) {
        fh->stat = 1;
        return 0;
    }
    if (fh->stat == 2) {
        return 0;
    }
    func_00172DC8();
    fh->nbyte = 0;
    n = fh->nsct - fh->pos;
    if (nsct < n) {
        n = nsct;
    }
    fh->reqsct = n;
    ofs = fh->pos * fh->sctsize;
    len = n * fh->sctsize;
    if (len == 0) {
        fh->stat = 1;
        func_00172DE0();
        return 0;
    }
    fh->ofs = ofs;
    fh->len = len;
    fh->stat = 2;
    data = func_00172E58(fh->name, &size);
    avail = ((size - fh->ofs) < fh->len) ? (size - fh->ofs) : (fh->len);
    func_00172DE0();
    memcpy(buf, data + fh->ofs, fh->len);
    memset(buf + avail, 0, fh->len - avail);
    func_00172DC8();
    fh->stat = 1;
    fh->pos += fh->reqsct;
    fh->nbyte = fh->reqsct * fh->sctsize;
    func_00172DE0();
    return fh->reqsct;
}
