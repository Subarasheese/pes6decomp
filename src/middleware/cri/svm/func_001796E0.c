/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/svm.c). */
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned int size_t;
typedef char s8;
typedef short s16;
typedef int s32;
typedef long long s64;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef s32 intptr_t;
typedef u32 uintptr_t;
typedef s32 ptrdiff_t;
typedef s32 strlen_t;
typedef s32 ssize_t;
typedef unsigned char Uint8;
typedef char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef unsigned long Uint64;
typedef signed long Sint64;
typedef signed short Float16;
typedef float Float32;
typedef double Float64;
typedef signed long Fixed32;
typedef Sint32 Bool;
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
typedef SJ_IF *SJIF;
void SJ_SplitChunk(SJCK *ck, Sint32 nbyte, SJCK *ck1, SJCK *ck2);
void SJ_MakeTag(SJCK *ck, char *tag);
void SJ_GetTagContent(Sint8 *tag, SJCK *cko);
Sint8 *SJ_SearchTag(SJCK *cki, Char8 *kw, Char8 *endkw, SJCK *cko);
void SJRBF_Init(void);
void SJRBF_Finish(void);
SJ SJRBF_Create(Sint8 *buf, Sint32 bsize, Sint32 xsize);
void SJMEM_Init(void);
void SJMEM_Finish(void);
SJ SJMEM_Create(Sint8 *data, Sint32 bsize);
void SJUNI_Init(void);
void SJUNI_Finish(void);
SJ SJUNI_Create(Sint32 mode, Sint8 *work, Sint32 wksize);
Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);
Sint32 SJUNI_GetNumChainPool(SJ sj);
void SJCRS_Lock(void);
void SJCRS_Unlock(void);
typedef void *ADXSTM;
typedef void *ADXSJD;
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
                   Sint16 unk46;
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
                   Uint32 decofst;
                   Sint32 flush_nsmpl;
                   Sint8 unkAC;
                   Sint8 padAD[1];
               Char8* unkB0;
               Sint32 padB4;
               Sint32 padB8;
               Sint32 padBC;
               Sint32 padC0;
} ADX_TALK;
typedef ADX_TALK *ADXT;
typedef struct _adxt_idx {
        Uint16 nidx;
        Uint16 top;
} ADXT_IDX;
typedef struct {
        int prio_lock;
        int prio_safe;
        int prio_vsync;
        int prio_main;
        int prio_mwidle;
} ADXM_TPRM;
typedef struct {
        int prio_lock;
        int prio_safe;
        int prio_usrvsync;
        int prio_vsync;
        int prio_main;
        int prio_mwidle;
        int prio_usridle;
} ADXM_TPRM_EX;
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
void ADXT_Init(void);
void ADXT_Finish(void);
void ADXT_DestroyAll(void);
void ADXT_CloseAllHandles(void);
ADXT ADXT_Create(Sint32 maxnch, void *work, Sint32 worksize);
void ADXT_Destroy(ADXT adxt);
void ADXT_StartAfs(ADXT adxt, Sint32 patid, Sint32 fid);
void ADXT_StartFname(ADXT adxt, Char8 *fname);
void ADXT_StartSj(ADXT adxt, SJ sj);
void ADXT_StartMem(ADXT adxt, void *adxdat);
void ADXT_StartMem2(ADXT adxt, void *adxdat, Sint32 datlen);
void ADXT_StartMemIdx(ADXT adxt, void *acx, Sint32 no);
void ADXT_Stop(ADXT adxt);
Sint32 ADXT_GetStat(ADXT adxt);
void ADXT_GetTime(ADXT adxt, Sint32 *ncount, Sint32 *tscale);
Sint32 ADXT_GetTimeReal(ADXT adxt);
Sint32 ADXT_GetNumSmpl(ADXT adxt);
Sint32 ADXT_GetSfreq(ADXT adxt);
Sint32 ADXT_GetNumChan(ADXT adxt);
Sint32 ADXT_GetHdrLen(ADXT adxt);
Sint32 ADXT_GetFmtBps(ADXT adxt);
void ADXT_SetOutPan(ADXT adxt, Sint32 ch, Sint32 pan);
Sint32 ADXT_GetOutPan(ADXT adxt, Sint32 ch);
void ADXT_SetOutVol(ADXT adxt, Sint32 vol);
Sint32 ADXT_GetOutVol(ADXT adxt);
void ADXT_SetSvrFreq(ADXT adxt, Sint32 freq);
void ADXT_SetReloadTime(ADXT adxt, float time, Sint32 nch, Sint32 sfreq);
void ADXT_SetReloadSct(ADXT adxt, Sint32 minsct);
Sint32 ADXT_GetNumSctIbuf(ADXT adxt);
Sint32 ADXT_GetNumSmplObuf(ADXT adxt, Sint32 chno);
float ADXT_GetIbufRemainTime(ADXT adxt);
Sint32 ADXT_IsIbufSafety(ADXT adxt);
void ADXT_SetAutoRcvr(ADXT adxt, Sint32 rmode);
Sint32 ADXT_IsCompleted(ADXT adxt);
void ADXT_ExecHndl(ADXT adxt);
void ADXT_ExecServer(void);
void ADXT_ExecFsSvr(void);
Sint32 ADXT_IsActiveFsSvr(void);
Sint32 ADXT_GetErrCode(ADXT adxt);
void ADXT_ClearErrCode(ADXT adxt);
Sint32 ADXT_GetLpCnt(ADXT adxt);
void ADXT_SetLpFlg(ADXT adxt, Sint32 flg);
SJ ADXT_GetInputSj(ADXT adxt);
void ADXT_SetWaitPlayStart(ADXT adxt, Sint32 flg);
Sint32 ADXT_IsReadyPlayStart(ADXT adxt);
void ADXT_Pause(ADXT adxt, Sint32 sw);
Sint32 ADXT_GetStatPause(ADXT adxt);
void ADXT_SetDrctLvl(ADXT adxt, Sint32 drctlvl);
Sint32 ADXT_GetDrctLvl(ADXT adxt);
void ADXT_SetFx(ADXT adxt, Sint32 fxch, Sint32 fxlvl);
void ADXT_GetFx(ADXT adxt, Sint32 *fxch, Sint32 *fxlvl);
void ADXT_SetFilter(ADXT adxt, Sint32 coff, Sint32 q);
void ADXT_GetFilter(ADXT adxt, Sint32 *coff, Sint32 *q);
void ADXT_SetTranspose(ADXT adxt, Sint32 transps, Sint32 detune);
void ADXT_GetTranspose(ADXT adxt, Sint32 *transps, Sint32 *detune);
void ADXT_EntryErrFunc(void (*func)(void *obj, Sint8 *msg), void *obj);
Sint32 ADXT_DiscardSmpl(ADXT adxt, Sint32 nsmpl);
void ADXT_SetNumRetry(Sint32 num);
void ADXT_GetHdrInfo(Sint8 *buf, Sint32 bsize, ADXHINFO *hinfo);
Sint32 ADXT_GetStatRead(ADXT adxt);
void ADXT_EntryFltFunc(ADXT adxt,
                void (*f)(void *obj, Sint32 ch, void *data, Sint32 dtlen), void *obj);
