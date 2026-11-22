/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxf.c (ADXF_GetFnameRangeEx). See THIRD_PARTY.md. */

typedef unsigned int size_t;
extern char *strncpy(char *, const char *, size_t);
typedef struct AdxfPtInfo AdxfPtInfo;
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
extern AdxfPtInfo *D_003785D8[256];
extern int func_0015DEE0(unsigned int ptid, int flid);
int func_0015E080(int ptid, int flid, char *fname, void **dir, int *ofst, int *nsct) {
    AdxfPtInfo *ptinfo;
    int ret;
    int off;
    int i;
    ret = func_0015DEE0(ptid, flid);
    if (ret < 0) {
        *dir = 0;
        *ofst = -1;
        *nsct = -1;
        return ret;
    }
    ptinfo = D_003785D8[ptid];
    if (ptinfo->rev == 1) {
        unsigned int *tbl = &ptinfo->top;
        off = *(tbl++);
        for (i = 0; i < flid; i++) {
            off += tbl[i];
        }

        *nsct = tbl[flid];
    } else {
        unsigned short *tbl = (unsigned short *)(&ptinfo->top);
        off = *(tbl++);
        for (i = 0; i < flid; i++) {
            off += tbl[i];
        }

        *nsct = tbl[flid];
    }
    strncpy(fname, ptinfo->fname, 256);
    *dir = ptinfo->curdir;
    *ofst = ptinfo->base + off;
    return ret;
}
