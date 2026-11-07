/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/sj_mem.c). */
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
void SJMEM_Init(void);
SJ SJMEM_Create(Sint8 *data, Sint32 bsize);
Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);
void* memset(void* s, int c, size_t n);
typedef struct {
    SJ_OBJ sj;
    Sint32 used;
    UUID* uuid;
    Sint32 unkC;
    Sint32 unk10;
    Sint8* buf_ptr;
    Sint32 bsize;
    void (*err_func)(void* obj, Sint32 ecode);
    void* err_obj;
} SJMEM_OBJ;
typedef SJMEM_OBJ* SJMEM;
void SJMEM_GetChunk(SJMEM sjmem, Sint32 id, Sint32 nbyte, SJCK* ck);
void SJMEM_UngetChunk(SJMEM sjmem, Sint32 id, SJCK* ck);
void SJMEM_PutChunk(SJMEM sjmem, Sint32 id, SJCK* ck);
Sint32 SJMEM_GetNumData(SJMEM sjmem, Sint32 id);
Sint32 SJMEM_IsGetChunk(SJMEM sjmem, Sint32 id, Sint32 nbyte, Sint32* rbyte);extern void SJMEM_EntryErrFunc(SJMEM sjmem, void (*func)(void* obj, Sint32 ecode), void* obj);
extern Sint32 D_00390F90;
extern SJMEM_OBJ D_00390F98[32];
void SJMEM_Error(void* obj, Sint32 ecode);
void SJMEM_Init() {
    if (D_00390F90 == 0) {
        memset(D_00390F98, 0, sizeof(D_00390F98));
    }
    D_00390F90 += 1;
}
SJ SJMEM_Create(Sint8* data, Sint32 bsize);
void SJMEM_EntryErrFunc(SJMEM sjmem, void (*func)(void* obj, Sint32 ecode), void* obj);
Sint32 SJMEM_GetNumData(SJMEM sjmem, Sint32 id);
void SJMEM_GetChunk(SJMEM sjmem, Sint32 id, Sint32 nbyte, SJCK* ck);
void SJMEM_PutChunk(SJMEM sjmem, Sint32 id, SJCK* ck);
void SJMEM_UngetChunk(SJMEM sjmem, Sint32 id, SJCK* ck);
Sint32 SJMEM_IsGetChunk(SJMEM sjmem, Sint32 id, Sint32 nbyte, Sint32* rbyte);