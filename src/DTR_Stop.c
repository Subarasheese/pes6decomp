/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dtr.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
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
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData;
extern int sceSifDmaStat(unsigned int id);
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
void DTR_Stop(DTR dtr);
DTX DTX_Create(Sint32 id, void* eewk, void* iopwk, Sint32 wklen);
void DTX_SetRcvCbf(DTX dtx, RcvCbf func, void* object);
void DTX_SetSndCbf(DTX dtx, SndCbf func, void* object);
void DTR_Stop(DTR dtr) {
    dtr->unk1 = 0;
    if (dtr->unk2 != 1) {
        return;
    }
    while (sceSifDmaStat(dtr->unk2C) >= 0) {
    }
    (*(dtr->unk4)->vtbl->PutChunk)(dtr->unk4, 0, &dtr->unkC);
    dtr->unkC.data = 0;
    dtr->unkC.len = 0;
    (*(dtr->unk8)->vtbl->PutChunk)(dtr->unk8, 1, &dtr->unk14);
    dtr->unk14.data = 0;
    dtr->unk2 = 0;
    dtr->unk14.len = 0;
    dtr->unk3C += dtr->unkC.len;
}