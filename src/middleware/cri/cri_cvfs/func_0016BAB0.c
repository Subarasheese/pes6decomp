/* CRI middleware code; source adapted from recvx-decomp (src/cri/mwlib/ee/lib/libadxe/cri_cvfs.c). */
 
extern char D_003C99C0[];  
extern char D_003C99E8[];		 

typedef signed char				Sint8;		 

typedef signed int				Sint32;

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
void D_0016A528(void *obj, const Sint8 *msg, void *hndl);
void func_0016A550(const Sint8 *msg);
Sint32 func_0016BAB0(CVFS cvfs);
Sint32 D_0016BCE8(CVFS cvfs, Sint32 p0, Sint32 p1, Sint32 p2);
Sint32 D_0016BD50(CVFS cvfs, Sint32 p0, Sint32 p1, Sint32 p2);
Sint32 D_0016B020(CVFS cvfs, Sint32 nsct, void *buf);
Sint32 D_0016B088(CVFS cvfs, Sint32 nsct, void *buf);
Sint32 D_0016AFB8(CVFS cvfs, Sint32 nsct, CVE_FS_SK sk_mode);
void D_0016B530(CVFS cvfs, Sint32 sctlen);
void D_0016A528(void *obj, const Sint8 *msg, void *hndl);
void func_0016A550(const Sint8 *msg);
Sint32 D_0016AFB8(CVFS cvfs, Sint32 nsct, CVE_FS_SK sk_mode);
Sint32 D_0016B020(CVFS cvfs, Sint32 nsct, void *buf);
Sint32 D_0016B088(CVFS cvfs, Sint32 nsct, void *buf);
void D_0016B530(CVFS cvfs, Sint32 sctlen);

Sint32 func_0016BAB0(CVFS cvfs)
{
    Sint32 val;

    val = 0;
    
    if (cvfs == ((void *)0)) 
    {
        func_0016A550((const Sint8*)D_003C99C0);
    }
    else if (cvfs->vtbl->GetMaxByteRate == ((void *)0)) 
    {
        func_0016A550((const Sint8*)D_003C99E8);
    }
    else
    {
        val = cvfs->vtbl->GetMaxByteRate(cvfs->obj);
        
        return val;
    }
    
    return val;
}
Sint32 D_0016BCE8(CVFS cvfs, Sint32 p0, Sint32 p1, Sint32 p2);
Sint32 D_0016BD50(CVFS cvfs, Sint32 p0, Sint32 p1, Sint32 p2);