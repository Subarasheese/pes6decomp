/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/cri_srd.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef int s32;
typedef char Sint8;
typedef signed int Sint32;
typedef signed long Sint64;
typedef char Char8;
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
void LoadExecPS2(const char* filename, int num_args, char* args[]) __attribute__((noreturn));
typedef struct {
    u_char trycount;
    u_char spindlctrl;
    u_char datapattern;
    u_char pad;
} sceCdRMode;
typedef struct {
    u_char minute;
    u_char second;
    u_char sector;
    u_char track;
} sceCdlLOCCD;
typedef struct {
    u_int lsn;
    u_int size;
    char name[16];
    u_char date[8];
    u_int flag;
} sceCdlFILE;
sceCdlLOCCD* sceCdIntToPos(int i, sceCdlLOCCD* p);
int sceCdSearchFile(sceCdlFILE* fp, const char* name);
int sceCdLayerSearchFile(sceCdlFILE* fp, const char* name, int layer);
int sceCdRead(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdReadIOPm(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdStStart(u_int lbn, sceCdRMode* mode);
int sceCdStRead(u_int size, u_int* buf, u_int mode, u_int* err);
int sceCdReadCDDA(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCddaStStart(u_int lbn, sceCdRMode* mode);
int sceCddaStRead(u_int size, u_int* buf, u_int mode, u_int* err);
struct sce_stat {
    unsigned int st_mode;
    unsigned int st_attr;
    unsigned int st_size;
    unsigned char st_ctime[8];
    unsigned char st_atime[8];
    unsigned char st_mtime[8];
    unsigned int st_hisize;
    unsigned int st_private[6];
};
struct sce_dirent {
    struct sce_stat d_stat;
    char d_name[256];
    void* d_private;
};
extern int sceOpen(const char* filename, int flag, ...);
extern int sceRead(int fd, void* buf, int nbyte);
extern int sceWrite(int fd, const void* buf, int nbyte);
extern int sceLseek(int fd, int offset, int where);
extern int sceIoctl(int fd, int req, void*);
extern int sceDread(int fd, struct sce_dirent* buf);
extern int sceGetstat(const char* name, struct sce_stat* buf);
extern int sceChstat(const char* name, struct sce_stat* buf, unsigned int cbit);
extern int sceFormat(const char* path, const char* blkdevname, void* arg, int arglen);
extern int sceSync(const char* path, int flag);
extern int sceMount(const char* fsdevname, const char* blkdevname, int flag, void* arg, int arglen);
extern long sceLseek64(int fd, long offset, int whence);
extern int sceDevctl(const char* devname, int cmd, const void* arg, unsigned int arglen, void* bufp,
                     unsigned int buflen);
extern int sceReadlink(const char* path, char* buf, unsigned int bufsize);
extern int sceIoctl2(int fd, int request, const void* argp, unsigned int arglen, void* bufp, unsigned int buflen);
typedef enum SceStdioFunc { SCE_STDIO_FUNC_ANYTHING = 0 } SceStdioFunc;
int sceStdioConvertError(SceStdioFunc func, int ioerror);
typedef struct {
    unsigned int epc;
    unsigned int gp;
    unsigned int sp;
    unsigned int dummy;
} sceExecData;
extern int sceSifLoadModule(const char* filename, int args, const char* argp);
extern int sceSifLoadModuleBuffer(const void* addr, int args, const char* argp);
extern int sceSifLoadStartModule(const char* filename, int args, const char* argp, int* result);
extern int sceSifLoadStartModuleBuffer(const void* addr, int args, const char* argp, int* result);
extern int sceSifLoadElf(const char* name, sceExecData* data);
extern int sceSifLoadElfPart(const char* name, const char* secname, sceExecData* data);
extern int sceSifStopModule(int modid, int args, const char* argp, int* result);
typedef void (*sceSifRebootNotifyHandler)(int mode, void* data);
typedef struct {
    sceSifRebootNotifyHandler func;
    void* data;
    void* gp;
    void* reserve;
} sceSifRebootNotifyData;
extern sceSifRebootNotifyData* sceSifSetRebootNotifyBuffer(sceSifRebootNotifyData* p, int size);
typedef struct {
               Sint8 unk0;
               Sint8 unk1;
               Sint8 stat;
               Sint8 unk3;
               Sint32 unk4;
               Sint32 unk8;
               Sint32 unkC;
               void* unk10;
               sceCdRMode unk14;
               void* unk18;
               Sint32 unk1C;
               Sint32 unk20;
               Sint32 unk24;
               Sint64 unk28;
               Sint32 fd;
               Sint32 unk34;
} SRD_OBJ;
typedef SRD_OBJ* SRD;
Sint32 SRD_SceIoctl(Sint32 fd, Sint32 req, void* arg2);
Sint64 SRD_SceLseek(Sint32 fd, Sint64 offset, Sint32 whence);
Sint32 SRD_SceRead(Sint32 fd, void* buf, Sint32 nbyte);
s32 SRD_ReqRdDvd(SRD srd, s32 arg1, s32 arg2, void* arg3, sceCdRMode* arg4);
void func_0016C960() {
    Sint32 i;
    for (i = 0; i < 0x4000; i++) {
    }
}
Sint32 SRD_SceIoctl(Sint32 fd, Sint32 req, void* arg2);
Sint32 SRD_SceOpen(const Char8* filename, Sint32 flag);
Sint32 SRD_SceRead(Sint32 fd, void* buf, Sint32 nbyte);