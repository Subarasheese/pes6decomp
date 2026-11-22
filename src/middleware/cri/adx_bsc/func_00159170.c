/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxb.c (ADXB_ExecServer). See THIRD_PARTY.md. */

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
extern AdxbObj D_00377028[16];
extern void func_00159020(AdxbObj *v);
void func_00159170(void) {
    AdxbObj *slot = D_00377028;
    int remaining = 15;
    do {
        if (slot->used == 1) {
            func_00159020(slot);
        }
        remaining--;
        slot++;
    } while (remaining >= 0);
}
