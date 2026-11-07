/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/filestub.c). */
/*
 * Unit: sdk/sce/filestub
 *
 * Functions:
 *   0x0027c2c8 _sceFsIobSemaMK
 *   0x0027c328 new_iob
 *   0x0027c3b0 get_iob
 *   0x0027c420 _sceFs_Rcv_Intr
 *   0x0027c7e0 _sceFsSemInit
 *   0x0027c830 _sceFsWaitS
 *   0x0027c860 _sceFsSigSema
 *   0x0027c870 sceFsInit
 *   0x0027ca10 _fs_version
 *   0x0027caa0 sceFsReset
 *   0x0027cad8 sceOpen
 *   0x0027cd60 sceClose
 *   0x0027cee0 sceLseek
 *   0x0027d118 sceRead
 *   0x0027d388 sceWrite
 *   0x0027d648 sceIoctl
 *   0x0027d998 sceIoctl2
 *   0x0027db70 _sceCallCode
 *   0x0027dd18 sceRemove
 *   0x0027dd38 sceMkdir
 *   0x0027dee8 sceRmdir
 *   0x0027df08 sceFormat
 *   0x0027e178 sceAddDrv
 *   0x0027e298 sceDelDrv
 *   0x0027e2b8 sceDopen
 *   0x0027e358 sceDclose
 *   0x0027e4c0 sceDread
 *   0x0027e618 sceGetstat
 *   0x0027e7b8 sceChstat
 *   0x0027e9f8 sceRename
 *   0x0027ebe8 sceChdir
 *   0x0027ec08 sceSync
 *   0x0027eda0 sceMount
 *   0x0027f010 sceUmount
 *   0x0027f030 sceLseek64
 *   0x0027f268 sceDevctl
 *   0x0027f498 sceSymlink
 *   0x0027f678 sceReadlink
 */

#define FS_NIOB 32
#define FS_IOB_BUSY 0x10000000
#define FS_NQUEUE 32
#define FS_NAME_MAX 0x400
#define FS_IOCTL_ARG_MAX 0x400
#define FS_BIND_WAIT 0x100000
#define FS_RCV_READ_SIZE 0xa4

#define FS_RPC_SERVER 0x80000001
#define FS_CMD_RCV 0x80000011

#define FS_OPEN 0
#define FS_CLOSE 1
#define FS_READ 2
#define FS_WRITE 3
#define FS_LSEEK 4
#define FS_IOCTL 5
#define FS_MKDIR 7
#define FS_DCLOSE 10
#define FS_DREAD 11
#define FS_GETSTAT 12
#define FS_CHSTAT 13
#define FS_FORMAT 14
#define FS_ADDDRV 15
#define FS_RENAME 17
#define FS_SYNC 19
#define FS_MOUNT 20
#define FS_LSEEK64 22
#define FS_DEVCTL 23
#define FS_SYMLINK 24
#define FS_READLINK 25
#define FS_IOCTL2 26
#define FS_INIT 0xff

#define FS_OPEN_FLAG_MASK 0x0fffffff
#define FS_NOWAIT 0x8000
#define FS_UNCACHED_BUF 0x20000000

#define FS_IOCTL_PENDING 1
#define FS_IOCTL_RESULT 2
#define FS_IOCTL_RESULT64 3

#define SCE_EBADF 9
#define SCE_E2BIG 7
#define SCE_EAGAIN 11
#define SCE_ENODEV 19
#define SCE_EINVAL 22
#define SCE_ECALLMISS 0x10001
#define SCE_EVERSIONMISS 0x10004

#define UNCACHED(p) ((void *)((unsigned int)(p) | 0x20000000))

typedef char *va_list;
#define va_start(ap, last) ((ap) = (va_list)__builtin_next_arg(last) - (__builtin_args_info(2) < 8 ? (8 - __builtin_args_info(2)) * 8 : 0))
#define va_arg(ap, type) (*(type *)(((ap) += 8) - 8))
#define va_end(ap)

typedef struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
} SemaParam;

typedef struct FsIob {
    int fd;
    int flags;
    int pad[2];
} FsIob;

typedef struct sce_stat {
    unsigned int st_mode;
    unsigned int st_attr;
    unsigned int st_size;
    unsigned char st_ctime[8];
    unsigned char st_atime[8];
    unsigned char st_mtime[8];
    unsigned int st_hisize;
    unsigned int st_private[6];
} sce_stat;
typedef struct FsRcvHeader {
    int semid;
    int code;
    void *dest;
    int size;
} FsRcvHeader;

typedef struct FsReadSplit {
    int head_size;
    int tail_size;
    char *head_dest;
    char *tail_dest;
    char head[64];
    char tail[64];
} FsReadSplit;

