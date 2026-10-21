/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/sj_rbf.c). */
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
Sint32 SJUNI_GetNumChunk(SJ sj, Sint32 id);
typedef struct {
    SJ_OBJ sj;
    Sint32 used;
    UUID* uuid;
    Sint32 unkC;
    Sint32 unk10;
    Sint32 unk14;
    Sint32 unk18;
    Sint8* buf;
    Sint32 bsize;
    Sint32 xsize;
    Sint32 unk28;
    Sint32 unk2C;
    Sint32 unk30;
    Sint32 unk34;
    void (*err_func)(void* obj, Sint32 ecode);
    void* err_obj;
} SJRBF_OBJ;
typedef SJRBF_OBJ* SJRBF;
void SJRBF_GetChunk(SJRBF sjrbf, Sint32 id, Sint32 nbyte, SJCK* ck);
void SJRBF_UngetChunk(SJRBF sjrbf, Sint32 id, SJCK* ck);
void SJRBF_PutChunk(SJRBF sjrbf, Sint32 id, SJCK* ck);
Sint32 SJRBF_GetNumData(SJRBF sjrbf, Sint32 id);
Sint32 SJRBF_IsGetChunk(SJRBF sjrbf, Sint32 id, Sint32 nbyte, Sint32* rbyte);extern void SJRBF_EntryErrFunc(SJRBF sjrbf, void (*func)(void* obj, Sint32 ecode), void* obj);
void SJRBF_Error(void* obj, Sint32 ecode);
SJ SJRBF_Create(Sint8* buf, Sint32 bsize, Sint32 xsize);
void SJRBF_EntryErrFunc(SJRBF sjrbf, void (*func)(void* obj, Sint32 ecode), void* obj);
Sint32 SJRBF_GetNumData(SJRBF sjrbf, Sint32 id) {
    if (id == 1) {
        return sjrbf->unkC;
    } else if (id == 0) {
        return sjrbf->unk10;
    } else {
        if (sjrbf->err_func != 0) {
            sjrbf->err_func(sjrbf->err_obj, (-3));
        }
        return 0;
    }
}
void SJRBF_GetChunk(SJRBF sjrbf, Sint32 id, Sint32 nbyte, SJCK* ck);
void SJRBF_PutChunk(SJRBF sjrbf, Sint32 id, SJCK* ck);
void SJRBF_UngetChunk(SJRBF sjrbf, Sint32 id, SJCK* ck);
Sint32 SJRBF_IsGetChunk(SJRBF sjrbf, Sint32 id, Sint32 nbyte, Sint32* rbyte);