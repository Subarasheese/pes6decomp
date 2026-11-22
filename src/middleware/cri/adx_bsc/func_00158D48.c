/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxb.c (ADXB_EndDecode). See THIRD_PARTY.md. */

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
extern int func_0016A168(AdxPdObj *pd);
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
extern void ADXB_CopyExtraBufSte(short *buffer, int offset, int second, int count);
extern void func_00158D28(short *buffer, int offset, int unused, int count);

void func_00158D48(AdxbObj *d) {
    AdxDecPara *b = &d->dp;
    int blk;
    int nch;
    int t;
    int r;
    int q;
    int done;
    int n;
    int pos;
    int size;
    int a;
    int blklen;
    short *dst;
    blk = b->blknsmpl;
    t = (b->lp_nsmpl + blk) - 1;
    size = d->pcmbsize;
    dst = b->pcmbuf;
    a = d->pcmbdist;
    blklen = b->blksize;
    q = t / blk;
    r = (blk - (t % blk)) - 1;
    pos = b->wpos;
    done = func_0016A168(d->xpd);
    nch = b->nch;
    n = (done * blk) / nch;
    n = (done < (q * nch)) ? (n) : (n - r);
    pos += n;
    d->ndeclen = done * blklen;
    d->ndecsmpl = n;
    if (pos >= size) {
        pos -= size;
        if ((b->nch == 2) || (d->pl2 != 0)) {
            ADXB_CopyExtraBufSte(dst, size, a, pos);
        } else {
            func_00158D28(dst, size, a, pos);
        }
    }
}
