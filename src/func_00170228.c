/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dvci_sub.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
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
int sceCdRead(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdReadIOPm(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdStStart(u_int lbn, sceCdRMode* mode);
int sceCdStRead(u_int size, u_int* buf, u_int mode, u_int* err);
int sceCdReadCDDA(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCddaStStart(u_int lbn, sceCdRMode* mode);
int sceCddaStRead(u_int size, u_int* buf, u_int mode, u_int* err);
typedef void* SRD;
Sint32 SRD_ReqRdDvd(SRD srd, Sint32, Sint32, void*, sceCdRMode*);
Sint64 SRD_SceLseek(Sint32 fd, Sint64 offset, Sint32 whence);
Sint32 SRD_SceRead(Sint32 fd, void* buf, Sint32 nbyte);
void dvci_call_errfn(void* obj, const Char8* msg);
extern sceCdRMode D_00387250;
extern Sint32 D_00387254;
Sint32 dvCiLoadFcache(Sint8*, Sint8*, Sint32, Sint32);
void func_00170228(Sint32 trycount, Sint32 spindlctrl, Sint32 datapattern, Sint32 rdmode);
Sint32 htci_load_flist(const Char8* flist, Sint8* buf);
extern sceCdRMode D_00387250;
extern Sint32 D_00387254;
Sint32 analysis_flist_003DC6A0(Sint8*, Sint8*, Sint32, Sint32, Sint32);
Sint32 load_flist(Char8* flist, Sint8* buf);
Sint32 dvCiLoadFcache(Char8* flist, Sint8* fcbuf, Sint32 fcsize, Sint32 maxflen);
void func_00170228(Sint32 trycount, Sint32 spindlctrl, Sint32 datapattern, Sint32 rdmode) {
    D_00387250.trycount = trycount;
    D_00387250.spindlctrl = spindlctrl;
    D_00387250.datapattern = datapattern;
    D_00387254 = rdmode;
}