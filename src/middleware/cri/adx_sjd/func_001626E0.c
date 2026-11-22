/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxsjd.c (adxsjd_discard_proc). See THIRD_PARTY.md. */

typedef struct AdxPdObj {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj;
typedef struct SfdSj SfdSj;
typedef struct SfdSjChunk {
    char *data;
    int len;
} SfdSjChunk;
typedef struct SfdSjVtbl {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj *sj);
    int (*getUuid)(SfdSj *sj);
    void (*reset)(SfdSj *sj);
    void (*getChunk)(SfdSj *sj, int id, int n, SfdSjChunk *ck);
    void (*ungetChunk)(SfdSj *sj, int id, SfdSjChunk *ck);
    void (*putChunk)(SfdSj *sj, int id, SfdSjChunk *ck);
    int (*getNumData)(SfdSj *sj, int id);
} SfdSjVtbl;
struct SfdSj {
    SfdSjVtbl *vtbl;
};
typedef struct AdxDecPara {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara;
typedef struct AdxbObj AdxbObj;
typedef short *(*AdxbGetWrFunc)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc)(void *obj, int nbyte, int nsmpl);
struct AdxbObj {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara dp;
    AdxbGetWrFunc getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int rsv;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
typedef struct AdxSjdObj {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj *adxb;
    SfdSj *sji;
    SfdSj *sjo[2];
    SfdSjChunk cki;
    SfdSjChunk cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj;
void func_001626E0(AdxSjdObj *sjd) {
    SfdSjChunk ck;
    int i;
    int n;
    int half;
    n = sjd->skip * 2;
    for (i = 0; i < sjd->maxnch; i++) {
        sjd->sjo[i]->vtbl->getChunk(sjd->sjo[i], 1, 0x7fffffff, &ck);
        if (ck.len <= n) {
            n = ck.len;
        }
        sjd->sjo[i]->vtbl->ungetChunk(sjd->sjo[i], 1, &ck);
    }

    half = n / 2;
    n = half * 2;
    if (n <= 0) {
        return;
    }
    for (i = 0; i < sjd->maxnch; i++) {
        sjd->sjo[i]->vtbl->getChunk(sjd->sjo[i], 1, n, &ck);
        sjd->sjo[i]->vtbl->putChunk(sjd->sjo[i], 0, &ck);
    }

    sjd->skip -= half;
}
