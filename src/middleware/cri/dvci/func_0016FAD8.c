/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/dvci.c (search_fstate). See THIRD_PARTY.md. */

typedef struct {
    unsigned int lsn;
    unsigned int size;
    char name[16];
    unsigned char date[8];
    unsigned int flag;
} sceCdlFILE;
extern int func_00113D78(int mode);
extern void func_0016D5C0(int value);
extern void func_00161038(const char *format, ...);
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
extern int func_0016EA10(sceCdlFILE *fp, const char *name);
extern void func_0016F5E8(const char *name, char *path);
extern char D_00387368[128];
int func_0016FAD8(DvCiFileLoc *files, int n) {
    sceCdlFILE fp;
    int missing;
    int found = 0;
    int i;
    char *name;
    missing = 0;
    for (i = 0; i < n; i++) {
        name = ((char *)files) + ((D_00387240.nent << 3) + ((D_00387240.namelen * i) + i));
        if ((*name) == 0)
            continue;
        func_0016F5E8(name, D_00387368);
        func_0016D5C0(0x9400);
        while (func_00113D78(1) == 1)
            ;

        func_0016D5C0(0x9401);
        func_0016D5C0(0x9500);
        if (func_0016EA10(&fp, D_00387368) == 1) {
            func_0016D5C0(0x9501);
            found++;
            files[i].lsn = fp.lsn;
            files[i].size = fp.size;
            func_00161038("DVCI: \"%s\" found.\n", name);
        } else {
            func_0016D5C0(0x9502);
            missing++;
            func_00161038("DVCI: \"%s\" Not found.\n", name);
        }
    }

    func_00161038("DVCI: Total %d files.\n", found);
    if (missing > 0)
        func_001610B0("DVCI: Warning, Can't load all cache file.%c", 10);
    return found;
}
