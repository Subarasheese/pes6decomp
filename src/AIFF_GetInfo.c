/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from recvx-decomp (src/cri/mwlib/ee/lib/libadxe/adx_baif.c). */
typedef unsigned char Uint8;
typedef signed char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef char Char8;
typedef struct _UUID {
    Uint32 Data1;
    Uint16 Data2;
    Uint16 Data3;
    Uint8 Data4[8];
} UUID;
typedef struct {
        Sint8 *data;
        Sint32 len;
} SJCK;
typedef struct {
        struct _sj_vtbl *vtbl;
} SJ_OBJ;
typedef SJ_OBJ *SJ;
typedef struct _sj_vtbl {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ sj);
        UUID *(*GetUuid)(SJ sj);
        void (*Reset)(SJ sj);
        void (*GetChunk)(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);
        void (*UngetChunk)(SJ sj, Sint32 id, SJCK *ck);
        void (*PutChunk)(SJ sj, Sint32 id, SJCK *ck);
        Sint32 (*GetNumData)(SJ sj, Sint32 id);
        Sint32 (*IsGetChunk)(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);
        void (*EntryErrFunc)(SJ sj,
                                        void (*func)(void *obj, Sint32 ecode), void *obj);
} SJ_IF;
void SJ_SplitChunk(SJCK *ck, Sint32 nbyte, SJCK *ck1, SJCK *ck2);
void SJ_MakeTag(SJCK *ck, char *tag);
void SJ_GetTagContent(Sint8 *tag, SJCK *cko);
Sint8 *SJ_SearchTag(SJCK *cki, Char8 *kw, Char8 *endkw, SJCK *cko);
SJ SJRBF_Create(Sint8 *buf, Sint32 bsize, Sint32 xsize);
SJ SJMEM_Create(Sint8 *data, Sint32 bsize);
SJ SJUNI_Create(Sint32 mode, Sint8 *work, Sint32 wksize);
Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);
typedef struct _adx_xpnd_param
{
        Sint32 nch;
        Sint8 *ibuf;
        Sint32 nblk;
        Sint16 *obuf_l;
        Sint16 *obuf_r;
} ADXPDPRM;
typedef struct _adx_xpdobj
{
        Sint32 used;
        Sint32 xno;
        Sint32 mode;
        Sint32 stat;
        Sint32 ndecblk;
        ADXPDPRM xprm;
        Sint16 dly[2][2];
        Sint16 k[2];
} ADX_XPDOBJ;
typedef ADX_XPDOBJ *ADXPD;
typedef struct _adx_dec_para
{
    Sint8 *ibuf;
    Sint32 niblk;
    Sint32 nch;
        Sint32 blksize;
        Sint32 blknsmpl;
        Sint8 *pcmbuf;
    Sint32 pcmbsize;
    Sint32 pcmbdist;
    Sint32 wpos;
        Sint32 nroom;
        Sint32 lp_nsmpl;
} AdxDecPara;
typedef struct _adx_intbuf
{
    Sint16 used;
    Sint16 hdcdflag;
    Sint32 stat;
    ADXPD xpd;
    Sint8 code;
    Sint8 bps;
    Sint8 nch;
    Sint8 blklen;
    Sint32 blknsmpl;
    Sint32 sfreq;
    Sint32 total_nsmpl;
    Sint16 cof;
    Sint16 rsv1;
    Sint32 lp_ins_nsmpl;
    Sint16 nloop;
    Sint16 lp_type;
    Sint32 lp_spos;
    Sint32 lp_sofst;
    Sint32 lp_epos;
    Sint32 lp_eofst;
    Sint32 maxnch;
    Sint16 *pcmbuf;
    Sint32 pcmbsize;
    Sint32 pcmbdist;
    Sint16 unk48;
    Sint16 unk4A;
    Sint32 unk4C;
    AdxDecPara dp;
    Sint16 unk7C;
    Sint16 unk7E;
    Sint32 unk80;
    Sint32 ndecsmpl;
    void* (*getwrfunc)();
    void *getwrobj;
    void (*addwrfunc)();
    void *addwrobj;
    Sint32 total_ndecsmpl;
    Sint32 curwpos;
    Sint32 total_decsmpl;
    Sint32 total_decdtlen;
    Sint16 fmttype;
    Sint16 cdctype;
} ADX_BASIC;
typedef ADX_BASIC *ADXB;
typedef struct
{
        Sint8 used;
        Sint8 stat;
        Sint8 maxnch;
        Sint8 empty_end;
        ADXB adxb;
        SJ sji;
        SJ sjo[2];
        SJCK cki;
        SJCK cko[2];
        Sint32 total_decsmpl;
        Sint32 total_decdtlen;
        Sint32 decpos;
        Sint32 maxdecsmpl;
        Sint32 dtrpsmpl;
        Sint32 dtrpcnt;
        Sint32 dtrpdtlen;
        void (*dtrpfunc)();
        void *dtrpobj;
        void (*dfltfunc)();
        void *dfltobj;
        Sint8 spsdinfo[64];
        Sint32 hdrlen;
} ADX_SJDEC;
typedef ADX_SJDEC *ADXSJD;
typedef void *ADXSTM;
typedef void *ADXRNA;
typedef struct _adx_talk {
        Sint8 used;
        Sint8 stat;
        Sint8 pmode;
        Sint8 maxnch;
        ADXSJD sjd;
        ADXSTM stm;
        ADXRNA rna;
        SJ sjf;
        SJ sji;
        SJ sjo[(2)];
        Sint8 *ibuf;
        Sint32 ibuflen;
        Sint32 ibufxlen;
        Sint16 *obuf;
        Sint32 obufsize;
        Sint32 obufdist;
        Sint32 svrfreq;
        Sint16 maxsct;
        Sint16 minsct;
        Sint16 outvol;
        Sint16 outpan[(2)];
        Sint32 maxdecsmpl;
        Sint32 lpcnt;
        Sint32 lp_skiplen;
        Sint32 trp;
        Sint32 wpos;
        Sint32 mofst;
        Sint16 ercode;
        Sint32 edecpos;
        Sint16 edeccnt;
        Sint16 eshrtcnt;
        Sint8 lpflg;
        Sint8 autorcvr;
        Sint8 fltmode;
        Sint8 execflag;
        Sint8 pstwait_flag;
        Sint8 pstready_flag;
        Sint8 pause_flag;
        void *amp;
        SJ ampsji[(2)];
        SJ ampsjo[(2)];
        Sint32 time_ofst;
        Sint32 lesct;
        Sint32 trpnsmpl;
        void *lsc;
        Sint8 lnkflg;
        Sint8 rsv;
        Sint16 rsv2;
        Uint32 tvofst;
        Uint32 svcnt;
} ADX_TALK;
typedef ADX_TALK *ADXT;
typedef struct {
        Sint32 fmt;
        Sint32 sfreq;
        Sint32 nch;
        Sint32 bps;
        Sint32 nsmpl;
        Sint32 lptype;
        Sint32 lpstart;
        Sint32 lpend;
} ADXHINFO;
ADXT ADXT_Create(Sint32 maxnch, void *work, Sint32 worksize);
void ADXT_StartAfs(ADXT adxt, Sint32 patid, Sint32 fid);
void ADXT_StartFname(ADXT adxt, Char8 *fname);
void ADXT_StartSj(ADXT adxt, SJ sj);
void ADXT_StartMem(ADXT adxt, void *adxdat);
void ADXT_StartMem2(ADXT adxt, void *adxdat, Sint32 datlen);
void ADXT_StartMemIdx(ADXT adxt, void *acx, Sint32 no);
void ADXT_GetTime(ADXT adxt, Sint32 *ncount, Sint32 *tscale);
void ADXT_SetOutPan(ADXT adxt, Sint32 ch, Sint32 pan);
Sint32 ADXT_GetOutPan(ADXT adxt, Sint32 ch);
void ADXT_SetOutVol(ADXT adxt, Sint32 vol);
void ADXT_SetSvrFreq(ADXT adxt, Sint32 freq);
void ADXT_SetReloadTime(ADXT adxt, float time, Sint32 nch, Sint32 sfreq);
void ADXT_SetReloadSct(ADXT adxt, Sint32 minsct);
Sint32 ADXT_GetNumSmplObuf(ADXT adxt, Sint32 chno);
void ADXT_SetAutoRcvr(ADXT adxt, Sint32 rmode);
void ADXT_SetLpFlg(ADXT adxt, Sint32 flg);
void ADXT_SetWaitPlayStart(ADXT adxt, Sint32 flg);
void ADXT_Pause(ADXT adxt, Sint32 sw);
void ADXT_SetDrctLvl(ADXT adxt, Sint32 drctlvl);
void ADXT_SetFx(ADXT adxt, Sint32 fxch, Sint32 fxlvl);
void ADXT_GetFx(ADXT adxt, Sint32 *fxch, Sint32 *fxlvl);
void ADXT_SetFilter(ADXT adxt, Sint32 coff, Sint32 q);
void ADXT_GetFilter(ADXT adxt, Sint32 *coff, Sint32 *q);
void ADXT_SetTranspose(ADXT adxt, Sint32 transps, Sint32 detune);
void ADXT_GetTranspose(ADXT adxt, Sint32 *transps, Sint32 *detune);
void ADXT_EntryErrFunc(void (*func)(void *obj, Sint8 *msg), void *obj);
Sint32 ADXT_DiscardSmpl(ADXT adxt, Sint32 nsmpl);
void ADXT_GetHdrInfo(Sint8 *buf, Sint32 bsize, ADXHINFO *hinfo);
void ADXT_EntryFltFunc(ADXT adxt,
                void (*f)(void *obj, Sint32 ch, void *data, Sint32 dtlen), void *obj);
