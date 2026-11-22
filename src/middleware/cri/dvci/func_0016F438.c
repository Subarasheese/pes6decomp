/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dvci.c (dvci_getfilesize32). See THIRD_PARTY.md. */

typedef struct {
    unsigned int lsn;
    unsigned int size;
    char name[16];
    unsigned char date[8];
    unsigned int flag;
} sceCdlFILE;
extern int func_00113D78(int mode);
extern void func_0016D5C0(int value);
extern void func_001610B0(const char *format, ...);
extern char D_00387110[304];
extern int func_0016EA10(sceCdlFILE *fp, const char *name);
extern void func_0016F5E8(const char *name, char *path);
extern int func_0016FE58(const char *name, sceCdlFILE *fp);
int func_0016F438(const char *fname) {
    sceCdlFILE fp;
    func_0016FE58(fname, &fp);
    if (fp.size == 0) {
        func_0016F5E8(fname, D_00387110);
        func_0016D5C0(0x8400);
        func_00113D78(0);
        func_0016D5C0(0x8401);
        if (func_0016EA10(&fp, D_00387110) == 0) {
            func_001610B0("DVCI: sceCdSearchFile failed. \"%s\"\n", D_00387110);
            return 0;
        }
    }
    return fp.size;
}
