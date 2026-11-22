/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dvci.c (dvci_get_fstate). See THIRD_PARTY.md. */

extern int strcmp(const char *, const char *);
typedef struct {
    unsigned int lsn;
    unsigned int size;
    char name[16];
    unsigned char date[8];
    unsigned int flag;
} sceCdlFILE;
extern void func_001610B0(const char *format, ...);
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
extern void func_0016FC68(sceCdlFILE *out, const char *name, DvCiFileLoc *files, int n);
extern int func_0016FD58(const char *name);
extern int func_0016FD98(const char *name, int *lsn, int *nsct);
int func_0016FE58(const char *name, sceCdlFILE *fp) {
    int lsn;
    int nsct;
    if (strcmp("DVD-ROM", name) == 0) {
        fp->size = -1;
        fp->lsn = 0;
        func_001610B0("DVCI: CD/DVD-ROM Image opened%c\n", '.');
        return 1;
    }
    if (func_0016FD58(name) == 1) {
        func_0016FD98(name, &lsn, &nsct);
        fp->lsn = lsn;
        fp->size = nsct << 11;
        return 0;
    }
    fp->lsn = 0;
    fp->size = 0;
    if (D_00387240.files != 0) {
        func_0016FC68(fp, name, (DvCiFileLoc *)D_00387240.files, D_00387240.nfiles);
    }
    return 0;
}
