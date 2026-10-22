/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from recvx-decomp (src/cri/mwlib/ee/lib/libadxe/adx_fs.c). */
extern char D_003C8320[];
typedef unsigned char Uint8;
typedef signed char Sint8;
typedef unsigned short Uint16;
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
SJ SJRBF_Create(Sint8 *buf, Sint32 bsize, Sint32 xsize);
SJ SJMEM_Create(Sint8 *data, Sint32 bsize);
Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);
typedef void *ADXSTM;
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
        Sint8 fname[(256)];
        void *dir;
} ADX_FS;
typedef ADX_FS *ADXF;
Sint32 ADXF_LoadPartitionNw(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo);
Sint32 ADXF_LoadPtNwEx(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo,
                                                void *tmpbuf, Sint32 tbsize);
ADXF ADXF_Open(Char8 *fname, void *atr);
ADXF ADXF_OpenAfs(Sint32 ptid, Sint32 flid);
Sint32 ADXF_ReadSj(ADXF adxf, Sint32 nsct, SJ sj);
Sint32 ADXF_ReadNw(ADXF adxf, Sint32 nsct, void *buf);
Sint32 ADXF_Seek(ADXF adxf, Sint32 pos, Sint32 type);
Sint32 ADXF_GetNumReqSct(ADXF adxf, Sint32 *seekpos);
Sint32 ADXF_GetFnameRange(Sint32 ptid, Sint32 flid,
                                                                        Char8 *fname, Sint32 *ofst, Sint32 *fnsct);
Sint32 ADXF_GetFnameRangeEx(Sint32 ptid, Sint32 flid,
                                        Char8 *fname, void **dir, Sint32 *ofst, Sint32 *fnsct);
void ADXF_SetReqRdSct(ADXF adxf, Sint32 nsct);
Sint32 ADXF_AddPartition(Sint32 ptid, Char8 *fname, void *ptinfo, Sint32 nfile);
Sint32 adxf_ChkPrmGfr(Sint32 ptid, Sint32 flid);
Sint32 adxf_ChkPrmPt(Sint32 ptid, void *ptinfo);
Sint32 ADXF_GetFnameRange(Sint32 ptid, Sint32 flid, Char8 *fname, Sint32 *ofst, Sint32 *fnsct);
Sint32 ADXF_GetFnameRangeEx(Sint32 ptid, Sint32 flid, Char8 *fname, void **dir, Sint32 *ofst, Sint32 *fnsct);
Sint32 ADXF_GetNumReqSct(ADXF adxf, Sint32 *seekpos);
Sint32 adxf_LoadData(ADXF adxf, Sint32 nsct, void *rdbuf);
Sint32 ADXF_LoadPartition(Sint32 ptid, Char8 *fname, void *ptinfo, Sint32 nfile);
Sint32 ADXF_LoadPartitionEx(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo);
Sint32 ADXF_LoadPartitionNw(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo);
ADXF ADXF_Open(Char8 *fname, void *atr);
ADXF ADXF_OpenAfs(Sint32 ptid, Sint32 flid);
Sint32 adxf_read_sj32(ADXF adxf, Sint32 nsct, SJ sj);
Sint32 ADXF_ReadNw(ADXF adxf, Sint32 nsct, void *buf);
Sint32 ADXF_ReadNw32(ADXF adxf, Sint32 nsct, void *buf);
Sint32 ADXF_ReadSj32(ADXF adxf, Sint32 nsct, SJ sj);
Sint32 ADXF_Seek(ADXF adxf, Sint32 pos, Sint32 type);
Sint32 adxf_SetAfsFileInfo(ADXF adxf, Sint32 ptid, Sint32 flid);
Sint32 adxf_SetFileInfoEx(ADXF adxf, Sint8 *fname, void *atr);
void ADXF_SetReqRdSct(ADXF adxf, Sint32 nsct);
void func_0015B478(const Sint8 *msg);
void ADXERR_EntryErrFunc(void (*func)(), void *obj);
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
extern Sint32 *buf;
Sint32 adxf_ChkPrmPt(Sint32 ptid, void *ptinfo);
Sint32 adxf_LoadData(ADXF adxf, Sint32 nsct, void *rdbuf);
Sint32 ADXF_LoadPartition(Sint32 ptid, Char8 *fname, void *ptinfo, Sint32 nfile);
Sint32 ADXF_LoadPartitionEx(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo);
Sint32 ADXF_LoadPartitionNw(Sint32 ptid, Char8 *fname, void *dir, void *ptinfo);
Sint32 ADXF_AddPartition(Sint32 ptid, Char8 *fname, void *ptinfo, Sint32 nfile);
Sint32 adxf_SetFileInfoEx(ADXF adxf, Sint8 *fname, void *atr);
ADXF ADXF_Open(Char8 *fname, void *atr);
Sint32 adxf_SetAfsFileInfo(ADXF adxf, Sint32 ptid, Sint32 flid);
ADXF ADXF_OpenAfs(Sint32 ptid, Sint32 flid);
Sint32 adxf_read_sj32(ADXF adxf, Sint32 nsct, SJ sj);
Sint32 ADXF_ReadSj32(ADXF adxf, Sint32 nsct, SJ sj);
Sint32 ADXF_ReadNw32(ADXF adxf, Sint32 nsct, void *buf);
Sint32 ADXF_ReadNw(ADXF adxf, Sint32 nsct, void *buf);
Sint32 ADXF_Seek(ADXF adxf, Sint32 pos, Sint32 type);
Sint32 ADXF_GetNumReqSct(ADXF adxf, Sint32 *seekpos)
{
    if (adxf == ((void *)0))
    {
        func_0015B478((const Sint8*)D_003C8320);
        *seekpos = 0;
        return (-3);
    }
    *seekpos = adxf->rdstpos;
    return adxf->rqsct;
}
Sint32 adxf_ChkPrmGfr(Sint32 ptid, Sint32 flid);
Sint32 ADXF_GetFnameRange(Sint32 ptid, Sint32 flid, Char8 *fname, Sint32 *ofst, Sint32 *fnsct);
Sint32 ADXF_GetFnameRangeEx(Sint32 ptid, Sint32 flid, Char8 *fname, void **dir, Sint32 *ofst, Sint32 *fnsct);
void ADXF_SetReqRdSct(ADXF adxf, Sint32 nsct);