typedef struct FsRcvData {
    FsRcvHeader hdr;
    int result;
    union {
        FsReadSplit read;
        struct {
            void *dest;
            char dirent[0x144];
        } dread;
        struct {
            void *dest;
            char stat[0x40];
        } getstat;
        struct {
            void *dest;
            unsigned int size;
            char data[0x400];
        } buf;
    } u;
} FsRcvData;

typedef struct FsCallArg {
    int semid;
    int *result;
    int result_size;
    char name[FS_NAME_MAX];
} FsCallArg;

typedef struct FsOpenArg {
    int semid;
    int *result;
    int result_size;
    int flags;
    int mode;
    char name[FS_NAME_MAX];
    int fd;
} FsOpenArg;

typedef struct FsCloseArg {
    int semid;
    int *result;
    int result_size;
    int fd;
    int index;
} FsCloseArg;

typedef struct FsLseekArg {
    int semid;
    int *result;
    int result_size;
    int fd;
    int offset;
    int whence;
    int index;
} FsLseekArg;

typedef struct FsReadArg {
    int semid;
    int *result;
    int result_size;
    int fd;
    void *buf;
    int size;
    int reserved;
    int index;
} FsReadArg;

typedef struct FsWriteArg {
    int semid;
    int *result;
    int result_size;
    int fd;
    const void *buf;
    int size;
    int head_size;
    char head[16];
    int index;
} FsWriteArg;

typedef struct FsIoctlArg {
    int semid;
    int *result;
    int result_size;
    int fd;
    int request;
    char arg[FS_IOCTL_ARG_MAX];
    void *buf;
    unsigned int buflen;
    unsigned int arglen;
} FsIoctlArg;

typedef struct FsMkdirArg {
    int semid;
    int *result;
    int result_size;
    int mode;
    char name[FS_NAME_MAX];
} FsMkdirArg;

typedef struct FsFormatArg {
    int semid;
    int *result;
    int result_size;
    char dev[FS_NAME_MAX];
    char blockdev[FS_NAME_MAX];
    char arg[FS_IOCTL_ARG_MAX];
    int arglen;
} FsFormatArg;

typedef struct FsAddDrvArg {
    int semid;
    int *result;
    int result_size;
    void *device;
} FsAddDrvArg;

typedef struct FsGetstatArg {
    int semid;
    int *result;
    int result_size;
    sce_stat *stat;
    unsigned char name[FS_NAME_MAX];
} FsGetstatArg;

typedef struct FsChstatArg {
    int semid;
    int *result;
    int result_size;
    unsigned int cbit;
    sce_stat stat;
    unsigned char name[FS_NAME_MAX];
} FsChstatArg;

typedef struct FsRenameArg {
    int semid;
    int *result;
    int result_size;
    char oldname[FS_NAME_MAX];
    char newname[FS_NAME_MAX];
} FsRenameArg;

typedef struct FsSyncArg {
    int semid;
    int *result;
    int result_size;
    int reserved;
    int flag;
    char name[FS_NAME_MAX];
} FsSyncArg;

typedef struct FsMountArg {
    int semid;
    int *result;
    int result_size;
    char fsname[FS_NAME_MAX];
    char devname[FS_NAME_MAX];
    char arg[FS_IOCTL_ARG_MAX];
    int flag;
    int arglen;
} FsMountArg;

typedef struct FsLseek64Arg {
    int semid;
    long *result;
    int result_size;
    int fd;
    long offset;
    int whence;
    int index;
} FsLseek64Arg;

typedef struct FsDevctlArg {
    int semid;
    int *result;
    int result_size;
    char name[FS_NAME_MAX];
    char arg[FS_IOCTL_ARG_MAX];
    int cmd;
    unsigned int arglen;
    void *buf;
    unsigned int buflen;
} FsDevctlArg;

typedef struct FsSymlinkArg {
    int semid;
    int *result;
    int result_size;
    char existing[FS_NAME_MAX];
    char newname[FS_NAME_MAX];
} FsSymlinkArg;

typedef struct FsReadlinkArg {
    int semid;
    int *result;
    int result_size;
    unsigned int buflen;
    char *buf;
    char name[FS_NAME_MAX];
} FsReadlinkArg;
typedef union FsSendData {
    FsCallArg call;
    FsOpenArg open;
    FsCloseArg close;
    FsLseekArg lseek;
    FsReadArg read;
    FsWriteArg write;
    FsIoctlArg ioctl;
    FsMkdirArg mkdir;
    FsFormatArg format;
    FsAddDrvArg adddrv;
    FsGetstatArg getstat;
    FsChstatArg chstat;
    FsRenameArg rename;
    FsSyncArg sync;
    FsMountArg mount;
    FsLseek64Arg lseek64;
    FsDevctlArg devctl;
    FsSymlinkArg symlink;
    FsReadlinkArg readlink;
} FsSendData;

