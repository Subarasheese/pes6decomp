/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/sj_utl.c). */
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
void SJ_SplitChunk(SJCK* ck, Sint32 nbyte, SJCK* ck1, SJCK* ck2);
void SJ_SplitChunk(SJCK* ck, Sint32 nbyte, SJCK* ck1, SJCK* ck2) {
    *ck1 = *ck;
    ck2->len = ck1->len;
    if (nbyte < ck1->len) {
        ck1->len = nbyte;
    }
    ck2->len -= ck1->len;
    if (ck2->len == 0) {
        ck2->data = 0;
    } else {
        ck2->data = ck1->data + ck1->len;
    }
}