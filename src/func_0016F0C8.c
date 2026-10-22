/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dvci.c). */
extern char D_003CA6F8[];
extern char D_003CA710[];
extern char D_003CA730[];
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
int* sceCdCallback(void (*func)(int));
int* sceCdPOffCallback(void (*func)(void*), void* addr);
int func_00113D78(int mode);
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
SRD func_0016C690();
void func_0016C718(SRD srd);
void func_0016D138();
void func_0016D248();
void func_0016CA88(SRD srd);
Sint32 func_0016C7B8(SRD srd, Sint32, Sint32, void*, sceCdRMode*);
Sint64 SRD_SceLseek(Sint32 fd, Sint64 offset, Sint32 whence);
Sint32 SRD_SceRead(Sint32 fd, void* buf, Sint32 nbyte);
extern sceCdRMode D_00387250;
extern Sint32 D_00387254;
void dvci_conv_fname(const Char8* fname, Char8* path);
Sint32 dvci_get_fstate(const Char8* fname, sceCdlFILE* fp);
Sint32 dvCiLoadFcache(Sint8*, Sint8*, Sint32, Sint32);
void dvCiSetRdMode(Sint32 trycount, Sint32 spindlctrl, Sint32 datapattern, Sint32 rdmode);
void SVM_SetCbBdr(Sint32 arg0, void (*arg1)(), Sint32 arg2);
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbLock(void (*func)(void*), void* object);
void SVM_SetCbUnlock(void (*func)(void*), void* object);
void func_00105D98(void*, void*);extern void D_0016EBA8(void (*func)(void*, const Char8*, void*), void* obj);
DVG_CI D_0016EDE8(Char8* fname, void* arg1, Sint32 rw);
Sint32 D_0016EFC8(DVG_CI handl, Sint32 offset, Sint32 whence);
Sint32 func_0016F0C8(DVG_CI handl, Sint32 nsct, void* buf);
Sint32 D_0016F4C8(DVG_CI handl, Sint32 arg1);
void func_0016E9E0(void* obj, const Char8* msg);
Sint32 func_0016EA10(sceCdlFILE* fp, const Char8* fname);
void D_0016EBA8(void (*func)(void*, const Char8*, void*), void* obj);
DVG_CI D_0016EDE8(Char8* fname, void* arg1, Sint32 rw);
Sint32 D_0016EFC8(DVG_CI handl, Sint32 offset, Sint32 whence);
Sint32 func_0016F0C8(DVG_CI handl, Sint32 nsct, void* buf) {
    if (handl == 0) {
        func_0016E9E0(handl, D_003CA6F8);
        return 0;
    }
    if (nsct < 0) {
        func_0016E9E0(handl, D_003CA710);
        return 0;
    }
    if (buf == 0) {
        func_0016E9E0(handl, D_003CA730);
        return 0;
    }
    if (handl->stat == 2) {
        return 0;
    }
    if (nsct == 0) {
        handl->stat = 1;
        return 0;
    }
    handl->srd = func_0016C690();
    if (handl->srd == 0) {
        return 0;
    }
    handl->cdrmode.trycount = D_00387250.trycount;
    handl->cdrmode.spindlctrl = D_00387250.spindlctrl;
    handl->cdrmode.datapattern = D_00387250.datapattern;
    handl->unk18 = buf;
    handl->unk10 = ((nsct) < (handl->unk8 - handl->unkC) ? (nsct) : (handl->unk8 - handl->unkC));
    func_00105D98(buf, buf + (handl->unk10 << 11) - 1);
    if (func_0016C7B8(handl->srd, handl->unk20.lsn + handl->unkC, handl->unk10, handl->unk18, &handl->cdrmode) == 0) {
        func_0016C718(handl->srd);
        return 0;
    }
    if (D_00387254 == 1) {
        func_00113D78(0);
        func_0016D248();
        func_0016D138();
        func_0016CA88(handl->srd);
        func_0016C718(handl->srd);
        handl->srd = 0;
        handl->unk14 = nsct;
        handl->stat = 1;
        handl->unkC += handl->unk10;
    } else {
        handl->stat = 2;
    }
    return handl->unk10;
}
Sint32 D_0016F4C8(DVG_CI handl, Sint32 arg1);