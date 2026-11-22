/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/mfci.c (mfCiSeek). See THIRD_PARTY.md. */

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

int func_001731B8(MfCiFile *fh, int offset, int origin) {
    int pos;
    if (fh == 0) {
        func_00172E10(fh, "E01100305:handl is null.");
        return 0;
    }
    func_00172DC8();
    if (origin == 0) {
        fh->pos = offset;
    } else if (origin == 2) {
        fh->pos = fh->nsct + offset;
    } else if (origin == 1) {
        fh->pos += offset;
    }
    pos = fh->pos;
    if (pos >= fh->nsct) {
        pos = fh->nsct;
    }
    if (pos < 0) {
        pos = 0;
    }
    fh->pos = pos;
    func_00172DE0();
    return fh->pos;
}
