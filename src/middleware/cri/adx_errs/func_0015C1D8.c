/* compiler: ee-gcc-2.96-G0 */
/* CRI AFS partition loading, adapted from crashbashash/DW4_Decomp src/cri/adxf.c. See
 * THIRD_PARTY.md. */
#include "pes6/cri_afs_partition.h"

typedef struct AdxfHandle AdxfHandle;
extern int D_00378B10, D_00378B0C, D_00378B04, D_00378B1C;
extern void *D_00378B18;
extern AdxfHandle *D_00378B08;
extern AdxfPtInfo *D_003785D8[];
extern void func_0015B478(const char *message), adxf_Close(AdxfHandle *);
extern int func_0015B998(int, AdxfPtInfo *), func_0015E080(int, int, char *, void **, int *, int *),
    adxf_ReadNw(AdxfHandle *, int, void *);
extern AdxfHandle *adxf_OpenAfs(int, int), *func_0015CDC8(const char *, void *, int, int);
extern char *strncpy(char *, const char *, unsigned int);
extern void *memset(void *, int, unsigned int);
extern const char D_003C7E00[]; /* E1110701:'tmpbuf' is null.(load partition) */
extern const char D_003C7E88[]; /* E9040804:can't open file.(load partition) */
extern const char D_003C7E58[]; /* E0042401:multi-load partition.(load partition) */
extern const char D_003C7E30[]; /* E1110702:'tbsize' <= 0.(load partition) */
extern const char D_003C7DC0[]; /* E20040917 : It is impossible to load AFS files in parallel. */
int func_0015C1D8(int ptid, int afsid, int flid, const char *fname, void *dir, int ofst, int nsct,
                  AdxfPtInfo *ptinfo, void *tmpbuf, int tbsize, int fmglong) {
    int ret;
    int startSector;
    int sectorCount;
    int fileSize;

    if (D_00378B10 == 2) {
        func_0015B478(D_003C7DC0);
        return -1;
    }
    if (D_00378B08 != 0) {
        adxf_Close(D_00378B08);
        D_00378B08 = 0;
    }
    D_00378B0C = -1;
    D_00378B10 = 1;
    if (tmpbuf == 0) {
        func_0015B478(D_003C7E00);
        D_00378B10 = 4;
        return -3;
    }
    if (tbsize <= 0) {
        func_0015B478(D_003C7E30);
        D_00378B10 = 4;
        return -3;
    }
    ret = func_0015B998(ptid, ptinfo);
    if (ret < 0) {
        D_00378B10 = 4;
        return ret;
    }
    if (D_00378B0C >= 0) {
        func_0015B478(D_003C7E58);
        D_00378B10 = 4;
        return -1;
    }
    D_00378B10 = 2;
    D_00378B0C = ptid;
    D_00378B04 = 0;
    memset(ptinfo, 0, sizeof(AdxfPtInfo));
    D_003785D8[ptid] = ptinfo;
    ptinfo->next = 0;
    if (fname == 0) {
        D_00378B08 = adxf_OpenAfs(afsid, flid);
        if (D_00378B08 == 0) {
            func_0015B478(D_003C7E88);
            D_00378B10 = 4;
            return -1;
        }
        ret = func_0015E080(afsid, flid, ptinfo->fname, &dir, &startSector, &fileSize);
        if (ret < 0) {
            D_00378B10 = 4;
            return ret;
        }
        ptinfo->base = startSector;
    } else {
        D_00378B08 = func_0015CDC8(fname, dir, ofst, nsct);
        if (D_00378B08 == 0) {
            func_0015B478(D_003C7E88);
            D_00378B10 = 4;
            return -1;
        }
        strncpy(ptinfo->fname, fname, 256);
        ptinfo->base = ofst;
    }
    ptinfo->longSectorCounts = fmglong;
    ptinfo->type = 0;
    sectorCount = tbsize / 2048;
    ptinfo->curdir = dir;
    D_00378B18 = tmpbuf;
    D_00378B1C = sectorCount;
    ret = adxf_ReadNw(D_00378B08, sectorCount, tmpbuf);
    if (ret < 0) {
        adxf_Close(D_00378B08);
        D_00378B10 = 4;
        return ret;
    }
    ptinfo->nfile = 0;
    return 0;
}
