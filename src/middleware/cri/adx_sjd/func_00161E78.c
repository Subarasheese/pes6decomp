/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxsjd.c (adxsjd_decexec_start). See THIRD_PARTY.md. */

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
extern void SJ_SplitChunk(SfdSjChunk *ck, int nbyte, SfdSjChunk *head, SfdSjChunk *rest);
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
extern int func_001585A0(AdxbObj *adxb);
extern void func_00158938(AdxbObj *adxb, char *data, int len);
extern void func_001589B8(AdxbObj *adxb);
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
extern int func_0015A9C8(unsigned char *hdr, int size, short *ofst);
extern int func_00162A68(AdxSjdObj *sjd);
extern int func_00162A98(AdxSjdObj *sjd);
void func_00161E78(AdxSjdObj *sjd) {
    AdxbObj *adxb;
    SfdSj *sji;
    SfdSjChunk rest;
    short ofst;
    int i;
    int len;
    int found;
    adxb = sjd->adxb;
    sji = sjd->sji;
    if (((sjd->dtrpsmpl >= 0) && (sjd->dtrpcnt >= sjd->dtrpsmpl)) && (sjd->dtrpfunc != 0)) {
        sjd->dtrpfunc(sjd->dtrpobj);
    }
    if ((sjd->empty_end == 1) && (sji->vtbl->getNumData(sji, 1) == 0)) {
        sjd->stat = ADXSJD_STAT_DECEND;
        return;
    }
    sji->vtbl->getChunk(sji, 1, 0x7fffffff, &sjd->cki);
    if (((func_001585A0(adxb) == 0) && (sjd->cki.len >= 4)) &&
        (((unsigned short)(((*((unsigned short *)sjd->cki.data)) << 8) |
                           ((unsigned char *)sjd->cki.data)[1])) == 0x8001)) {
        sjd->stat = ADXSJD_STAT_DECEND;
        if (func_0015A9C8(sjd->cki.data, sjd->cki.len, &ofst) == 0) {
            if (sjd->cki.len < ofst) {
                sji->vtbl->ungetChunk(sji, 1, &sjd->cki);
                return;
            }
            SJ_SplitChunk(&sjd->cki, ofst, &sjd->cki, &rest);
            sji->vtbl->putChunk(sji, 0, &sjd->cki);
            sji->vtbl->ungetChunk(sji, 1, &rest);
        }
        if (sjd->lnksw != 0) {
            for (;;) {
                sji->vtbl->getChunk(sji, 1, 0x7fffffff, &sjd->cki);
                len = sjd->cki.len;
                if (len == 0) {
                    break;
                }
                for (i = 0; i < sjd->cki.len; i++) {
                    if (sjd->cki.data[i] != 0) {
                        break;
                    }
                }

                found = i < len;
                SJ_SplitChunk(&sjd->cki, i, &sjd->cki, &rest);
                sji->vtbl->putChunk(sji, 0, &sjd->cki);
                sji->vtbl->ungetChunk(sji, 1, &rest);
                if (found) {
                    break;
                }
            }
        }
        return;
    }
    if (sjd->decpos >= func_00162A98(sjd)) {
        sjd->stat = ADXSJD_STAT_DECEND;
        sji->vtbl->ungetChunk(sji, 1, &sjd->cki);
        return;
    }
    if (func_00162A68(sjd) > (sjd->sjo[0]->vtbl->getNumData(sjd->sjo[0], 0) / 2)) {
        sji->vtbl->ungetChunk(sji, 1, &sjd->cki);
        return;
    }
    if (func_001585A0(adxb) == 10) {
        sji->vtbl->ungetChunk(sji, 1, &sjd->cki);
    }
    if (func_001585A0(adxb) == 15) {
        sji->vtbl->ungetChunk(sji, 1, &sjd->cki);
    }
    func_00158938(adxb, sjd->cki.data, sjd->cki.len);
    func_001589B8(adxb);
}
