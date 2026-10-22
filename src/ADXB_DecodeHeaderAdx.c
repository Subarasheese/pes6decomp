/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from Persona4 (src/cri/re4/adx_bsc.c). */
typedef unsigned char Uint8;
typedef signed char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef unsigned long long Uint64;
typedef signed long long Sint64;
typedef float Float32;
typedef double Float64;
typedef char Char8;
typedef Sint32 Bool;
typedef struct SJ_OBJ *SJ;
typedef struct {
        Uint8 *data;
        Sint32 len;
} SJCK;
typedef struct {
        Uint8 data[16];
} SJUUID;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ sj);
        const SJUUID *(*GetUuid)(SJ sj);
        void (*Reset)(SJ sj);
        void (*GetChunk)(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);
        void (*UngetChunk)(SJ sj, Sint32 id, SJCK *ck);
        void (*PutChunk)(SJ sj, Sint32 id, SJCK *ck);
        Sint32 (*GetNumData)(SJ sj, Sint32 id);
        Sint32 (*IsGetChunk)(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);
        void (*EntryErrFunc)(SJ sj, void (*func)(void *obj, Char8 *msg), void *obj);
} SJ_IF;
struct SJ_OBJ {
        SJ_IF *vtbl;
};
SJ SJRBF_Create(void *buf, Sint32 bsize, Sint32 xsize);
SJ SJMEM_Create(void *buf, Sint32 bsize);
void SJCRS_Lock(void);
void SJCRS_Unlock(void);
void SJERR_CallErr(Char8 *msg);
void *SJ_SearchTag(SJCK *inf, const Char8 *tag, const Char8 *name, SJCK *out);
void SJ_SplitChunk(SJCK *src, Sint32 n, SJCK *a, SJCK *b);
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
Sint32 ADXPD_GetStat(ADXPD pd);
Sint32 ADXB_CheckSpsd(void *buf);
void ADXB_ExecOneSpsd(ADXB adxb);
Sint32 ADXB_DecodeHeaderSpsd(ADXB adxb, void *buf, Sint32 bsize);
Sint32 ADX_DecodeInfoSpsd(Uint8 *buf, Sint32 bsize, Sint16 *hdrlen, Sint8 *x0c, Sint8 *bps, Sint8 *x0f,
                          Sint8 *nch, Sint32 *sfreq, Sint32 *nsmpl, Sint32 *fmt, Sint16 *x9c);
extern void ADXB_ExecOneAhx(ADXB adxb);
extern void ADXB_ExecOneAiff(ADXB adxb);
extern void ADXB_ExecOneAu(ADXB adxb);
extern void ADXB_ExecOneWav(ADXB adxb);
extern Sint32 ADXB_CheckWav(void *buf);
extern Sint32 ADXB_CheckAiff(void *buf);
extern Sint32 ADXB_CheckAu(void *buf);
extern Sint32 ADXB_DecodeHeaderWav(ADXB adxb, void *buf, Sint32 bsize);
extern Sint32 ADXB_DecodeHeaderAiff(ADXB adxb, void *buf, Sint32 bsize);
extern Sint32 ADXB_DecodeHeaderAu(ADXB adxb, void *buf, Sint32 bsize);
extern void ADXCRS_Lock(void);
extern void ADXCRS_Unlock(void);
extern void func_0015B4D0(const Char8 *msg1, const Char8 *msg2);
extern void ADXPD_ExecHndl(ADXPD pd);
extern Sint32 ADXPD_GetNumBlk(ADXPD pd);
extern void ADXPD_Reset(ADXPD pd);
extern void ADXPD_Stop(ADXPD pd);
extern void ADXPD_Start(ADXPD pd);
extern Sint32 ADXPD_EntryPl2(ADXPD pd, void *in, Sint32 nblk, Sint16 *out0, Sint16 *out1);
extern Sint32 ADXPD_EntrySte(ADXPD pd, void *in, Sint32 nblk, Sint16 *out0, Sint16 *out1);
extern Sint32 ADXPD_EntryMono(ADXPD pd, void *in, Sint32 nblk, Sint16 *out0, Sint16 *out1);
extern void ADXPD_Destroy(ADXPD pd);
extern void func_004d89b0(ADXPD pd, Sint16 *e1, Sint16 *e2, Sint16 *e3);
extern void func_0016A000(ADXPD pd, Sint16 e1, Sint16 e2, Sint16 e3);
extern void ADXPD_GetDly(ADXPD pd, Sint16 *d0, Sint16 *d1);
extern void func_00169FB0(ADXPD pd, Sint16 *d0, Sint16 *d1);
extern void func_00169F88(ADXPD pd, Sint32 sfreq, Sint32 cutoff);
extern ADXPD ADXPD_Create(void);
extern void func_004d8830(void);
extern Sint32 ADX_DecodeInfo(Uint8 *data, Sint32 len, Sint16 *hdrlen, Sint8 *fmt, Sint8 *bps, Sint8 *blksiz,
                             Sint8 *nch, Sint32 *sfreq, Sint32 *nsmpl, Sint32 *blksmpl);