Sint32 ADXT_GetDecNumSmpl(ADXT adxt);
void ADXT_EntryFname(ADXT adxt, Char8 *fname);
void ADXT_EntryAfs(ADXT adxt, Sint32 patid, Sint32 fid);
void ADXT_StartSeamless(ADXT adxt);
void ADXT_SetSeamlessLp(ADXT adxt, Sint32 flg);
void ADXT_StartFnameLp(ADXT adxt, Char8 *fname);
void ADXT_ReleaseSeamless(ADXT adxt);
Sint32 ADXT_GetNumFiles(ADXT adxt);
void ADXT_SetLnkSw(ADXT adxt, Sint32 sw);
Sint32 ADXT_GetLnkSw(ADXT adxt);
void ADXT_ResetEntry(ADXT adxt);
Sint32 ADXT_CalcAmpWork(Sint32 maxnch);
void ADXT_SetAmpWork(ADXT adxt, void *work, Sint32 wksize);
Sint32 ADXT_GetAmplitude(ADXT adxt, Sint32 ch);
Sint32 ADXT_GetAmplitude2(ADXT adxt, Sint32 ch, Sint32 msec, Sint32 *msec2);
void ADXT_InsertHdrSfa(ADXT adxt, Sint32 nch, Sint32 sfreq, Sint32 nsmpl);
void ADXT_SetTimeOfst(ADXT adxt, Sint32 ofst);
void ADXT_VsyncProc(void);
void ADXT_SetTimeMode(Sint32 mode);
Sint32 ADXT_IsHeader(Sint8 *adr, Sint32 siz, Sint32 *hdrsiz);
Sint32 ADXT_IsEndcode(Sint8 *adr, Sint32 siz, Sint32 *endsiz);
Sint32 ADXT_InsertSilence(ADXT adxt, Sint32 nch, Sint32 nsmpl);
void ADXT_SetOutputMono(Sint32 flag);
void ADXT_AttachAhx(ADXT adxt, void *work, Sint32 worksize);
void ADXT_DetachAhx(ADXT adxt);
void ADXT_SetKeyString(ADXT adxt, Char8 *str);
void ADXT_SetDefKeyString(Char8 *str);
void ADXT_SetKeyString(ADXT adxt, Char8 *str);
void ADXT_SetDefKeyString(Char8 *str);
void ADXM_SetupThrd(ADXM_TPRM *tprm);
void ADXM_ShutdownThrd(void);
void ADXM_SetupThrdEx(ADXM_TPRM_EX *tprm);
void ADXM_ShutdownThrdEx(void);
void ADXM_SetCbUsrVsync(Bool (*func)(void *obj), void *obj);
void ADXM_SetCbUsrIdle(Bool (*func)(void *obj), void *obj);
void ADXM_GotoUsrIdleBdr(void);
Sint32 ADXM_ExecSvrUsrVsync(void);
Sint32 ADXM_ExecSvrUsrIdle(void);
void ADXM_SetCbErr(void (*fn)(void *obj, Char8 *emsg), void *obj);
void ADXM_SetCbSleepMwIdle(void (*fn)(void *), void *obj);
Bool ADXM_IsSetupThrd(void);
void ADXM_Lock(void);
void ADXM_Unlock(void);
Sint32 ADXM_GetLockLevel(void);
void ADXM_WaitVsync(void);
Sint32 ADXM_ExecVint(Sint32 arg);
Sint32 ADXM_ExecMain(void);
Sint32 ADXM_ExecSvrVsync(void);
Sint32 ADXM_ExecSvrMain(void);
Sint32 ADXM_ExecSvrMwIdle(void);
Sint32 ADXM_ExecSvrAll(void);
typedef struct _adx_fs {
    Sint8 used;
    Sint8 stat;
    Sint8 sjflag;
    Sint8 stopnw_flg;
    ADXSTM stm;
    SJ sj;
    Sint32 fnsct;
    Sint32 fsize;
    Sint32 skpos;
    Sint32 rdstpos;
    Sint32 rqsct;
    Sint32 rdsct;
    Sint8 *buf;
    Sint32 bsize;
    Sint32 rqrdsct;
    Sint32 ofst;
    void *dir;
    const Char8 *unk38;
    Sint32 unk3C;
    Sint32 unk40;
} ADX_FS;
typedef ADX_FS *ADXF;
typedef struct _adxf_ptinfo {
    struct _adxf_ptinfo *next;
    Sint32 size;
    Sint32 nfile;
    Uint16 nentry;
    Sint8 type;
    Sint8 rev;
    Sint8 fname[(256)];
    void *curdir;
    Sint32 ofst;
    Sint32 top;
    Sint32 file_sizes[0];
} ADXF_PTINFO;
typedef struct _adxf_add_info {
    Uint16 flid;
    Uint16 fnsct;
    Sint32 ofst;
} ADXF_ADD_INFO;
typedef struct _adxf_cmd_hstry {
    Uint8 cmdid;
    Uint8 fg;
    Uint16 ncall;
    intptr_t prm[3];
} ADXF_CMD_HSTRY;
void ADXF_Init(void);
void ADXF_Finish(void);
Sint32 ADXF_LoadPartitionNw(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo);
Sint32 ADXF_LoadPartitionFromAfsNw(Sint32 set_ptid, Sint32 rd_ptid, Sint32 rd_flid, void *ptinfo);
Sint32 ADXF_LoadPtNwEx(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo, void *tmpbuf, Sint32 tbsize);
Sint32 ADXF_LoadPtFromAfsNwEx(Sint32 set_ptid, Sint32 rd_ptid, Sint32 rd_flid, void *ptinfo, void *tmpbuf,
                              Sint32 tbsize);
