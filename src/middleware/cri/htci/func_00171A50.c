/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dvci_sub.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
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
typedef void* SRD;
typedef struct {
    Uint32 lsn;
    Uint32 size;
} DVG_FLIST_SUB;
typedef struct {
    uintptr_t unk0;
    Sint32 unk4;
    Sint32 unk8;
    Sint32 unkC;
} DVG_FLIST_TBL;
Sint32 SRD_ReqRdDvd(SRD srd, Sint32, Sint32, void*, sceCdRMode*);
Sint64 SRD_SceLseek(Sint32 fd, Sint64 offset, Sint32 whence);
Sint32 SRD_SceRead(Sint32 fd, void* buf, Sint32 nbyte);
void dvci_call_errfn(void* obj, const Char8* msg);
Sint32 dvCiCdSearchFile(sceCdlFILE* fp, const Char8* fname);
void D_00171298(const Char8* fname, Char8* path);
Sint32 D_001718A0(const Char8* fname, sceCdlFILE* fp);
Sint32 D_00171948(Sint8*, Sint8*, Sint32, Sint32);
void D_00171AE8(Sint32 trycount, Sint32 spindlctrl, Sint32 datapattern, Sint32 rdmode);
Sint32 htci_load_flist(const Char8* flist, Sint8* buf);
extern DVG_FLIST_TBL D_00387800;
void D_00171298(const Char8* fname, Char8* path);
Sint32 func_00171378(Char8 a, Char8 b);
Sint32 func_001713D0(const Char8* a, const Char8* b);
Sint32 analysis_flist_003DC6A0(Sint8*, Sint8*, Sint32, Sint32, Sint32);
Sint32 func_00171468(Char8* flist, Sint8* buf);
void func_00171A50(sceCdlFILE* fp, const Char8* fname, uintptr_t arg2, Sint32 arg3) {
    DVG_FLIST_SUB* flist_sub = (DVG_FLIST_SUB*)arg2;
    Sint32 i;
    for (i = 0; i < arg3; i++) {
        if (func_001713D0(fname, (Char8*)arg2 + ((D_00387800.unk8 * 8) + ((D_00387800.unkC + 1) * i))) == 0) {
            fp->lsn = flist_sub[i].lsn;
            fp->size = flist_sub[i].size;
            return;
        }
    }
    fp->lsn = 0;
    fp->size = 0;
}
Sint32 D_001718A0(const Char8* fname, sceCdlFILE* fp);
Sint32 D_00171948(Char8* flist, Sint8* fcbuf, Sint32 fcsize, Sint32 maxflen);