typedef struct sceSifClientData {
    unsigned char rpc_data[16];
    unsigned int command;
    void *buff;
    void *cbuff;
    void (*end_func)(void *);
    void *end_param;
    void *server;
} sceSifClientData;

extern int D_0037138C;
extern int D_00613404;
extern int D_00613408;
extern int D_0061340C;
extern FsIob D_00706280[];
extern FsRcvData D_00705E40;
extern FsSendData D_007051C0;
extern char D_00705E00[];
extern char D_007064C0[];
extern sceSifClientData D_00706480;
extern volatile int _sceFs_q[];
extern char D_003EF428[];
extern char D_00612BB4[];
extern char *D_00613410;
extern int *D_00705180;

#define fs_initialized  D_0037138C
#define fs_sema         D_00613404
#define fs_iob_sema     D_00613408
#define fs_io_sema      D_0061340C
#define fs_iob          D_00706280
#define fs_rcv_data     D_00705E40
#define fs_send         D_007051C0
#define fs_rcv_rpc      D_00705E00
#define fs_cmd_data     D_007064C0
#define fs_client       D_00706480
#define fs_iop_version  D_003EF428
#define fs_ee_version   D_00612BB4
#define fs_wildcard     D_00613410
#define fs_ioctl_out    D_00705180

extern int CreateSema(SemaParam *param);
extern int WaitSema(int sema);
extern int SignalSema(int sema);
extern int DeleteSema(int sema);
extern int iSignalSema(int sema);
extern void *memset(void *dest, int c, unsigned int n);
extern void *memcpy(void *dest, const void *src, unsigned int n);
extern int memcmp(const void *a, const void *b, unsigned int n);
extern int _sceCallCode(const char *name, int code);
extern void sceSifWriteBackDCache(void *ptr, int size);
extern void sceSifInitRpc(unsigned int mode);
extern int DIntr(void);
extern int EIntr(void);
extern void sceSifAddCmdHandler(unsigned int cid, void (*handler)(void *, void *), void *data);
extern int sceSifBindRpc(sceSifClientData *client, unsigned int request,
                         unsigned int mode);
extern int sceSifCallRpc(sceSifClientData *client, unsigned int fno,
                         unsigned int mode, void *send, int ssize,
                         void *receive, int rsize, void (*end_func)(void *),
                         void *end_param);void _sceFsIobSemaMK(void);
FsIob *new_iob(void);
FsIob *get_iob(int fd);
void _sceFs_Rcv_Intr(void *pkt, void *param);
void _sceFsSemInit(void);
int _sceFsWaitS(int code);
void _sceFsSigSema(void);
int sceFsInit(void);
int _fs_version(void);



int sceFsReset(void)
{
    fs_initialized = 0;
    memset(fs_iop_version, 0, 4);
    return 0;
}
int sceOpen(const char *filename, int flag, ...);
int sceClose(int fd);
int sceLseek(int fd, int offset, int whence);
int sceRead(int fd, void *buf, int nbyte);
int sceWrite(int fd, const void *buf, int nbyte);
int sceIoctl(int fd, int req, void *argp);
int sceIoctl2(int fd, int request, void *argp, unsigned int arglen, void *bufp, unsigned int buflen);
int _sceCallCode(const char *name, int code);
int sceRemove(const char *name);
int sceMkdir(const char *name, int mode);
int sceRmdir(const char *name);
int sceFormat(const char *dev, const char *blockdev, void *argp, int arglen);
int sceAddDrv(void *device);
int sceDelDrv(const char *name);
int sceDopen(const char *name);
int sceDclose(int fd);
int sceDread(int fd, void *dirent);
int sceGetstat(const char *name, sce_stat *stat);
int sceChstat(const char *name, sce_stat *stat, unsigned int cbit);
int sceRename(const char *oldname, const char *newname);
int sceChdir(const char *name);
int sceSync(const char *name, int flag);
int sceMount(const char *fsname, const char *devname, int flag, void *argp, int arglen);
int sceUmount(const char *name);
long sceLseek64(int fd, long offset, int whence);
int sceDevctl(const char *name, int cmd, void *argp, unsigned int arglen, void *bufp, unsigned int buflen);
int sceSymlink(const char *existing, const char *newname);
int sceReadlink(const char *name, char *buf, unsigned int buflen);