Sint32 ADXF_GetPtStat(Sint32 ptid);
Sint32 ADXF_GetPtStatEx(Sint32 ptid);
void ADXF_StopPtLd(void);
Sint32 ADXF_GetPtinfoSize(Sint32 ptid);
ADXF ADXF_Open(Char8 *fname, void *atr);
ADXF ADXF_OpenAfs(Sint32 ptid, Sint32 flid);
void ADXF_Close(ADXF adxf);
void ADXF_CloseAll(void);
Sint32 ADXF_ReadSj(ADXF adxf, Sint32 nsct, SJ sj);
Sint32 ADXF_ReadNw(ADXF adxf, Sint32 nsct, void *buf);
Sint32 ADXF_Stop(ADXF adxf);
Sint32 ADXF_StopNw(ADXF adxf);
void ADXF_ExecServer(void);
Sint32 ADXF_Seek(ADXF adxf, Sint32 pos, Sint32 type);
Sint32 ADXF_Tell(ADXF adxf);
Sint32 ADXF_GetFsizeSct(ADXF adxf);
Sint32 ADXF_GetFsizeByte(ADXF adxf);
Sint32 ADXF_GetNumReqSct(ADXF adxf, Sint32 *seekpos);
Sint32 ADXF_GetNumReadSct(ADXF adxf);
Sint32 ADXF_GetStat(ADXF adxf);
Sint32 ADXF_GetFnameRange(Sint32 ptid, Sint32 flid, Char8 *fname, Sint32 *ofst, Sint32 *fnsct);
Sint32 ADXF_GetFnameRangeEx(Sint32 ptid, Sint32 flid, Char8 *fname, void **dir, Sint32 *ofst, Sint32 *fnsct);
void ADXF_SetReqRdSct(ADXF adxf, Sint32 nsct);
Sint32 ADXF_GetStatRead(ADXF adxf);
typedef struct ADXF_ROFS_STWK ADXF_ROFS_WK;
typedef struct ADXF_ROFS_PFSIFTBL ADXF_ROFS_PFSTBL;
typedef struct ADXF_ROFS_DEVIFTBLE ADXF_ROFS_DEVTBL;
typedef struct ADXF_ROFS_LIBIFTBLE ADXF_ROFS_LIFTBL;
typedef struct {
    Sint32 fad;
    Sint32 fsize;
    Uint8 flag;
    Uint8 sid;
    Char8 fname[((31) + 1)];
    Uint8 pad[6];
} ADXF_ROFS_DIRRECENT;
typedef struct {
    Sint32 dir_num;
    Sint32 max_ent;
    Sint32 dir_fad;
    Char8 volname[((31) + 1)];
    Sint32 pad;
    ADXF_ROFS_DIRRECENT dirrec_tbl[1];
} ADXF_ROFS_DIRREC;
typedef ADXF_ROFS_DIRREC *ADXF_ROFS_DIRRECBUF;
typedef struct {
    Char8 volname[((8) + 1)];
    void *img_hn;
    Sint32 zisb;
    Sint32 ptbl_cba;
    Sint32 ptbl_size;
    ADXF_ROFS_DIRRECBUF curdir;
} ADXF_ROFS_VOL;
typedef struct {
    ADXF_ROFS_WK *wk;
    Sint32 fid;
    Sint32 fad;
    Sint32 ofs;
    Sint32 fsize;
    Sint32 fsctsize;
    ADXF_ROFS_VOL *vol;
    Sint32 rsize;
    Sint32 trns_seg;
    Sint32 trns_ofs;
    Sint32 trns_unit;
    Uint8 *rdadr;
    Sint16 used;
    Sint16 act;
    Sint16 stat;
    Sint16 err;
} ADXF_ROFS_OBJ;
typedef ADXF_ROFS_OBJ *ADXF_ROFS;
struct ADXF_ROFS_STWK {
    Bool f_init;
    Sint32 max_open;
    Sint32 max_volume;
    Sint32 max_dirent;
    Uint32 exec_server_cnt;
    ADXF_ROFS syshdl;
    ADXF_ROFS hndtbl;
    ADXF_ROFS_VOL *vollist;
    ADXF_ROFS_VOL *curvol;
    ADXF_ROFS_DIRRECBUF dirbuf;
    ADXF_ROFS_PFSTBL *pfs;
    ADXF_ROFS_DEVTBL *dev;
    ADXF_ROFS_LIFTBL *liftbl;
    void (*g_errcb)(void *, Char8 *, Sint32);
    void *g_errcb_1st;
    Uint32 sctbuf[((2048) * 2 + 64) / 4];
    ADXF_ROFS_OBJ hndlist[1];
};
typedef struct {
    Sint32 max_open;
    Sint32 max_volume;
    Sint32 max_dirent;
    void *rofs_work;
} ADXF_SPRM_ROFS;
void ADXF_SetupRofs(void *sprmr);
void ADXF_ShutdownRofs(void);
Sint32 ADXF_AddRofsVol(Char8 *volname, Char8 *imgname);
void ADXF_DelRofsVol(Char8 *volname);
Bool ADXF_IsRofsVol(Char8 *volname);
void ADXF_SetDefDev(Char8 *volname);
typedef enum {
        MWSFD_STAT_STOP = 0,
        MWSFD_STAT_PREP = 1,
        MWSFD_STAT_PLAYING = 2,
        MWSFD_STAT_PLAYEND = 3,
        MWSFD_STAT_ERROR = 4,
        MWE_PLY_STAT_STOP = 0,
        MWE_PLY_STAT_PREP = 1,
        MWE_PLY_STAT_PLAYING = 2,
        MWE_PLY_STAT_PLAYEND = 3,
        MWE_PLY_STAT_ERROR = 4,
        MWSFD_STAT_END
} MwsfdStat, MWE_PLY_STAT;
typedef enum {
        MWSFD_DEC_SVR_IDLE = 0,
        MWSFD_DEC_SVR_MAIN = 1,
        MWSFD_DEC_SVR_END
} MwsfdDecSvr;
typedef enum {
    MWSFD_BUFFMT_DEFAULT = 0,
    MWSFD_BUFFMT_MB_YCC420 = 1,
    MWSFD_BUFFMT_MB_ARGB8888 = 2,
    MWSFD_BUFFMT_PLN_YCC420 = 3,
    MWE_PLY_BUFFMT_MB_YCC420 = 1,
    MWE_PLY_BUFFMT_MB_ARGB8888 = 2,
    MWE_PLY_BUFFMT_PLN_YCC420 = 3,
    MWSFD_BUFFMT_END
} MwsfdBufFmt, MWE_PLY_BUFFMT;
typedef enum {
    MWSFD_PTYPE_I = 1,
    MWSFD_PTYPE_P = 2,
    MWSFD_PTYPE_B = 3,
    MWSFD_PTYPE_D = 4,
    MWE_PLY_PTYPE_I = 1,
    MWE_PLY_PTYPE_P = 2,
    MWE_PLY_PTYPE_B = 3,
    MWE_PLY_PTYPE_D = 4,
    MWSFD_PTYPE_END
} MwsfdPtype, MWE_PLY_PTYPE;
typedef enum {
        MWSFD_FRMSYNC_TIME = 0,
        MWSFD_FRMSYNC_NONE = 1,
        MWSFD_FRMSYNC_END
} MwsfdFrmSync;
typedef enum {
        MWSFD_LUMIKEY_BLACK = 0,
        MWSFD_LUMIKEY_WHITE = 1,
        MWSFD_LUMIKEY_END
} MwsfdLumiKey;
typedef enum {
        MWSFD_FRMFMT_I_YCC420PLN = 1,
        MWSFD_FRMFMT_O_ARGB8888 = 101,
        MWSFD_FRMFMT_O_YCC422 = 102,
        MWSFD_FRMFMT_O_Y84C44 = 103,
    MWSFD_FRMFMT_END
} MwsfdFrmFmt;
typedef struct {
        struct MwsfdIf *vtbl;
} MW_PLY_OBJ;
typedef MW_PLY_OBJ *MWPLY;
typedef struct MwsfdIf{
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*VsyncHndl)(MWPLY mwply);
        Bool (*ExecSvrHndl)(MWPLY mwply);
        void (*Destroy)(MWPLY mwply);
        void (*StartFname)(MWPLY mwply, Char8 *fname);
        void (*Stop)(MWPLY mwply);
        MwsfdStat (*GetStat)(MWPLY mwply);
        void (*GetTime)(MWPLY mwply, Sint32 *ncount, Sint32 *tscale);
        void (*Pause)(MWPLY mwply, Sint32 sw);
        void (*SetOutVol)(MWPLY mwply, Sint32 vol);
        Sint32 (*GetOutVol)(MWPLY mwply);
        void (*SetOutPan)(MWPLY mwply, Sint32 chno, Sint32 pan);
        Sint32 (*GetOutPan)(MWPLY mwply, Sint32 chno);
        void (*StartSj)(MWPLY mwply, SJ sji);
        void (*StartMem)(MWPLY mwply, void *addr, Sint32 len);
} MwsfdIf;
typedef struct {
        Float32 vhz;
        Sint32 disp_cycle;
        Sint32 disp_latency;
        MwsfdDecSvr dec_svr;
        Sint32 rsv[4];
} MwsfdInitPrm, MWS_PLY_INIT_SFD;
typedef struct {
        Sint32 ftype;
        Sint32 max_bps;
        Sint32 max_width;
        Sint32 max_height;
        Sint32 nfrm_pool_wk;
        Sint32 max_stm;
        Sint8 *work;
        Sint32 wksize;
        Sint32 compo_mode;
        MwsfdBufFmt buffmt;
        Sint32 rsv[2];
} MwsfdCrePrm, MWS_PLY_CPRM_SFD;
typedef struct {
        Uint8 *bufadr;
        MwsfdBufFmt buffmt;
        Sint32 width;
        Sint32 height;
        Sint32 x_mb;
        Sint32 y_mb;
        MwsfdPtype ptype;
        Sint32 fps;
        Sint32 fno;
        Sint32 time;
        Sint32 tunit;
        Sint32 concat_cnt;
        Sint32 fno_per_file;
        Sint32 time_per_file;
        Sint32 errcnt;
        Sint32 rcvcnt;
} MwsfdFrmObj, MWS_PLY_FRM;
typedef struct {
        Sint32 drop_frm_cnt;
        Sint32 skip_dec_cnt;
        Sint32 skip_disp_cnt;
        Sint32 skip_emptyb_cnt;
        Sint32 no_supply_cnt;
} MwsfdPlyInf;
typedef struct {
        Bool playable;
        Sint32 ftype;
        Sint32 width;
        Sint32 height;
        Sint32 fps;
        Sint32 a_sfreq;
        Sint32 a_nch;
        Sint32 frmnum;
} MwsfdHdrInf;
typedef struct {
        Uint8 *y_ptr;
        Uint8 *cb_ptr;
        Uint8 *cr_ptr;
        Sint32 y_width;
        Sint32 cb_width;
        Sint32 cr_width;
} MwsfdYccPlane, MWS_PLY_YCC_PLANE;
typedef struct {
        MwsfdFrmFmt frmfmt;
        Sint32 width;
        Sint32 height;
        Sint32 rsv;
        Uint8 *buf[(4)];
} MwsfdFrmPrm;
typedef void *(*MwsfdMallocFn)(void *obj, Uint32 size);
typedef void (*MwsfdFreeFn)(void *obj, void *ptr);
void mwPlyInitSfdFx(MwsfdInitPrm *iprm);
void mwPlyFinishSfdFx(void);
Sint32 mwPlyCalcWorkCprmSfd(MwsfdCrePrm *cprm);
MWPLY mwPlyCreateSofdec(MwsfdCrePrm *cprm);
void mwPlyGetCurFrm(MWPLY mwply, MwsfdFrmObj *frm);
void mwPlyRelCurFrm(MWPLY mwply);
void mwPlySwitchToIdle(void);
void mwPlySetAudioCh(MWPLY mwply, Sint32 ch);
void mwPlySetAudioSw(MWPLY mwply, Sint32 sw);
Sint32 mwPlyGetTotalFrmNum(MWPLY mwply);
Bool mwPlyIsNextFrmReady(MWPLY mwply);
Sint32 mwPlyGetSyncMode(MWPLY mwply);
MwsfdFrmSync mwPlyGetFrmSync(MWPLY mwply);
Bool mwPlyIsPause(MWPLY mwply);
void mwPlyGetPlyInf(MWPLY mwply, MwsfdPlyInf *plyinf);
Sint32 mwPlyGetNumDropFrm(MWPLY mwply);
Sint32 mwPlyGetNumSkipDec(MWPLY mwply);
Sint32 mwPlyGetNumSkipDisp(MWPLY mwply);
Sint32 mwPlyGetNumSkipEmptyB(MWPLY mwply);
Sint32 mwPlyGetNumTotalDec(MWPLY mwply);
Sint32 mwPlyGetNumDecPool(MWPLY mwply);
Bool mwPlyIsSvrBdr(void);
void mwPlyGetHdrInf(Sint8 *buf, Sint32 bsize, MwsfdHdrInf *hdrinf);
Sint32 mwPlyGetNumAudioCh(MWPLY mwply);
Sint32 mwPlyGetNumVideoCh(MWPLY mwply);
void mwPlySetSyncMode(MWPLY mwply, Sint32 mode);
void mwPlySetFrmSync(MWPLY mwply, MwsfdFrmSync frmsync);
void mwPlySetBpicSkip(MWPLY mwply, Bool sw);
void mwPlySetEmptyBpicSkip(MWPLY mwply, Bool sw);
void mwPlySetLimitTime(MWPLY mwply, Sint32 sec);
void mwPlySetVideoCh(MWPLY mwply, Sint32 ch);
void mwPlyStartFnameLp(MWPLY mwply, Char8 *fname);
void mwPlyReleaseLp(MWPLY mwply);
void mwPlyStartAfsLp(MWPLY mwply, Sint32 patid, Sint32 fid);
void mwPlyEntryFname(MWPLY mwply, Char8 *fname);
void mwPlyStartSeamless(MWPLY mwply);
void mwPlyReleaseSeamless(MWPLY mwply);
void mwPlySetSeamlessLp(MWPLY mwply, Sint32 flg);
void mwPlyEntryAfs(MWPLY mwply, Sint32 patid, Sint32 fid);
Sint32 mwPlyGetNumSlFiles(MWPLY mwply);
Char8 *mwPlyGetSlFname(MWPLY mwply, Sint32 stm_no);
void mwPlyStartAfs(MWPLY mwply, Sint32 patid, Sint32 fid);
void mwPlyFxCnvFrmARGB8888(MWPLY mwply, MwsfdFrmObj *frm, Uint8 *out);
void mwPlyFxCnvFrmYUV422(MWPLY mwply, MwsfdFrmObj *frm, Uint8 *out);
void mwPlyFxCnvFrmY84C44(MWPLY mwply, MwsfdFrmObj *frm, Uint8 *yout, Uint8 *cout);
void mwPlyFxSetOutBufSize(MWPLY mwply, Sint32 width, Sint32 height);
void mwPlyFxGetOutBufSize(MWPLY mwply, Sint32 *width, Sint32 *height);
void mwPlyFxSetCompoMode(MWPLY mwply, Sint32 mode);
Sint32 mwPlyFxGetCompoMode(MWPLY mwply);
void mwPlyFxSetLumiPrm(MWPLY mwply, Sint32 in_th, Sint32 out_th, MwsfdLumiKey key);
void mwPlyFxGetLumiPrm(MWPLY mwply, Sint32 *in_th, Sint32 *out_th, MwsfdLumiKey *key);
void mwPlyFxCnvFrmZ16(MWPLY mwply, MwsfdFrmObj *frm, Uint8 *zout);
void mwPlyFxCnvFrmZ32(MWPLY mwply, MwsfdFrmObj *frm, Uint8 *zout);
void mwPlyFxSetZclip(MWPLY mwply, Float32 znear, Float32 zfar);
void mwPlyFxGetZclip(MWPLY mwply, Float32 *znear, Float32 *zfar);
void mwPlyCalcYccPlane(Uint8 *bufptr, Sint32 width, Sint32 height,
                                                MwsfdYccPlane *ycc);
