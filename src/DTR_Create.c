/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dtr.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef unsigned int size_t;
typedef unsigned char Uint8;
typedef char Sint8;
typedef unsigned short Uint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
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
void func_001763F8(void);
void func_00176410(void);
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
sceCdlLOCCD* sceCdIntToPos(int i, sceCdlLOCCD* p);
int sceCdRead(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdReadIOPm(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCdStStart(u_int lbn, sceCdRMode* mode);
int sceCdStRead(u_int size, u_int* buf, u_int mode, u_int* err);
int sceCdReadCDDA(u_int lbn, u_int sectors, void* buf, sceCdRMode* mode);
int sceCddaStStart(u_int lbn, sceCdRMode* mode);
int sceCddaStRead(u_int size, u_int* buf, u_int mode, u_int* err);
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData;
typedef struct {
               Sint8 unk0;
               Sint8 unk1;
               Sint8 unk2;
               SJ unk4;
               SJ unk8;
               SJCK unkC;
               SJCK unk14;
               sceSifDmaData dma_data;
               Sint32 unk2C;
               Sint32 unk30;
               Sint32 unk34;
               Sint32 unk38;
               Sint32 unk3C;
} DTR_OBJ;
typedef DTR_OBJ* DTR;
typedef void (*RcvCbf)(void*, void*, Sint32);
typedef void (*SndCbf)(void*, void*, Sint32);
typedef struct {
    Sint8 unk0;
    Sint8 unk1;
    Sint8 unk2;
    Sint8 unk3;
    void* unk4;
    Sint32 unk8;
    void* unkC;
    Sint32 unk10;
    Sint32* unk14;
    void* unk18;
    Sint32 unk1C;
    RcvCbf rcvcbf;
    void* rcvcbf_obj;
    SndCbf sndcbf;
    void* sndcbf_obj;
    sceSifDmaData dma_data;
    Sint32 unk40;
} DTX_OBJ;
typedef DTX_OBJ* DTX;
DTR DTR_Create(SJ sj, SJ arg1);
DTX DTX_Create(Sint32 id, void* eewk, void* iopwk, Sint32 wklen);
void DTX_SetRcvCbf(DTX dtx, RcvCbf func, void* object);
void DTX_SetSndCbf(DTX dtx, SndCbf func, void* object);
typedef char* va_list;
void func_001610B0(const char* fmt, ...);
void sceVprintf(const char* fmt, va_list ap);
int sceSnprintf(char* buffer, size_t count, const char* fmt, ...);
int sceVsnprintf(char* buffer, size_t count, const char* fmt, va_list ap);
void* memset(void* s, int c, size_t n);
extern DTR_OBJ D_00385120[32];
DTR DTR_Create(SJ sj, SJ arg1) {
    DTR dtr;
    Sint32 i;
    func_001763F8();
    for (i = 0; i < 32; i++) {
        dtr = &D_00385120[i];
        if (dtr->unk0 == 0) {
            break;
        }
    }
    if (i == 32) {
        func_001610B0("i:%d DTR_MAX_OBJ:%d\n", i, 32);
        dtr = 0;
    } else {
        memset(dtr, 0, sizeof(DTR_OBJ));
        dtr->unk1 = 0;
        dtr->unk38 = 0x40;
        dtr->unk4 = sj;
        dtr->unk8 = arg1;
        dtr->unk2 = 0;
        dtr->unk30 = 1;
        dtr->unk0 = 1;
        dtr->unk34 = 0;
    }
    func_00176410();
    return dtr;
}