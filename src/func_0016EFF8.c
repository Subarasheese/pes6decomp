/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dvci.c). */
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
typedef struct {
               Sint8 used;
               Sint8 unk1;
               Sint8 stat;
               Sint8 unk3;
               Sint32 unk4;
               Sint32 unk8;
               Sint32 unkC;
               Sint32 unk10;
               Sint32 unk14;
               void* unk18;
               SRD srd;
               sceCdlFILE unk20;
               sceCdRMode cdrmode;
} DVG_CI_OBJ;
typedef DVG_CI_OBJ* DVG_CI;
Sint32 SRD_ReqRdDvd(SRD srd, Sint32, Sint32, void*, sceCdRMode*);
Sint64 SRD_SceLseek(Sint32 fd, Sint64 offset, Sint32 whence);
Sint32 SRD_SceRead(Sint32 fd, void* buf, Sint32 nbyte);
void dvci_conv_fname(const Char8* fname, Char8* path);
Sint32 dvci_get_fstate(const Char8* fname, sceCdlFILE* fp);
Sint32 dvCiLoadFcache(Sint8*, Sint8*, Sint32, Sint32);
void dvCiSetRdMode(Sint32 trycount, Sint32 spindlctrl, Sint32 datapattern, Sint32 rdmode);
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
DVG_CI func_0016EDD0(Char8* fname, void* arg1, Sint32 rw);
Sint32 func_0016EFF8(DVG_CI handl, Sint32 offset, Sint32 whence);
Sint32 D_0016F080(DVG_CI handl, Sint32 nsct, void* buf);
Sint32 D_0016F498(DVG_CI handl, Sint32 arg1);
void func_0016E9E0(void* obj, const Char8* msg);
Sint32 D_0016EA08(sceCdlFILE* fp, const Char8* fname);
DVG_CI func_0016EDD0(Char8* fname, void* arg1, Sint32 rw);
Sint32 func_0016EFF8(DVG_CI handl, Sint32 offset, Sint32 whence) {
    if (handl == 0) {
        func_0016E9E0(handl, "E0092912:handl is null.");
        return 0;
    }
    if (whence == 0) {
        handl->unkC = offset;
    } else if (whence == 2) {
        handl->unkC = handl->unk8 + offset;
    } else if (whence == 1) {
        handl->unkC += offset;
    }
    handl->unk14 = 0;
    handl->unkC = ((((((handl->unkC)) < ((handl->unk8)) ? ((handl->unkC)) : ((handl->unk8)))) < ((0)) ? ((0)) : ((((handl->unkC)) < ((handl->unk8)) ? ((handl->unkC)) : ((handl->unk8))))));
    return handl->unkC;
}
Sint32 D_0016F080(DVG_CI handl, Sint32 nsct, void* buf);
Sint32 D_0016F498(DVG_CI handl, Sint32 arg1);