ADXT mwPlyGetAdxtHn(MWPLY mwply);
SJ mwPlyGetInputSj(MWPLY mwply);
void *mwPlyGetSfdHn(MWPLY mwply);
void mwPlySetMallocFn(MwsfdMallocFn mallocfn, MwsfdFreeFn freefn, void *obj);
typedef enum {
        ROFS_STAT_IDLE = (0),
        ROFS_STAT_COMPLETE = (1),
        ROFS_STAT_TRANS = (2),
        ROFS_STAT_ERR = (3),
        ROFS_STAT_NUM
} RofsStat;
typedef enum {
        ROFS_SEEK_SET = (0),
        ROFS_SEEK_CUR = (1),
        ROFS_SEEK_END = (2),
        ROFS_SEEK_NUM
} RofsSeek;
typedef enum {
        ROFS_ERR_OK = (0),
        ROFS_ERR_NG = (-1),
        ROFS_ERR_PRM = (-100),
        ROFS_ERR_ILLHDL = (-101),
        ROFS_ERR_NOHNDL = (-102),
        ROFS_ERR_VOLNAME = (-103),
        ROFS_ERR_REGVOLNAME = (-104),
        ROFS_ERR_VOLUME = (-105),
        ROFS_ERR_NOTDIR = (-106),
        ROFS_ERR_NOTFOUND = (-107),
        ROFS_ERR_ILLDIRBUF = (-108),
        ROFS_ERR_DIROVER = (-109),
        ROFS_ERR_BUSY = (-200),
        ROFS_ERR_TOUT = (-201),
        ROFS_ERR_PRIMITIVE = (-202),
        ROFS_ERR_INIT = (-203),
        ROFS_ERR_REQRD = (-204),
        ROFS_ERR_SEEK = (-205),
        ROFS_ERR_OPEN = (-206),
        ROFS_ERR_READ = (-207),
        ROFS_ERR_INTERNAL = (-1000)
} RofsErr;
typedef struct RofsStWrok RofsWork;
typedef struct RofsPfsIfTbl RofsPfsTbl;
typedef struct RfpfsDevIfTbl RofsDevTbl;
typedef struct RfmaiLibIfTbl RofsLif;
typedef struct {
        Uint32 fsize;
        Uint32 fsize_ex;
        Sint32 fad;
        Uint8 fatr;
        Uint8 sid;
        Char8 fname[((31) + 1)];
        Uint8 pad[2];
} RofsDirRecEnt;
typedef struct {
        Sint32 dir_num;
        Sint32 max_ent;
        Sint32 dir_fad;
        Char8 volname[((8) + 1)];
        Uint8 pad[3];
        RofsDirRecEnt dirrec_tbl[1];
} RofsDirRec;
typedef RofsDirRec *RofsDirRecBuf;
typedef struct {
        void *img_hn;
        Sint32 zisb;
        Sint32 ptbl_cba;
        Sint32 ptbl_size;
        RofsDirRecBuf curdir;
        Sint16 req_cnt;
        Char8 volname[((8) + 1)];
        Uint8 pad[1];
        Uint32 flags;
        Uint8 vol_id[(8)];
} RofsVolume;
typedef struct {
        Uint32 fsize;
        Uint32 fsize_ex;
        RofsWork *wk;
        Sint32 fid;
        Sint32 fad;
        Sint32 ofs;
        Sint32 fsctsize;
        RofsVolume *vol;
        Sint32 rsize;
        Sint32 trns_seg;
        Sint32 trns_ofs;
        Sint32 trns_unit;
        Uint8 *rdadr;
        Sint16 used;
        Sint16 act;
        Sint16 stat;
        Sint16 err;
} RofsHandle;
typedef RofsHandle *Rofs;
struct RofsStWrok {
        Bool f_init;
        Sint32 max_open;
        Sint32 max_volume;
        Sint32 max_dirent;
        Sint32 worksiz;
        Uint32 exec_server_cnt;
        Rofs syshdl;
        Rofs hndtbl;
        RofsVolume *vollist;
        RofsVolume *curvol;
        RofsDirRecBuf dirbuf;
        RofsPfsTbl *pfs;
        RofsDevTbl *dev;
        RofsLif *liftbl;
        void (*g_errcb)(void *, Char8 *, Sint32);
        void *g_errcb_1st;
        Uint32 *sctbuf;
        Uint32 sct_load_buf[((2048) * (2) + 64) / 4];
        RofsHandle hndlist[1];
};
typedef struct {
        Sint32 max_open;
        Sint32 max_volume;
        Sint32 max_dirent;
        void *rofs_work;
} RofsInitPara;
typedef struct {
        Uint32 fsize;
        Uint32 fsize_ex;
        Char8 *fname;
        Uint8 fatr;
        Uint8 pad[3];
} RofsFileInf;
typedef struct {
        Char8 *volname;
        void *fhn;
} RofsVolumeInf;
typedef void (*RofsErrFunc)(void *obj, Char8 *msg, Sint32 errcode);
struct RofsPfsIfTbl {
        void (*pfs_execserver)(void);
        void (*pfs_reserve01)(RofsErrFunc, void *);
        Sint32 (*pfs_reserve02)(Sint8 *);
        Sint32 (*pfs_reserve03)(void);
        void *(*pfs_reserve04)(Sint8 *, void *, Sint32);
        void (*pfs_reserve05)(void *);
        Sint32 (*pfs_seek)(void *, Sint32, RofsSeek);
        Sint32 (*pfs_tell)(void *);
        Sint32 (*pfs_reqrd)(void *, Sint32, void *);
        Sint32 (*pfs_reserve07)(void *, Sint32, void *);
        void (*pfs_stoptr)(void *);
        Sint32 (*pfs_getstat)(void *);
        Sint32 (*pfs_getsctlen)(void *);
        void (*pfs_reserve08)(void *, Sint32);
        Sint32 (*pfs_getnumtr)(void *);
        Sint32 (*pfs_reserve09)(Sint8 *);
        Sint32 (*pfs_reserve10)(Sint8 *);
        Sint32 (*pfs_reserve11)(void);
        Sint32 (*pfs_reserve12)(Sint8 *, void *, Sint32);
        Sint32 (*pfs_reserve13)(void *);
        Sint32 (*pfs_reserve14)(Sint8 *);
        Sint32 (*pfs_reserve15)(Sint8 *);
        Sint32 (*pfs_reserve16)(Sint8 *);
        Sint32 (*pfs_reserve17)(Sint8 *, void *);
        Sint32 (*pfs_reserve18)(void *, Sint32, Sint32, Sint32);
        Sint32 (*pfs_reserve19)(void *, Sint32, Sint32, Sint32);
        Sint64 (*pfs_getnumtr64)(void *);
};
RofsErr ROFS_Init(RofsInitPara *init_para);
void ROFS_Finish(void);
RofsErr ROFS_SetPfsFuncTbl(RofsPfsTbl *pfs_tbl);
RofsErr ROFS_AddVolume(Char8 *volname, void *img_hn);
RofsErr ROFS_DelVolume(Char8 *volname);
RofsErr ROFS_SetDefVolume(Char8 *volname);
Char8 *ROFS_GetDefVolume(void);
RofsErr ROFS_SwitchImgHn(Char8 *volname, void *img_hn);
Rofs ROFS_Open(Char8 *fname, void *dir_buf);
Rofs ROFS_OpenRange(Char8 *volname, Sint32 stsct, Sint32 nsct);
void ROFS_Close(Rofs rofs);
Sint32 ROFS_Seek(Rofs rofs, Sint32 nsct, RofsSeek sk_mode);
Sint32 ROFS_Tell(Rofs rofs);
Sint32 ROFS_ReqRd(Rofs rofs, Sint32 nsct, void *buf);
void ROFS_StopTr(Rofs rofs);
void ROFS_ExecServer(void);
RofsStat ROFS_GetStat(Rofs rofs);
Sint32 ROFS_GetFileSiz(Char8 *fname);
Sint32 ROFS_GetSctLen(void);
Sint32 ROFS_GetNumTr(Rofs rofs);
RofsErr ROFS_GetVolumeInf(Char8 *volname, RofsVolumeInf *volinf);
RofsErr ROFS_LoadDir(Char8 *dirname, void *dir_buf, Sint32 n_dirent);
RofsErr ROFS_SetDir(Char8 *volname, void *dir_buf);
RofsErr ROFS_SetIsoDir(Char8 *volname, void *dir_buf);
RofsErr ROFS_ChangeDir(Char8 *dirname);
Bool ROFS_IsExistFile(Char8 *fname);
Sint32 ROFS_GetNumFiles(Char8 *volname);
Sint32 ROFS_GetDirInf(Char8 *volname, RofsFileInf *flist, Sint32 num);
void ROFS_EntryErrFunc(RofsErrFunc errfunc, void *obj);
RofsErr ROFS_GetLastError(void);
Sint64 ROFS_GetNumTr64(Rofs rofs);
Sint64 ROFS_GetFileSiz64(Char8 *fname);
const Char8 *ROFS_GetVersionStr(void);
typedef struct {
    Sint32 lsn;
    Sint32 size;
} ADXPS2_FC_DVD;
typedef struct {
    Sint32 fd;
    Sint32 size;
} ADXPS2_FC_HOST;
typedef struct _adxps2_sprm_dvd {
    Sint8 *rtdir;
    Sint32 rdmode;
    Sint32 nrtry;
    Sint32 speed;
    Sint32 dtype;
} ADXPS2_SPRM_DVD;
typedef struct _adxps2_sprm_host {
    Sint8 *rtdir;
    Sint32 rdmode;
    char pad[8];
} ADXPS2_SPRM_HOST;
typedef struct _adxps2_fcprm {
    Sint8 *flist;
    Sint32 maxflen;
    Sint8 *fcbuf;
    Sint32 fcsize;
} ADXPS2_FCPRM;
typedef struct {
    int prio_lock;
    int prio_safe;
    int prio_adx;
    int prio_main;
} ADXPS2_TPRM;
void ADXPS2_SetupDvdFs(ADXPS2_SPRM_DVD *sprmd);
void ADXPS2_SetupHostFs(ADXPS2_SPRM_HOST *sprmh);
void ADXPS2_SetupMemFs(void *prm);
Sint32 ADXPS2_LoadFcacheDvd(ADXPS2_FCPRM *fcprm);
void ADXPS2_SetRdModeDvd(ADXPS2_SPRM_DVD *sprmd);
Sint32 ADXPS2_IsExistFcacheDvd(Sint8 *fname);
void ADXPS2_SetRdModeHost(ADXPS2_SPRM_HOST *sprmh);
Sint32 ADXPS2_LoadFcacheHost(ADXPS2_FCPRM *fcprm);
Sint32 ADXPS2_IsExistFcacheHost(Sint8 *fname);
void ADXPS2_SetOutputDebugLevel(Sint32 lv);
int ADXPS2_VsyncCallback(int arg);
void ADXPS2_RestoreVsyncCallback(void);
void ADXPS2_ExecServer(void);
void ADXPS2_SetupThrd(ADXPS2_TPRM *tprm);
void ADXPS2_ShutdownThrd(void);
void ADXPS2_Lock(void);
void ADXPS2_Unlock(void);
void ADXPS2_SetupUsvr(void);
void ADXPS2_Shutdown(void);
void ADXPS2_SetupVoice(Sint32 nste, Sint32 nmono);
int ADXPS2_ExecVint(int arg);
void ADXPS2_WaitVsync(void);
Bool ADXPS2_ExecServerEx(void *obj);
void ADXPS2_SleepMainThrd(void);
void ADXPS2_WakeupMainThrd(void);
void ADXPS2_ResumeIdleThrd(void);
Sint32 ADXPS2_GetNumDataSjtmp(ADXT adxt, Sint32 chno);
Sint32 ADXPS2_GetNumRoomSjtmp(ADXT adxt, Sint32 chno);
Sint32 ADXPS2_GetNumDataSjiop(ADXT adxt, Sint32 chno);
Sint32 ADXPS2_GetNumRoomSjiop(ADXT adxt, Sint32 chno);
void ADXPS2_SetDvdLayer(Sint32 layer);
Sint32 ADXPS2_GetDvdLayer(void);
void SVM_Init();
void SVM_Lock();
void SVM_Unlock();
void SVM_LockRsc();
void SVM_UnlockRsc();
void SVM_LockVar();
void SVM_UnlockVar();
void func_001796E0(const Char8* format, ...);
void SVM_SetCbBdr(Sint32 arg0, void (*arg1)(), Sint32 arg2);
void SVM_SetCbErr(void (*callback)(void*, Char8*), void* object);
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
void SVM_DelCbSvr(Sint32 svtype, Sint32 id);
void SVM_SetCbLock(void (*func)(void*), void* object);
void SVM_SetCbUnlock(void (*func)(void*), void* object);
void SVM_Finish();
Sint32 SVM_ExecSvrVint();
Sint32 SVM_ExecSvrVsync();
Sint32 SVM_ExecSvrFs();
Sint32 SVM_ExecSvrMain();
Sint32 SVM_TestAndSet(Sint32* mem);
void SVM_CallErr1(const Char8* msg);
struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
};
struct _glue
{
  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};
