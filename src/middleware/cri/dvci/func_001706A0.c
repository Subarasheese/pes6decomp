/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/htci.c (htCiIsExistFileOnHost). See THIRD_PARTY.md. */

extern void func_0016D5C0(int value);
extern int func_0016D8D0(const char *name, int flags);
extern int func_0016D938(int fd);
typedef struct HtCiFileLoc {
    int fd;
    int size;
} HtCiFileLoc;
extern char D_003876D0[304];
extern void func_00171248(const char *name, char *out);
extern void func_00171B40(const char *name, HtCiFileLoc *loc);
int func_001706A0(const char *name) {
    HtCiFileLoc loc;
    int fd;
    if (name == 0) {
        return 0;
    }
    func_00171B40(name, &loc);
    if (loc.size == 0) {
        func_00171248(name, D_003876D0);
        func_0016D5C0(0x4200);
        fd = func_0016D8D0(D_003876D0, 1);
        func_0016D5C0(0x4201);
        if (fd < 0) {
            return 0;
        }
        func_0016D5C0(0x4300);
        func_0016D938(fd);
        func_0016D5C0(0x4301);
    }
    return 1;
}
