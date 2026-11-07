/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/cri_srd.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef int s32;
typedef char Sint8;
typedef signed int Sint32;
typedef signed long Sint64;
typedef char Char8;
void func_001795E0();
void func_00179658();
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
    u_int lsn;
    u_int size;
    char name[16];
    u_char date[8];
    u_int flag;
} sceCdlFILE;
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
typedef SRD_OBJ* SRD;extern SRD_OBJ D_00385098;
extern Sint32 volatile D_003850F8;
Sint32 D_0016D088(Sint32 fd, Sint32 req, void* arg2);
Sint64 D_0016CFD0(Sint32 fd, Sint64 offset, Sint32 whence);
Sint32 D_0016D1C0(Sint32 fd, void* buf, Sint32 nbyte);void func_0016C660();
SRD func_0016C690() {
    SRD srd = 0;
    func_001795E0();
    if (D_00385098.unk0 == 0) {
        func_0016C660();
        D_00385098.unk0 = 1;
        D_00385098.stat = 0;
        D_00385098.unk3 = -1;
        D_00385098.unk4 = 0;
        D_003850F8 += 1;
        srd = &D_00385098;
    }
    func_00179658();
    return srd;
}
s32 func_0016C7B8(SRD srd, s32 arg1, s32 arg2, void* arg3, sceCdRMode* arg4);
Sint32 D_0016D088(Sint32 fd, Sint32 req, void* arg2);
Sint32 D_0016D100(const Char8* filename, Sint32 flag);
Sint32 D_0016D1C0(Sint32 fd, void* buf, Sint32 nbyte);