/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxb.c (ADXB_EvokeDecode). See THIRD_PARTY.md. */

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
extern void func_00158A80(AdxbObj *obj, int n);
extern void func_00158AD0(AdxbObj *obj, int n);
extern void func_00158B28(AdxbObj *obj, int n);

void func_00158B80(AdxbObj *obj) {
    AdxDecPara *buf = &obj->dp;
    int nblk;
    int size;
    int blksmpl;
    int pos;
    int end;
    int endblk;
    int sizeblk;
    int rest;
    int lim;
    int sizesmpl;
    int n;
    nblk = buf->niblk / buf->nch;
    size = buf->pcmbsize;
    blksmpl = buf->blknsmpl;
    pos = buf->wpos;
    end = buf->lp_nsmpl;
    endblk = ((end + blksmpl) - 1) / blksmpl;
    sizeblk = (((size - pos) + blksmpl) - 1) / blksmpl;
    rest = (blksmpl - (((end + blksmpl) - 1) % blksmpl)) - 1;
    lim = buf->nroom;
    sizesmpl = sizeblk * blksmpl;
    if (endblk < sizeblk) {
        if (((pos + sizesmpl) - rest) < size) {
            sizeblk += 1;
        }
    }
    if (end < lim) {
        lim += rest;
    }
    n = ((lim / blksmpl) < nblk) ? (lim / blksmpl) : (nblk);
    n = (endblk < n) ? (endblk) : (n);
    n = (sizeblk < n) ? (sizeblk) : (n);
    if (buf->nch == 2) {
        func_00158AD0(obj, n);
    } else if (obj->pl2 != 0) {
        func_00158B28(obj, n);
    } else {
        func_00158A80(obj, n);
    }
}
