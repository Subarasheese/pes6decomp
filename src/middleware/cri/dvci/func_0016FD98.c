/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dvci.c (dvci_get_lsn_fname). See THIRD_PARTY.md. */

extern unsigned long func_001C9C28(const char *, char **, int);
extern void func_00161038(const char *format, ...);

int func_0016FD98(const char *name, int *lsn, int *nsct) {
    char *p;
    p = (char *)name;
    *lsn = func_001C9C28(p, &p, 16);
    if ((*p) != 0) {
        p++;
    }
    if (nsct != 0) {
        *nsct = func_001C9C28(p, &p, 16);
    }
    func_00161038("DVCI: \"%s\" opened. ", name);
    func_00161038("LSN=%d, ", *lsn);
    func_00161038("Size=%d[sector]\n", *nsct);
    return 1;
}
