/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/mfci.c (mfci_reset_hn). See THIRD_PARTY.md. */

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
extern int func_00172FC8(char *name);

void func_00173060(MfCiFile *fh) {
    int size;
    fh->sctsize = 0x800;
    size = func_00172FC8(fh->name);
    fh->size = size;
    fh->nsct = ((size + fh->sctsize) - 1) / fh->sctsize;
    fh->used = 1;
    fh->reqsct = 0;
    fh->nbyte = 0;
    fh->stat = 0;
    fh->pos = 0;
}
