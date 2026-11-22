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
extern sceGsGParam *func_00192438(void);
extern void func_0019B5B0(void);
extern long long func_0019B640(void);

int func_00193068(int mode) {
    sceGsGParam *gp = func_00192438();
    long c;
    if (gp->intcUsed == 0) {
        func_0019B5B0();
        if (gp->inter != 1) {
            return 1;
        }
        return (int)(((*((volatile unsigned long *)0x12001000)) >> 13) & 1);
    }
    c = func_0019B640();
    c = (c >> 13) & 1;
    if (gp->inter != 1) {
        return 1;
    }
    return (int)c;
}