struct _atexit {
        struct _atexit *_next;
        int _ind;
        void (*_fns[32])(void);
};
struct __sbuf {
        unsigned char *_base;
        int _size;
};
typedef long _fpos_t;
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;
  void * _cookie;
  int (*_read)(void * _cookie, char *_buf, int _n);
  int (*_write)(void * _cookie, const char *_buf, int _n);
  _fpos_t (*_seek)(void * _cookie, _fpos_t _offset, int _whence);
  int (*_close)(void * _cookie);
  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;
  unsigned char _ubuf[3];
  unsigned char _nbuf[1];
  struct __sbuf _lb;
  int _blksize;
  int _offset;
  struct _reent *_data;
};
struct _reent
{
  int _errno;
  struct __sFILE *_stdin, *_stdout, *_stderr;
  int _inc;
  char _emergency[25];
  int _current_category;
  const char *_current_locale;
  int __sdidinit;
  void (*__cleanup)(struct _reent *);
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;
  int _cvtlen;
  char *_cvtbuf;
  union
    {
      struct
        {
          unsigned int _rand_next;
          char * _strtok_last;
          char _asctime_buf[26];
          struct tm _localtime_buf;
          int _gamma_signgam;
        } _reent;
      struct
        {
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;
  struct _atexit *_atexit;
  struct _atexit _atexit0;
  void (**(_sig_func))(int);
  struct _glue __sglue;
  struct __sFILE __sf[3];
};
extern struct _reent *_impure_ptr;
void _reclaim_reent (struct _reent *);
typedef struct __sFILE FILE;
extern int printf(const char* format, ...);
extern int vsprintf(char* buf, const char* fmt, ...);
void* memset(void* s, int c, size_t n);
size_t strlen(const char* s);
char* strcpy(char* dest, const char* src);
char* strcat(char* dest, const char* src);
char* strupr(char* str);
char* strchr(const char*, int);
typedef char* va_list;
enum {
  __no_type_class = -1,
  __void_type_class,
  __integer_type_class,
  __char_type_class,
  __enumeral_type_class,
  __boolean_type_class,
  __pointer_type_class,
  __reference_type_class,
  __offset_type_class,
  __real_type_class,
  __complex_type_class,
  __function_type_class,
  __method_type_class,
  __record_type_class,
  __union_type_class,
  __array_type_class,
  __string_type_class,
  __set_type_class,
  __file_type_class,
  __lang_type_class
};
typedef struct {
    void (*func)(void*);
    void* object;
} SVMLockCallback;
typedef struct {
    void (*func)(void*, Char8*);
    void* object;
} SVMErrorCallback;
typedef struct {
    Sint32 (*func)(void*);
    void* object;
} SVMSVRCallback;
typedef struct {
    void (*unk0)();
    Sint32 unk4;
} SVM_UNK;extern Char8* D_00396E08;
extern volatile Sint32 D_00396E0C;
extern volatile Sint32 D_00396E10;
extern volatile Sint32 D_00396E14;
extern Sint32 D_00396E18[8];
extern Sint32 D_00396E38[8];
extern Char8 D_00396E58[128];
extern Sint32 (*svm_test_and_set_callback)();
extern SVMErrorCallback D_00510FB0;
extern SVMLockCallback svm_unlock_callback;
extern SVMLockCallback svm_lock_callback;
extern SVM_UNK D_006C04E0[8];
extern SVMSVRCallback D_006C0360[8][6];
void svm_lock(Sint32 type);
void svm_unlock(Sint32 type);
void SVM_Lock();
void SVM_Unlock();
void SVM_LockVar();
void func_001796E0(const Char8* format, ...) {
    va_list args;
    memset(D_00396E58, 0, sizeof(D_00396E58));
    (args = ((char*) __builtin_next_arg (format) - (__builtin_args_info (2) >= 8 ? 0 : (8 - __builtin_args_info (2)) * 8)));
    vsprintf(&D_00396E58, format, args);
    if (D_00510FB0.func != 0) {
        D_00510FB0.func(D_00510FB0.object, D_00396E58);
    }
}
void SVM_CallErr1(const Char8* msg);
void SVM_DelCbSvr(Sint32 group, Sint32 id);
void SVM_SetCbSvrId(Sint32 svtype, Sint32 id, Sint32 (*func)(void*), void* object);
void SVM_SetCbBdr(Sint32 arg0, void (*arg1)(), Sint32 arg2);
void SVM_SetCbLock(void (*func)(void*), void* object);
void SVM_SetCbUnlock(void (*func)(void*), void* object);
Sint32 SVM_ExecSvrFunc(Sint32 svtype);
Sint32 SVM_ExecSvrMain();
void SVM_Init();
void SVM_Finish();
Sint32 SVM_TestAndSet(Sint32* mem);
Sint32 SVM_SetCbTestAndSet(Sint32 (*callback)());
Sint32 SVM_DelCbTestAndSet();
