/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libgraph/graph011.c (sceGsSyncV). See LICENSES/ico-MIT.txt. */
typedef struct {
    short inter;
    short omode;
    short ffmd;
    short version;
    int intcUsed;
    int handler;
} sceGsGParam;
extern sceGsGParam *sceGsGetGParam(void);
extern void func_001057F0(void);
extern long long func_00105880(void);

int func_001010F8(int mode) {
    sceGsGParam *gp = sceGsGetGParam();
    long c;
    if (gp->intcUsed == 0) {
        func_001057F0();
        if (gp->inter != 1) {
            return 1;
        }
        return (int)(((*((volatile unsigned long *)0x12001000)) >> 13) & 1);
    }
    c = func_00105880();
    c = (c >> 13) & 1;
    if (gp->inter != 1) {
        return 1;
    }
    return (int)c;
}
