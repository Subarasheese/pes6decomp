/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from recvx-decomp (src/cri/mwlib/ee/lib/libadxe/adx_tsvr.c). */
typedef unsigned char Uint8;
typedef signed char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef float Float32;
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
void func_00165968(ADXT adxt);
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
void ADXT_ExecErrChk(ADXT adxt);
void func_00169870(ADXT adxt);
typedef struct
{
        Sint8 used;
        Sint8 stat;
        Sint8 maxnch;
        Sint8 rsrv;
        SJ sji[2];
        SJ sjo[2];
        Sint32 total_exsmpl[2];
        Sint32 nch;
        Sint32 sfreq;
        Float32 frm_len;
        Float32 frm_prd;
        Sint32 frm_no;
} ADX_AMP;
typedef ADX_AMP *ADXAMP;
ADXAMP ADXAMP_Create(Sint32 maxnch, SJ *sji, SJ *sjo);
void ADXAMP_SetFrmLen(ADXAMP amp, Float32 len_sec);
void ADXAMP_SetFrmPrd(ADXAMP amp, Float32 prd_sec);
void ADXAMP_SetSfreq(ADXAMP amp, Sint32 sfreq);
Sint32 ADX_DecodeFooter(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen);
Sint32 ADX_DecodeInfo(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen, Sint8 *code, Sint8 *bps, Sint8 *blksize, Sint8 *nch, Sint32 *sfreq, Sint32 *total_nsmpl, Sint32 *nsmpl_blk);
Sint32 ADX_DecodeInfoExADPCM2(Sint8 *ibuf, Sint32 ibuflen, Sint16 *cof);
Sint32 ADX_DecodeInfoExLoop(Sint8 *ibuf, Sint32 ibuflen, Sint32 *lp_ins_nsmpl, Sint16 *nloop, Sint16 *lp_type, Sint32 *lp_spos, Sint32 *lp_sofst, Sint32 *lp_epos, Sint32 *lp_eofst);
void ADX_GetCoefficient(Sint32 cof, Sint32 sfreq, Sint16 *k0, Sint16 *k1);
Sint32 ADX_ScanInfoCode(Sint8 *ibuf, Sint32 ibuflen, Sint16 *dlen);
void ADXERR_ItoA(Sint32 val, Sint8 *str, Sint32 len);
void ADXERR_ItoA2(Sint32 val, Sint32 val2, Sint8 *str, Sint32 len);
void adxini_rnaerr_cbfn(void *obj, const Char8 *msg);
ADXRNA ADXRNA_Create(SJ *sj, Sint32 maxnch);
Sint32 ADXRNA_DiscardData(ADXRNA rna, Sint32 nsmpl);
Sint32 ADXRNA_GetOutPan(ADXRNA rna, Sint32 chno);
void ADXRNA_GetTime(ADXRNA rna, Sint32 *ncount, Sint32 *tscale);
void ADXRNA_SetBitPerSmpl(ADXRNA rna, Sint32 bps);
void ADXRNA_SetNumChan(ADXRNA rna, Sint32 nch);
void ADXRNA_SetOutPan(ADXRNA rna, Sint32 chno, Sint32 pan);
void ADXRNA_SetOutVol(ADXRNA rna, Sint32 vol);
void ADXRNA_SetPcmType(ADXRNA rna, Sint32 type);
void ADXRNA_SetPlaySw(ADXRNA rna, Sint32 sw);
void ADXRNA_SetSfreq(ADXRNA rna, Sint32 sfreq);
void ADXRNA_SetStartSmpl(ADXRNA rna, Sint32 nsmpl);
Sint32 ADXRNA_SetStmHdInfo(ADXRNA rna, void *snddat);
void ADXRNA_SetTotalNumSmpl(ADXRNA rna, Sint32 nsmpl);
void ADXRNA_SetTransSw(ADXRNA rna, Sint32 sw);
void ADXRNA_SetWavFname(ADXRNA rna, const Sint8 *fname);
ADXSJD ADXSJD_Create(SJ sji, Sint32 maxnch, SJ *sjo);
void ADXSJD_EntryFltFunc(ADXSJD sjd, void (*f)(), void *obj);
void ADXSJD_EntryTrapFunc(ADXSJD sjd, void (*f)(), void *obj);
void* adxsjd_get_wr(void *obj, Sint32 *wpos, Sint32 *nroom, Sint32 *lp_nsmpl);
Sint32 func_00162888(ADXSJD sjd);
Sint32 func_00161928(ADXSJD sjd);
void ADXSJD_SetDecPos(ADXSJD sjd, Sint32 decpos);
void ADXSJD_SetInSj(ADXSJD sjd, SJ sj);
void ADXSJD_SetMaxDecSmpl(ADXSJD sjd, Sint32 nsmpl);
void ADXSJD_SetOutSj(ADXSJD sjd, Sint32 chno, SJ sj);
void ADXSJD_SetTrapCnt(ADXSJD sjd, Sint32 nsmpl);
void ADXSJD_SetTrapDtLen(ADXSJD sjd, Sint32 nbyte);
void ADXSJD_SetTrapNumSmpl(ADXSJD sjd, Sint32 nsmpl);
typedef struct _adx_fs {
        char used;
        char stat;
        char sjflag;
        char rev;
        ADXSTM stm;
        SJ sj;
        long fad;
        long fnsct;
        long fsize;
        long skpos;
        long rdstpos;
        long rqsct;
        long rdsct;
        char *buf;
        long bsize;
} ADX_FS;
typedef ADX_FS *ADXF;
long ADXF_LoadPartition(long ptid, char *fname, void *ptinfo, long nfile);
long ADXF_AddPartition(long ptid, char *fname, void *ptinfo, long nfile);
ADXF ADXF_Open(char *fname, void *atr);
ADXF ADXF_OpenAfs(long ptid, long flid);
long ADXF_ReadSj32(ADXF adxf, long nsct, SJ sj);
long ADXF_ReadNw32(ADXF adxf, long nsct, void *buf);
long ADXF_Seek(ADXF adxf, long pos, long type);
long ADXF_GetNumReqSct(ADXF adxf, long *seekpos);
long ADXF_GetFileRange(long ptid, long flid, long *fad, long *fnsct);
typedef enum
{
        CVE_FS_ST_IDLE = 0,
        CVE_FS_ST_COMPLETE = 1,
        CVE_FS_ST_TRANS = 2,
        CVE_FS_ST_ERR = 3,
        CVE_FS_ST_NUM = 4
} CVE_FS_ST;
typedef enum
{
        CVE_FS_OP_READ = 0,
        CVE_FS_OP_WRITE = 1,
        CVE_FS_OP_NUM = 2
} CVE_FS_OP;
typedef enum
{
        CVE_FS_SK_SET = 0,
        CVE_FS_SK_CUR = 1,
        CVE_FS_SK_END = 2,
        CVE_FS_SK_NUM = 3
} CVE_FS_SK;
typedef struct _vfs_vtbl
{
        void (*ExecServer)();
        void (*EntryErrFunc)();
        Sint32 (*GetFileSize)();
        Sint32 (*GetFreeSize)();
        void* (*Open)();
        void (*Close)();
        Sint32 (*Seek)();
        Sint32 (*Tell)();
        Sint32 (*ReqRd)();
        Sint32 (*ReqWr)();
        void (*StopTr)();
        CVE_FS_ST (*GetStat)();
        Sint32 (*GetSctLen)();
        void (*SetSctLen)();
        Sint32 (*GetNumTr)();
        Sint32 (*ChangeDir)();
        Sint32 (*IsExistFile)();
        Sint32 (*GetNumFiles)();
        Sint32 (*LoadDirInfo)();
        Sint32 (*GetMaxByteRate)();
        Sint32 (*MakeDir)();
        Sint32 (*RemoveDir)();
        Sint32 (*DeleteFile)();
        Sint32 (*GetFileSizeEx)();
        Sint32 (*OptFn1)();
        Sint32 (*OptFn2)();
} CVS_FS_IF;
typedef CVS_FS_IF *CVFS_IF;
typedef struct
{
        CVFS_IF vtbl;
        void *obj;
} CVS_FS_OBJ;
typedef CVS_FS_OBJ *CVFS;
void cvFsCallUsrErrFn(void *obj, const Sint8 *msg, void *hndl);
Sint32 cvFsGetFileSizeEx(const Sint8 *fname, void *prm);
CVFS cvFsOpen(const Sint8 *fname, void *prm, CVE_FS_OP op_mode);
Sint32 cvFsOptFn1(CVFS cvfs, Sint32 p0, Sint32 p1, Sint32 p2);
Sint32 cvFsOptFn2(CVFS cvfs, Sint32 p0, Sint32 p1, Sint32 p2);
Sint32 cvFsReqRd(CVFS cvfs, Sint32 nsct, void *buf);
Sint32 cvFsReqWr(CVFS cvfs, Sint32 nsct, void *buf);
Sint32 cvFsSeek(CVFS cvfs, Sint32 nsct, CVE_FS_SK sk_mode);
void cvFsSetSctLen(CVFS cvfs, Sint32 sctlen);
static void getDevName(Sint8 *dname, Sint8 *fname, const Sint8 *fn);
typedef struct _adxstm_file
{
        Sint8 used;
        Sint8 stat;
        Sint8 rdflg;
        Sint8 errcnt;
        SJ sj;
        CVFS fp;
        Sint32 stpos;
        Sint32 fofst;
        Sint32 fsize;
        Sint32 maxsize;
        Sint32 minsize;
        Sint32 reqsct;
        SJCK reqck;
        Sint32 rdsct;
        Sint32 esct;
        Sint32 tbyte;
        void (*eosfunc)();
        void *eosobj;
} ADXSTM_FILE;
typedef ADXSTM_FILE *ADXSTMF;
void ADXSTM_EntryEosFunc(ADXSTM stm, void (*fn)(), void *obj);
Sint32 ADXSTM_GetBufSize(ADXSTM stm, Sint32 *min, Sint32 *max);
Sint32 ADXSTM_GetCurOfst(ADXSTM stm, Sint32 *ofst);
void ADXSTM_GetCvdfsStat(ADXSTM stm, Sint32 *cvfsst);
Sint32 ADXSTM_GetFad(const Sint8 *fname, Sint32 *fad);
Sint32 ADXSTM_GetFsizeByte(const Sint8 *fname, Sint32 *fsize);
Sint32 ADXSTM_GetFsizeSct(const Sint8 *fname, Sint32 *fnsct);
Sint32 func_00163470(ADXSTM stm);
ADXSTM ADXSTM_OpenFileRange(const Sint8 *fname, Sint32 ofst, Sint32 nsct, SJ sj);
ADXSTM ADXSTM_OpenFileRangeEx(const Sint8 *fname, void *dir, Sint32 ofst, Sint32 nsct, SJ sj);
ADXSTM ADXSTM_OpenFileRangeExRt(const Sint8 *fname, void *dir, Sint32 ofst, Sint32 nsct, SJ sj);
ADXSTM ADXSTM_OpenFname(const Sint8 *fname, SJ sj);
ADXSTM ADXSTM_OpenFnameEx(const Sint8 *fname, void *dir, SJ sj);
Sint32 ADXSTM_Seek(ADXSTM stm, Sint32 ofst);
Sint32 ADXSTM_SetBufSize(ADXSTM stm, Sint32 min, Sint32 max);
void ADXSTM_SetEos(ADXSTM stm, Sint32 esct);
void ADXSTM_SetOfst(ADXSTM stm, Sint32 ofst);
void ADXSTM_SetRdSct(ADXSTM stm, Sint32 nsct);
Sint32 ADXSTM_SetReqRdSize(ADXSTM stm, Sint32 sct);
void ADXSTM_SetSj(ADXSTM stm, SJ sj);
ADXSTMF ADXSTMF_CreateCvfs(CVFS fp, Sint32 fofst, Sint32 fsize, SJ sj);
ADXSTMF ADXSTMF_CreateCvfsRt(CVFS fp, Sint32 fofst, Sint32 fsize, SJ sj);
void ADXSTMF_SetupHandleMember(ADXSTMF stmf, CVFS fp, Sint32 fofst, Sint32 fsize, SJ sj);
ADXT ADXT_Create(Sint32 maxnch, void *work, Sint32 worksize);
Sint32 ADXT_DiscardSmpl(ADXT adxt, Sint32 nsmpl);
void ADXT_EntryErrFunc(void (*func)(), void *obj);
void ADXT_EntryFltFunc(ADXT adxt, void (*f)(), void *obj);
Sint32 ADXT_GetNumSmplObuf(ADXT adxt, Sint32 chno);
Sint32 ADXT_GetOutPan(ADXT adxt, Sint32 ch);
void ADXT_GetTime(ADXT adxt, Sint32 *ncount, Sint32 *tscale);
void ADXT_GetTimeSfreq(ADXT adxt, Sint32 *ncount, Sint32 *tscale);
void ADXT_GetTimeSfreq2(ADXT adxt, Sint32 *ncount, Sint32 *tscale);
Sint32 ADXT_InsertSilence(ADXT adxt, Sint32 nch, Sint32 nsmpl);
void ADXT_SetAutoRcvr(ADXT adxt, Sint32 rmode);
void ADXT_SetLnkSw(ADXT adxt, Sint32 sw);
void ADXT_SetLpFlg(ADXT adxt, Sint32 flg);
void ADXT_SetOutPan(ADXT adxt, Sint32 ch, Sint32 pan);
void ADXT_SetOutVol(ADXT adxt, Sint32 vol);
void ADXT_SetReloadSct(ADXT adxt, Sint32 minsct);
void ADXT_SetReloadTime(ADXT adxt, float time, Sint32 nch, Sint32 sfreq);
void ADXT_SetSvrFreq(ADXT adxt, Sint32 freq);
void ADXT_SetTimeOfst(ADXT adxt, Sint32 ofst);
void ADXT_SetWaitPlayStart(ADXT adxt, Sint32 flg);
void adxt_start_sj(ADXT adxt, SJ sj);
void ADXT_StartSj(ADXT adxt, SJ sj);
void func_00165968(ADXT adxt);
void func_00169870(ADXT adxt);
void ADXT_ExecErrChk(ADXT adxt)
{
    Sint32 stat;
        Sint32 pos;
        Sint32 ndata;
    stat = adxt->stat;
    if ((stat == (3)) && (adxt->pause_flag == 0) && (func_00161928(adxt->sjd) != 3))
    {
        pos = func_00162888(adxt->sjd);
        if (adxt->edecpos == pos)
        {
            if (++adxt->edeccnt > (adxt->svrfreq * 5))
            {
                adxt->ercode = (-2);
            }
        }
        else
        {
            adxt->edeccnt = 0;
        }
        adxt->edecpos = pos;
        if (adxt->ercode != (0))
        {
            if ((adxt->autorcvr == (1)) || (adxt->autorcvr == (2)))
            {
                func_00165968(adxt);
            }
            if (adxt->autorcvr != (0))
            {
                adxt->ercode = (0);
                adxt->edeccnt = 0;
            }
        }
    }
    else
    {
        adxt->edeccnt = 0;
    }
    if (((stat == (1)) || (stat == (2)) || (stat == (3))) && (adxt->pause_flag == 0) && (func_00161928(adxt->sjd) != 3))
    {
        ndata = (adxt->sji == ((void *)0)) ? 0 : (*(adxt->sji)->vtbl->GetNumData)(adxt->sji, 1);
        if (ndata < 64)
        {
            adxt->eshrtcnt++;
            if (stat == (3))
            {
                if (adxt->eshrtcnt > (adxt->svrfreq * 5))
                {
                    adxt->ercode = (-1);
                }
            }
            else if (adxt->eshrtcnt > (adxt->svrfreq * 20))
            {
                adxt->ercode = (-1);
            }
            if (adxt->ercode != (0))
            {
                if (adxt->autorcvr == (1))
                {
                    func_00165968(adxt);
                }
                else if (adxt->autorcvr == (2))
                {
                    func_00169870(adxt);
                }
                if (adxt->autorcvr != (0))
                {
                    adxt->ercode = (0);
                    adxt->eshrtcnt = 0;
                }
            }
        }
        else
        {
            adxt->eshrtcnt = 0;
        }
    }
    else
    {
        adxt->eshrtcnt = 0;
    }
    if ((adxt->stm != ((void *)0)) && (func_00163470(adxt->stm) == 4))
    {
        if (adxt->autorcvr == (1))
        {
            func_00165968(adxt);
        }
        else if (adxt->autorcvr == (2))
        {
            func_00169870(adxt);
        }
        if (adxt->autorcvr != (0))
        {
            adxt->ercode = (0);
            adxt->eshrtcnt = 0;
        }
    }
}