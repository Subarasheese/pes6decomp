/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxaiff.c (ADXB_DecodeHeaderAiff). See THIRD_PARTY.md. */

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
enum {
    ADXB_FORMAT_ADX = 0,
    ADXB_FORMAT_WAV = 1,
    ADXB_FORMAT_SPSD = 2,
    ADXB_FORMAT_AIFF = 3,
    ADXB_FORMAT_AU = 4,
    ADXB_FORMAT_AHX = 10,
    ADXB_FORMAT_AC3 = 15
};
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
enum AdxbAiffFmt { ADXB_AIFF_PCM_16 = 0, ADXB_AIFF_PCM_8 = 1 };
extern int ADX_DecodeInfoAiff(unsigned char *buf, int len, short *hdrlen, signed char *hdrtype,
                              signed char *fmtbps, signed char *blklen, signed char *nch,
                              int *sfreq, int *nsmpl, int *blksmpl);
int func_00156C28(AdxbObj *adxb, unsigned char *hdr, int size) {
    short hdrlen;
    adxb->hdcdflag = 1;
    if (ADX_DecodeInfoAiff(hdr, size, &hdrlen, &adxb->code, &adxb->bps, &adxb->blklen, &adxb->nch,
                           &adxb->sfreq, &adxb->total_nsmpl, &adxb->blknsmpl) < 0) {
        return 0;
    }
    adxb->lp_eofst = 0;
    adxb->lp_epos = 0;
    adxb->lp_sofst = 0;
    adxb->lp_spos = 0;
    adxb->lp_ins_nsmpl = 0;
    adxb->cof = 0;
    adxb->lp_type = 0;
    adxb->nloop = 0;
    adxb->dp.nch = adxb->nch;
    adxb->dp.blksize = adxb->blklen;
    adxb->dp.pcmbuf = adxb->pcmbuf;
    adxb->fmttype = ADXB_FORMAT_AIFF;
    adxb->dp.blknsmpl = adxb->blknsmpl;
    adxb->curwpos = 0;
    adxb->dp.pcmbsize = adxb->pcmbsize;
    adxb->total_ndecsmpl = 0;
    adxb->dp.pcmbdist = adxb->pcmbdist;
    if (adxb->bps == 8) {
        adxb->cdctype = ADXB_AIFF_PCM_8;
    } else {
        adxb->cdctype = ADXB_AIFF_PCM_16;
    }
    return hdrlen;
}
