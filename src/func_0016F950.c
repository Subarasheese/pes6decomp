/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dvci_sub.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef unsigned int size_t;
typedef unsigned int u32;
typedef u32 uintptr_t;
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
int func_001147B0(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdReadIOPm(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int* sceCdCallback(void (*func)(int));
int* sceCdPOffCallback(void (*func)(void*), void* addr);
int func_00113D78(int mode);
int sceCdStStart(u_int lbn, sceCdRMode* mode);
int sceCdStRead(u_int size, u_int* buf, u_int mode, u_int* err);
int sceCdReadCDDA(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCddaStStart(u_int lbn, sceCdRMode* mode);
int sceCddaStRead(u_int size, u_int* buf, u_int mode, u_int* err);
typedef void* SRD;
void func_0016D5C0(Sint32 arg0);
Sint32 SRD_ReqRdDvd(SRD srd, Sint32, Sint32, void*, sceCdRMode*);
Sint64 SRD_SceLseek(Sint32 fd, Sint64 offset, Sint32 whence);
Sint32 SRD_SceRead(Sint32 fd, void* buf, Sint32 nbyte);
void dvci_call_errfn(void* obj, const Char8* msg);
Sint32 func_0016EA10(sceCdlFILE* fp, const Char8* fname);
void func_0016F5E8(const Char8* fname, Char8* path);
Sint32 D_0016FBF0(const Char8* fname, sceCdlFILE* fp);
Sint32 D_0016FC98(Sint8*, Sint8*, Sint32, Sint32);
void D_0016FE38(Sint32 trycount, Sint32 spindlctrl, Sint32 datapattern, Sint32 rdmode);
Sint32 func_00171608(const Char8* flist, Sint8* buf);
void* memset(void* s, int c, size_t n);
extern Char8 D_00387368[128];
void func_0016F5E8(const Char8* fname, Char8* path);
Sint32 analysis_flist_003DC6A0(Sint8*, Sint8*, Sint32, Sint32, Sint32);
Sint32 func_0016F950(Char8* flist, Sint8* buf) {
    sceCdlFILE fp;
    sceCdRMode cd_rmode;
    Char8 flist_prefix[5];
    memcpy(flist_prefix, flist, 5);
    flist_prefix[4] = '\0';
    if (strcasecmp(&flist_prefix, "HST:") == 0) {
        return func_00171608(flist + 4, buf);
    }
    memset(D_00387368, 0, sizeof(D_00387368));
    func_0016F5E8(flist, D_00387368);
    func_0016D5C0(0x9000);
    while (func_00113D78(1) == 1) {
    }
    func_0016D5C0(0x9001);
    func_0016D5C0(0x9100);
    if (func_0016EA10(&fp, &D_00387368) == 0) {
        func_0016D5C0(0x9101);
        return 0;
    }
    func_0016D5C0(0x9102);
    cd_rmode.spindlctrl = 1;
    cd_rmode.trycount = 0;
    cd_rmode.datapattern = 0;
    cd_rmode.pad = 0;
    func_0016D5C0(0x9200);
    if (func_001147B0(fp.lsn, 2, buf, &cd_rmode) == 0) {
        func_0016D5C0(0x9201);
        return 0;
    }
    func_0016D5C0(0x9202);
    func_0016D5C0(0x9300);
    while (func_00113D78(1) == 1) {
    }
    func_0016D5C0(0x9301);
    return 1;
}
Sint32 D_0016F940(Sint8* arg0, Sint32 arg1);
void D_0016FB00(sceCdlFILE* fp, const Char8* fname, uintptr_t arg2, Sint32 arg3);
Sint32 D_0016FBF0(const Char8* fname, sceCdlFILE* fp);
Sint32 D_0016FC98(Char8* flist, Sint8* fcbuf, Sint32 fcsize, Sint32 maxflen);