/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxf.c (ADXF_LoadPartitionEx). See THIRD_PARTY.md. */

typedef struct AdxfPtInfo AdxfPtInfo;
extern void func_00160810(void);
struct AdxfPtInfo {
    AdxfPtInfo *next;
    int size;
    int nfile;
    unsigned short nentry;
    signed char type;
    signed char rev;
    char fname[256];
    void *curdir;
    int base;
    unsigned int top;
};
extern void func_0015B968(void);
extern int func_0015BBB8(int ptid, const char *fname, void *dir, AdxfPtInfo *ptinfo);
extern int func_0015C588(int ptid);

int func_0015BAD0(int ptid, const char *fname, void *dir, AdxfPtInfo *ptinfo) {
    int result = func_0015BBB8(ptid, fname, dir, ptinfo);
    int status;
    if (result < 0) {
        return result;
    }
    for (;;) {
        status = func_0015C588(ptid);
        if (status == 3) {
            result = 0;
            break;
        }
        if (status == 4) {
            result = -1;
            break;
        }
        func_00160810();
        func_0015B968();
    }

    return result;
}