void ADXT_EntryFname(ADXT adxt, Char8 *fname);
void ADXT_EntryAfs(ADXT adxt, Sint32 patid, Sint32 fid);
void ADXT_SetSeamlessLp(ADXT adxt, Sint32 flg);
void ADXT_StartFnameLp(ADXT adxt, Char8 *fname);
void ADXT_SetLnkSw(ADXT adxt, Sint32 sw);
void ADXT_SetAmpWork(ADXT adxt, void *work, Sint32 wksize);
Sint32 ADXT_GetAmplitude(ADXT adxt, Sint32 ch);
Sint32 ADXT_GetAmplitude2(ADXT adxt, Sint32 ch, Sint32 msec, Sint32 *msec2);
void ADXT_InsertHdrSfa(ADXT adxt, Sint32 nch, Sint32 sfreq, Sint32 nsmpl);
void ADXT_SetTimeOfst(ADXT adxt, Sint32 ofst);
Sint32 ADXT_InsertSilence(ADXT adxt, Sint32 nch, Sint32 nsmpl);
void ADXT_AttachAhx(ADXT adxt, void *work, Sint32 worksize);
void ADXT_SetKeyString(ADXT adxt, Char8 *str);
void ADXM_SetCbErr(void (*fn)(void *obj, Char8 *emsg), void *obj);
Sint32 ADX_DecodeInfoAiff(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen, Sint8 *code, Sint8 *bps, Sint8 *blksize, Sint8 *nch, Sint32 *sfreq, Sint32 *total_nsmpl, Sint32 *nsmpl_blk);
Sint32 ADXB_DecodeHeaderAiff(ADXB adxb, Sint8 *ibuf, Sint32 ibuflen);
static void* AIFF_GetInfo(void *hdr, Sint32 *sfreq, Sint32 *nch, Sint32 *bps, Sint32 *nsmpl);
Sint32 ADXPD_EntryMono(ADXPD xpd, Sint8 *ibuf, Sint32 nblk, Sint16 *obuf_l);
Sint32 ADXPD_EntrySte(ADXPD xpd, Sint8 *ibuf, Sint32 nblk, Sint16 *obuf_l, Sint16 *obuf_r);
void ADXPD_SetCoef(ADXPD xpd, Sint32 sfreq, Sint32 cof);
void ADXPD_SetMode(ADXPD xpd, Sint32 mode);
static void* AIFF_GetInfo(void *hdr, Sint32 *sfreq, Sint32 *nch, Sint32 *bps, Sint32 *nsmpl)
{
        Uint8 *pdw;
        Uint8 *pdwEnd;
        Sint32 ck_id;
        Sint32 ck_size;
        Sint32 form_type;
        Sint32 comm_ck_flag;
        Sint32 ssnd_ck_flag;
        Uint32 ssnd_ofst;
        void *data;
    Uint32 tmp;
    Sint32 temp, temp2, temp3, temp4;
    ssnd_ck_flag = comm_ck_flag = 0;
    data = ((void *)0);
    pdw = hdr;
    ck_id = (pdw[0 * 4] | (pdw[(0 * 4) + 1] << 8) | (pdw[(0 * 4) + 2] << 16) | (pdw[(0 * 4) + 3] << 24));
    pdw += 4;
    ck_size = (pdw[0 * 4] | (pdw[(0 * 4) + 1] << 8) | (pdw[(0 * 4) + 2] << 16) | (pdw[(0 * 4) + 3] << 24));
    ck_size = (((ck_size >> 24) & 0xFF) | ((ck_size >> 8) & 0xFF00) | ((ck_size << 8) & 0xFF0000) | (ck_size << 24));
    pdw += 4;
    form_type = (pdw[0 * 4] | (pdw[(0 * 4) + 1] << 8) | (pdw[(0 * 4) + 2] << 16) | (pdw[(0 * 4) + 3] << 24));
    pdw += 4;
    if (ck_id != (0x4D524F46))
    {
        return ((void *)0);
    }
    if (form_type != (0x46464941))
    {
        return ((void *)0);
    }
    pdwEnd = (pdw + ck_size) - 4;
    while (pdw < pdwEnd)
    {
        ck_id = (pdw[0 * 4] | (pdw[(0 * 4) + 1] << 8) | (pdw[(0 * 4) + 2] << 16) | (pdw[(0 * 4) + 3] << 24));
        pdw += 4;
        ck_size = (pdw[0 * 4] | (pdw[(0 * 4) + 1] << 8) | (pdw[(0 * 4) + 2] << 16) | (pdw[(0 * 4) + 3] << 24));
        ck_size = (((ck_size >> 24) & 0xFF) | ((ck_size >> 8) & 0xFF00) | ((ck_size << 8) & 0xFF0000) | (ck_size << 24));
        pdw += 4;
        switch (ck_id)
        {
        case (0x4D4D4F43):
            if (comm_ck_flag == 0)
            {
                if (ck_size < 18)
                {
                    return ((void *)0);
                }
                ssnd_ofst = (pdw[0 * 2] | (pdw[(0 * 2) + 1] << 8));
                *nch = (Uint16)(((ssnd_ofst & 0xFF00) >> 8) | ((ssnd_ofst << 8) & 0xFF00));
                pdw += 2;
                temp = (pdw[0 * 4] | (pdw[(0 * 4) + 1] << 8) | (pdw[(0 * 4) + 2] << 16) | (pdw[(0 * 4) + 3] << 24));
                *nsmpl = (Sint32)(((Uint32)temp >> 24) | (temp << 24) | (((temp << 8) & 0xFF0000) | ((temp >> 8) & 0xFF00)));
                pdw += 4;
                temp2 = (pdw[0 * 2] | (pdw[(0 * 2) + 1] << 8));
                *bps = (((temp2 & 0xFF00) >> 8) | ((temp2 << 8) & 0xFF00));
                pdw += 2;
                temp3 = (pdw[0 * 2] | (pdw[(0 * 2) + 1] << 8));
                temp3 = (Uint16)(((temp3 & 0xFF00) >> 8) | ((temp3 << 8) & 0xFF00));
                pdw += 2;
                temp4 = (pdw[0 * 2] | (pdw[(0 * 2) + 1] << 8));
                *sfreq = (Uint16)(((temp4 & 0xFF00) >> 8) | ((temp4 << 8) & 0xFF00));
                *sfreq = *sfreq >> (0x400E - temp3);
                pdw += 8;
                comm_ck_flag = 1;
                if (ssnd_ck_flag != 0)
                {
                    return data;
                }
            }
            break;
        case (0x444E5353):
            if (ssnd_ck_flag == 0)
            {
                tmp = (pdw[0 * 4] | (pdw[(0 * 4) + 1] << 8) | (pdw[(0 * 4) + 2] << 16) | (pdw[(0 * 4) + 3] << 24));
                tmp = (((tmp >> 24) & 0xFF) | ((tmp >> 8) & 0xFF00) | ((tmp << 8) & 0xFF0000) | (tmp << 24));
                pdw += 4;
                data = pdw + tmp;
                ssnd_ck_flag = 1;
                if (comm_ck_flag != 0)
                {
                    return data;
                }
            }
            break;
        default:
            pdw += (ck_size + 1) & ~0x1;
        }
    }
    return data;
}
Sint32 ADX_DecodeInfoAiff(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen, Sint8 *code, Sint8 *bps, Sint8 *blksize, Sint8 *nch, Sint32 *sfreq, Sint32 *total_nsmpl, Sint32 *nsmpl_blk);
Sint32 ADXB_DecodeHeaderAiff(ADXB adxb, Sint8 *ibuf, Sint32 ibuflen);