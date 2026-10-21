/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/htci_sub.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef unsigned int size_t;
typedef unsigned char Uint8;
typedef char Sint8;
typedef unsigned short Uint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef signed long Sint64;
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
SJ SJUNI_Create(Sint32 mode, Sint8 *work, Sint32 wksize);
Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);
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
typedef void* SRD;
void func_0016D5C0(Sint32 arg0);
Sint32 SRD_ReqRdDvd(SRD srd, Sint32, Sint32, void*, sceCdRMode*);
Sint32 func_0016D8D0(const Char8* filename, Sint32 flag);
Sint32 func_0016D938(Sint32 fd);
Sint64 func_0016D7A0(Sint32 fd, Sint64 offset, Sint32 whence);
Sint32 func_0016D990(Sint32 fd, void* buf, Sint32 nbyte);
Sint32 func_00171608(const Char8* flist, Sint8* buf);
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
void* memset(void* s, int c, size_t n);
void func_00171248(const Char8* flist, Char8* fname);
Sint32 func_00171608(const Char8* flist, Sint8* buf) {
    Char8 fname[256];
    Sint32 fd;
    Sint32 read_err;
    Sint32 offset_start;
    Sint64 offset_end;
    memset(fname, 0, sizeof(fname));
    func_00171248(flist, fname);
    func_0016D5C0(0x6000);
    fd = func_0016D8D0(fname, 0x0001);
    func_0016D5C0(0x6001);
    if (fd < 0) {
        return 0;
    }
    func_0016D5C0(0x6100);
    offset_end = func_0016D7A0(fd, 0, (2));
    func_0016D5C0(0x6101);
    if (offset_end < 0) {
        return 0;
    }
    func_0016D5C0(0x6200);
    offset_start = (Sint32)func_0016D7A0(fd, 0, (0));
    func_0016D5C0(0x6201);
    if (offset_start < 0) {
        return 0;
    }
    if (offset_end > 0x1000) {
        offset_end = 0x1000;
    }
    func_0016D5C0(0x6300);
    read_err = func_0016D990(fd, buf, (Sint32)offset_end);
    func_0016D5C0(0x6301);
    if (read_err < 0) {
        func_0016D5C0(0x6500);
        func_0016D938(fd);
        func_0016D5C0(0x6501);
        return 0;
    }
    func_0016D5C0(0x6400);
    func_0016D938(fd);
    func_0016D5C0(0x6401);
    return 1;
}