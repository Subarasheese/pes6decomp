#ifndef PES6_CRI_STREAM_CACHE_H
#define PES6_CRI_STREAM_CACHE_H

/* CRI stream cache records, from DW4_Decomp src/cri/lsc.c. See THIRD_PARTY.md. */
typedef struct SfdSj SfdSj;
typedef struct SfdSjChunk {
    char *data;
    int len;
} SfdSjChunk;

typedef struct LscStm {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm;

typedef struct LscObj {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj *sj;
    SfdSjChunk ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm stms[16];
} LscObj;

extern void LSC_CallErrFunc(const char *format, ...);

#endif