extern Sint32 func_0015A2D0(Uint8 *data, Sint32 len, Uint8 *major, Uint8 *minor);
extern Sint32 func_0015A250(Uint8 *data, Sint32 len, Uint16 *cutoff);
extern Sint32 func_0015A348(Uint8 *data, Sint32 len, Uint16 *idly, Uint16 *idly2);
extern Sint32 func_0015A548(Uint8 *data, Sint32 len, Sint32 *lptype, Sint16 *nloop, Sint16 *lpflg,
                                   Sint32 *lpstart, Sint32 *lpstartofst, Sint32 *lpend, Sint32 *lpendofst);
extern Sint32 func_0015A7A8(Uint8 *data, Sint32 len, Sint32 *ainfsiz, void *ainf, Sint16 *a, Sint16 *b);
extern void *memset(void *dst, int c, Uint32 n);
extern int sprintf(char *dst, const char *fmt, ...);
void D_00157F20(ADXB adxb);
void D_00158280(ADXB adxb);
Sint32 ADXB_DecodeHeaderAdx(ADXB adxb, Uint8 *buf, Sint32 bsize);
void D_00158BF8(ADXB adxb);
void D_00158D78(void *obj, Sint32 nbyte, Sint32 nsmpl);
Sint16 *D_00158D98(void *obj, Sint32 *pos, Sint32 *nsmpl, Sint32 *x70);
typedef struct ADXPD_OBJ {
        Uint8 pad0[0x10];
        Sint32 nblk;
        Uint8 pad14[0x20 - 0x14];
        Sint16 *out0;
        Sint16 *out1;
} ADXPD_OBJ;extern const Char8 D_003C7408[];
extern const Sint16 D_003C7438[1024];
extern Sint32 D_00377004;
extern void (*D_00377008)(void *obj, const Char8 *msg);
extern void *D_0037700C;
extern Sint32 skg_dmy[2];
void D_00157B80(void);
void func_00157B98(void);
void D_00157BB8(void (*func)(void *obj, const Char8 *msg), void *obj);
const Char8 *D_00157BD0(void);
void D_00157BE0(Sint32 a, Sint32 b);
Sint32 D_00157BF8(Sint32 nsmpl, Sint16 *k0, Sint16 *km, Sint16 *ka);
extern void (*D_00377010)(void *ahx, Sint16 *key);
extern void (*D_00377014)(ADXB adxb, Sint16 smpl, Sint16 *in, Sint16 *out);
extern void (*D_00377018)(ADXB adxb);
extern Sint16 D_0037701C;
extern Sint16 D_0037701E;
extern Sint16 D_00377020;
extern ADXB_OBJ D_00377024[16];
void D_00157DA0(void (*func)(void *ahx, Sint16 *key));
void D_00157DB0(void (*encode)(ADXB adxb, Sint16 smpl, Sint16 *in, Sint16 *out), void (*reset)(ADXB adxb));
void D_00157DC8(Sint16 k0, Sint16 km, Sint16 ka);
void D_00157DE8(ADXB adxb);
void D_00157EE8(Sint16 *dst, Sint16 *src, Sint32 n);
void D_00157F20(ADXB adxb);
void D_00158190(void *obj, Sint32 n);
void D_001581E8(void *obj, Sint32 n);
void D_00158238(void *obj, Sint32 n);
void D_00158280(ADXB adxb);
Sint32 D_00158390(ADXB adxb);
Sint32 D_00158398(ADXB adxb);
void D_001583A0(ADXB adxb);
void D_001583E0(ADXB adxb);
void D_00158428(ADXB adxb);
void D_00158440(ADXB adxb, Sint16 *buf, Sint32 nbyte);
Sint32 D_001584C0(ADXB adxb);
void D_001584C8(ADXB adxb);
void D_00158508(ADXB adxb);
Sint16 D_00158548(ADXB adxb, Sint32 ch);
Sint16 D_00158558(ADXB adxb);
Sint32 D_00158560(ADXB adxb);
Sint32 D_00158568(ADXB adxb);
Sint32 D_00158570(ADXB adxb);
Sint32 func_00158578(ADXB adxb);
Sint32 D_00158590(ADXB adxb);
Sint16 func_00158598(ADXB adxb);
Sint32 func_001585A0(ADXB adxb);
Sint32 func_001585A8(ADXB adxb);
Sint32 func_001585B0(ADXB adxb);
Sint32 D_00158610(ADXB adxb);
Sint32 D_00158640(ADXB adxb);
Sint16 func_00158648(ADXB adxb);
Sint16 *func_00158650(ADXB adxb);
void func_00158658(ADXB adxb, void (*func)(void *obj, Sint32 *pos, Sint32 *nsmpl, Sint32 *x70), void *obj);
Sint32 func_00158668(ADXB adxb, void *buf, Sint32 bsize);
void D_00158790(ADXB adxb);
Sint32 func_00158830(ADXB adxb, Uint8 major, Uint8 minor, Sint32 nsmpl, Sint16 *k0, Sint16 *km, Sint16 *ka);

