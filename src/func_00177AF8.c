/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/sj_uni.c). */
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
void func_00177AF8(void);
SJ SJUNI_Create(Sint32 mode, Sint8 *work, Sint32 wksize);
Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);
void* memset(void* s, int c, size_t n);
typedef struct SJUNI_CK {
    struct SJUNI_CK* next;
    Sint32 unk4;
    SJCK ck;
} SJUNI_CK;
typedef struct {
    SJ_OBJ sj;
    Sint8 used;
    Sint8 mode;
    UUID* uuid;
    SJUNI_CK* work;
    Sint32 chunk_count;
    SJUNI_CK* chain_pool;
    SJUNI_CK* unk18[4];
    void (*err_func)(void* obj, Sint32 ecode);
    void* err_obj;
} SJUNI_OBJ;
typedef SJUNI_OBJ* SJUNI;
void SJUNI_GetChunk(SJUNI sjuni, Sint32 id, Sint32 nbyte, SJCK* ck);
void SJUNI_UngetChunk(SJUNI sjuni, Sint32 id, SJCK* ck);
void SJUNI_PutChunk(SJUNI sjuni, Sint32 id, SJCK* ck);
Sint32 SJUNI_GetNumData(SJUNI sjuni, Sint32 id);
Sint32 SJUNI_IsGetChunk(SJUNI sjuni, Sint32 id, Sint32 nbyte, Sint32* rbyte);extern void SJUNI_EntryErrFunc(SJUNI sjuni, void (*func)(void* obj, Sint32 ecode), void* obj);
extern Sint32 D_003954B0;
extern SJUNI_OBJ D_003954B8[64];
void SJUNI_Error(void* obj, Sint32 ecode);
void func_00177AF8() {
    if (D_003954B0 == 0) {
        memset(D_003954B8, 0, sizeof(D_003954B8));
    }
    D_003954B0 += 1;
}
SJ SJUNI_Create(Sint32 mode, Sint8* work, Sint32 wksize);
void SJUNI_EntryErrFunc(SJUNI sjuni, void (*func)(void* obj, Sint32 ecode), void* obj);
Sint32 SJUNI_GetNumData(SJUNI sjuni, Sint32 id);
void SJUNI_GetChunk(SJUNI sjuni, Sint32 id, Sint32 nbyte, SJCK* ck);
void SJUNI_PutChunk(SJUNI sjuni, Sint32 id, SJCK* ck);
void SJUNI_UngetChunk(SJUNI sjuni, Sint32 id, SJCK* ck);
Sint32 SJUNI_IsGetChunk(SJUNI sjuni, Sint32 id, Sint32 nbyte, Sint32* rbyte);
Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);