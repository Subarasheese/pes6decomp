/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/mfci.c (mfCiSetSctLen). See THIRD_PARTY.md. */

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
extern void func_00172E10(void *detail, const char *message);

void func_001734F8(MfCiFile *fh, int sctsize) {
    int old;
    int pos;
    if (fh == 0) {
        func_00172E10(fh, "E0040302:handl is null.");
        return;
    }
    pos = fh->pos;
    old = fh->sctsize;
    fh->sctsize = sctsize;
    fh->nsct = ((fh->size + sctsize) - 1) / sctsize;
    fh->pos = (pos * old) / sctsize;
    fh->nbyte = fh->reqsct * sctsize;
}
