/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxsjd.c (ADXSJD_Create). See THIRD_PARTY.md. */

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
extern char *func_00177A18(SfdSj *sj);
extern int func_00177A20(SfdSj *sj);
extern int func_00177A28(SfdSj *sj);
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
extern AdxbObj *func_00157F00(int nch, short *buf, int bsize, int bdist);
extern void func_00158578(AdxbObj *adxb, AdxbGetWrFunc func, void *obj);
enum AdxSjdStat {
    ADXSJD_STAT_STOP = 0,
    ADXSJD_STAT_DECHDR = 1,
    ADXSJD_STAT_DECODE = 2,
    ADXSJD_STAT_DECEND = 3,
    ADXSJD_STAT_ERROR = 4
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
extern AdxSjdObj D_00383280[16];
extern void func_00161708(AdxSjdObj *sjd);
extern short *D_00161D58(void *obj, int *offset, int *room, int *until_trap);
AdxSjdObj *func_00161748(SfdSj *sji, int nch, SfdSj **sjo) {
    AdxSjdObj *sjd;
    SfdSj *sj0;
    void *buf;
    int bsize;
    int xsize;
    int i;
    int ch;
    sj0 = sjo[0];
    for (i = 0; i < 16; i++) {
        if (D_00383280[i].used == 0) {
            break;
        }
    }

    if (i == 16) {
        return 0;
    }
    sjd = &D_00383280[i];
    buf = func_00177A18(sj0);
    bsize = func_00177A20(sj0) / 2;
    xsize = func_00177A28(sj0) / 2;
    sjd->adxb = func_00157F00(nch, buf, bsize, bsize + xsize);
    if (sjd->adxb == 0) {
        return 0;
    }
    func_00158578(sjd->adxb, D_00161D58, sjd);
    sjd->sji = sji;
    sjd->maxnch = nch;
    for (ch = 0; ch < nch; ch++) {
        sjd->sjo[ch] = sjo[ch];
    }

    sjd->stat = ADXSJD_STAT_STOP;
    func_00161708(sjd);
    sjd->dtrpfunc = 0;
    sjd->dtrpobj = 0;
    sjd->dfltfunc = 0;
    sjd->dfltobj = 0;
    sjd->used = 1;
    return sjd;
}
