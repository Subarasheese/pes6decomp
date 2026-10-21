/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dtx.c). */
typedef unsigned char u_char;
typedef unsigned int u_int;
typedef unsigned int size_t;
typedef int s32;
typedef s32 intptr_t;
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
DTX DTX_Create(Sint32 id, void* eewk, void* iopwk, Sint32 wklen);
void DTX_SetRcvCbf(DTX dtx, RcvCbf func, void* object);
void DTX_SetSndCbf(DTX dtx, SndCbf func, void* object);
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
typedef char* va_list;
void scePrintf(const char* fmt, ...);
void sceVprintf(const char* fmt, va_list ap);
int sceSnprintf(char* buffer, size_t count, const char* fmt, ...);
int sceVsnprintf(char* buffer, size_t count, const char* fmt, va_list ap);
typedef struct _sif_rpc_data {
    void* paddr;
    unsigned int pid;
    int tid;
    unsigned int mode;
} sceSifRpcData;
typedef void (*sceSifEndFunc)(void*);
typedef struct _sif_client_data {
    struct _sif_rpc_data rpcd;
    unsigned int command;
    void* buff;
    void* gp;
    sceSifEndFunc func;
    void* para;
    struct _sif_serve_data* serve;
} sceSifClientData;
typedef struct _sif_receive_data {
    struct _sif_rpc_data rpcd;
    void* src;
    void* dest;
    int size;
} sceSifReceiveData;
typedef void* (*sceSifRpcFunc)(unsigned int, void*, int);
typedef struct _sif_serve_data {
    unsigned int command;
    sceSifRpcFunc func;
    void* buff;
    int size;
    sceSifRpcFunc cfunc;
    void* cbuff;
    int csize;
    sceSifClientData* client;
    void* paddr;
    unsigned int fno;
    void* receive;
    int rsize;
    int rmode;
    unsigned int rid;
    struct _sif_serve_data* link;
    struct _sif_serve_data* next;
    struct _sif_queue_data* base;
} sceSifServeData;
typedef struct _sif_queue_data {
    int key;
    int active;
    struct _sif_serve_data* link;
    struct _sif_serve_data* start;
    struct _sif_serve_data* end;
    struct _sif_queue_data* next;
} sceSifQueueData;
int sceSifCallRpc(sceSifClientData*, unsigned int, unsigned int, void*, int, void*, int, sceSifEndFunc, void*);
void sceSifRegisterRpc(sceSifServeData*, unsigned int, sceSifRpcFunc, void*, sceSifRpcFunc, void*, sceSifQueueData*);
int sceSifGetOtherData(sceSifReceiveData*, void*, void*, int size, unsigned int mode);
extern int vsprintf(char* buf, const char* fmt, ...);
char* strcpy(char* dest, const char* src);
char* strcat(char* dest, const char* src);
extern intptr_t D_0050E9C0[64];
extern intptr_t D_0050E8C0[64];
extern sceSifClientData D_003861C0;
void* dtx_create_rmt(Sint32 id, void* eewk, void* iopwk, Sint32 wklen) {
    D_0050E8C0[0] = id;
    D_0050E8C0[1] = eewk;
    D_0050E8C0[2] = iopwk;
    D_0050E8C0[3] = wklen;
    sceSifCallRpc(&D_003861C0, 2, 0, D_0050E8C0, 4 * sizeof(intptr_t), D_0050E9C0, 1 * sizeof(intptr_t), 0, 0);
    return (void*)D_0050E9C0[0];
}
void DTX_SetRcvCbf(DTX dtx, RcvCbf func, void* object);
void DTX_SetSndCbf(DTX dtx, SndCbf func, void* object);
extern sceSifClientData D_003861C0;