Sint32 ADXB_DecodeHeaderAdx(ADXB adxb, Uint8 *buf, Sint32 bsize)
{
        Sint16 hdrlen;
        Uint8 major;
        Uint8 minor;
        Sint16 idly[2];
        Sint16 idly2[2];
        Sint16 key[4];
        Sint16 k0;
        Sint16 km;
        Sint16 ka;
        Sint32 err;
        adxb->x02 = 1;
        if (ADX_DecodeInfo(buf, bsize, &hdrlen, &adxb->x0c, &adxb->bps, &adxb->x0f, &adxb->nch, &adxb->sfreq,
                           &adxb->total_nsmpl, &adxb->fmt) < 0) {
                return 0;
        }
        if (adxb->x0c > 4) {
                if (adxb->ahx == 0) {
                        func_0015B4D0("E1060101 ADXB_DecodeHeaderAdx: ", "can't play AHX data by this handle");
                        return -1;
                }
                adxb->bps = 8;
                adxb->x0f = adxb->nch * 0xC0;
                adxb->fmt = 0x60;
                adxb->x98 = 10;
                adxb->x1c = 0;
                adxb->x24 = 0;
                adxb->x26 = 0;
                adxb->x20 = 0;
                adxb->x28 = 0;
                adxb->x2c = 0;
                adxb->x30 = 0;
                adxb->x34 = 0;
                adxb->x88 = 0;
                if (func_0015A2D0(buf, bsize, &major, &minor) < 0) {
                        return 0;
                }
                key[0] = 0;
                err = func_00158830(adxb, major, minor, adxb->total_nsmpl, &key[1], &key[2], &key[3]);
                if (err < 0) {
                        return -1;
                }
                if (D_00377010 != 0) {
                        D_00377010(adxb->ahx, key);
                }
        } else {
                if (func_0015A2D0(buf, bsize, &major, &minor) < 0) {
                        return 0;
                }
                err = func_00158830(adxb, major, minor, adxb->total_nsmpl, &k0, &km, &ka);
                if (err < 0) {
                        return -1;
                }
                func_0016A000(adxb->pd, k0, km, ka);
                if (func_0015A250(buf, bsize, (Uint16 *)&adxb->x1c) < 0) {
                        return 0;
                }
                if (func_0015A348(buf, bsize, (Uint16 *)idly, (Uint16 *)idly2) < 0) {
                        return 0;
                }
                func_00169F88(adxb->pd, adxb->sfreq, adxb->x1c);
                func_00169FB0(adxb->pd, idly, idly2);
                func_0015A548(buf, bsize, &adxb->x20, &adxb->x24, &adxb->x26, &adxb->x28, &adxb->x2c, &adxb->x30,
                                     &adxb->x34);
                func_0015A7A8(buf, bsize, &adxb->ainf_len, adxb->ainf, &adxb->def_outvol, &adxb->def_pan[0]);
                adxb->x98 = 0;
        }
        adxb->out_nch = adxb->nch;
        adxb->x54 = adxb->x0f;
        adxb->out_fmt = adxb->fmt;
        adxb->pcmbuf = (Sint16 *)adxb->x3c;
        adxb->pcmbuf_nsmpl = adxb->x40;
        adxb->pcmbuf_chofst = adxb->x44;
        adxb->x8c = 0;
        return hdrlen;
}
const Char8 *D_00158BE8(void);
void D_00158BF8(ADXB adxb);
ADXB D_00158C40(Sint32 x38, Sint16 *pcmbuf, Sint32 bufsmpl, Sint32 chofst);
void D_00158D78(void *obj, Sint32 nbyte, Sint32 nsmpl);
Sint16 *D_00158D98(void *obj, Sint32 *pos, Sint32 *nsmpl, Sint32 *x70);
void D_00158DC8(void);
