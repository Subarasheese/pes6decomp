#ifndef PES6_CRI_AFS_PARTITION_H
#define PES6_CRI_AFS_PARTITION_H

/* CRI AFS partition layout adapted from DW4_Decomp. See THIRD_PARTY.md. */

typedef struct AdxfPtInfo AdxfPtInfo;
struct AdxfPtInfo {
    AdxfPtInfo *next;
    int size;
    int nfile;
    unsigned short nentry;
    signed char type;
    /* File table sector counts occupy 32 bits when set and 16 bits when clear. */
    signed char longSectorCounts;
    char fname[256];
    void *curdir;
    int base;
    unsigned int top;
};

extern int func_0015C1D8(int ptid, int afsid, int flid, const char *fname, void *dir, int ofst,
                         int nsct, AdxfPtInfo *ptinfo, void *tmpbuf, int tbsize, int fmglong);

#endif
