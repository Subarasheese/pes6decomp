/* compiler: ee-gcc-2.96-G0-g */
/* fmil95/recvx-decomp src/cri/mwlib/ee/lib/libadxe/cri_cvfs.c (cvFsReqRd). See THIRD_PARTY.md. */

typedef signed char Sint8;
typedef signed int Sint32;
typedef enum {
    CVE_FS_ST_IDLE = 0,
    CVE_FS_ST_COMPLETE = 1,
    CVE_FS_ST_TRANS = 2,
    CVE_FS_ST_ERR = 3,
    CVE_FS_ST_NUM = 4
} CVE_FS_ST;
typedef struct _vfs_vtbl {
    void (*ExecServer)();
    void (*EntryErrFunc)();
    Sint32 (*GetFileSize)();
    Sint32 (*GetFreeSize)();
    void *(*Open)();
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
typedef struct {
    CVFS_IF vtbl;
    void *obj;
} CVS_FS_OBJ;
typedef CVS_FS_OBJ *CVFS;
extern void func_0016A550(const Sint8 *msg);

Sint32 func_0016B118(CVFS cvfs, Sint32 nsct, void *buf) {
    Sint32 val;
    if (cvfs == ((void *)0)) {
        func_0016A550((const Sint8 *)"cvFsReqRd #1:handle error");
        return 0;
    }
    if (cvfs->vtbl->ReqRd != ((void *)0)) {
        val = cvfs->vtbl->ReqRd(cvfs->obj, nsct, buf);
    } else {
        val = 0;
        func_0016A550((const Sint8 *)"cvFsReqRd #2:vtbl error");
    }
    return val;
}
