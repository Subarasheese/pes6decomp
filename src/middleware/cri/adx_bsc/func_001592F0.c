/* compiler: ee-gcc-2.96-G0 */
/* Raikaru/Persona4-Decompilation, src/cri/re4/adx_bsps.c (ADXB_DecodeHeaderSpsd). See
 * THIRD_PARTY.md. */

typedef unsigned char Uint8;
typedef signed char Sint8;
typedef signed short Sint16;
typedef signed int Sint32;
typedef struct ADXPD_OBJ *ADXPD;
typedef struct {
    Sint16 used;
    Sint16 x02;
    Sint32 stat;
    ADXPD pd;
    Sint8 x0c;
    Sint8 bps;
    Sint8 nch;
    Sint8 x0f;
    Sint32 fmt;
    Sint32 sfreq;
    Sint32 total_nsmpl;
    Sint16 x1c;
    Uint8 pad1e[2];
    Sint32 x20;
    Sint16 x24;
    Sint16 x26;
    Sint32 x28;
    Sint32 x2c;
    Sint32 x30;
    Sint32 x34;
    Sint32 x38;
    Sint32 x3c;
    Sint32 x40;
    Sint32 x44;
    Sint16 *inbuf;
    Sint32 inbuf_nsmpl;
    Sint32 out_nch;
    Sint32 x54;
    Sint32 out_fmt;
    Sint16 *pcmbuf;
    Sint32 pcmbuf_nsmpl;
    Sint32 pcmbuf_chofst;
    Sint32 wr_pos;
    Sint32 wr_nsmpl;
    Sint32 wr_x70;
    Sint32 x74;
    void (*getwr_func)(void *obj, Sint32 *pos, Sint32 *nsmpl, Sint32 *x70);
    void *getwr_obj;
    void (*addwr_func)(void *obj, Sint32 nbyte, Sint32 nsmpl);
    void *addwr_obj;
    Sint32 x88;
    Sint32 x8c;
    Sint32 dec_nsmpl;
    Sint32 dec_nbyte;
    Sint16 x98;
    Sint16 x9a;
    Sint16 x9c;
    Uint8 pad9e[2];
    Sint16 key[3];
    Sint16 extprm[3];
    Sint16 dly[2][2];
    void *ahx;
    Sint32 nsmpl;
    Sint32 nsmpl96;
    Uint8 padc0[0xCC - 0xC0];
    Sint32 ainf_len;
    Uint8 ainf[16];
    Sint16 def_outvol;
    Sint16 def_pan[2];
    Uint8 padda[2];
    void *xdc;
    Uint8 pade0[8];
    Sint32 cb_nbyte;
    Sint32 xec;
    void (*cb_func)(void *obj, Sint32 nbyte, Sint32 nsmpl);
    void *cb_obj;
} ADXB_OBJ;
typedef ADXB_OBJ *ADXB;
extern Sint32 func_001591D0(Uint8 *buf, Sint32 bsize, Sint16 *hdrlen, Sint8 *x0c, Sint8 *bps,
                            Sint8 *x0f, Sint8 *nch, Sint32 *sfreq, Sint32 *nsmpl, Sint32 *fmt,
                            Sint16 *x9c);

Sint32 func_001592F0(ADXB adxb, void *buf, Sint32 bsize) {
    Sint16 hdrlen;
    adxb->x02 = 1;
    if (func_001591D0(buf, bsize, &hdrlen, &adxb->x0c, &adxb->bps, &adxb->x0f, &adxb->nch,
                      &adxb->sfreq, &adxb->total_nsmpl, &adxb->fmt, &adxb->x9c) < 0) {
        return 0;
    }
    adxb->x1c = 0;
    adxb->x26 = 0;
    adxb->x24 = 0;
    adxb->x34 = 0;
    adxb->x30 = 0;
    adxb->x2c = 0;
    adxb->x28 = 0;
    adxb->x20 = 0;
    adxb->out_nch = adxb->nch;
    adxb->x54 = adxb->x0f;
    adxb->out_fmt = adxb->fmt;
    adxb->pcmbuf = (Sint16 *)adxb->x3c;
    adxb->pcmbuf_nsmpl = adxb->x40;
    adxb->pcmbuf_chofst = adxb->x44;
    adxb->x8c = 0;
    adxb->x88 = 0;
    adxb->x98 = 2;
    return hdrlen;
}
