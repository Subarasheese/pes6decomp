/* compiler: ee-gcc-2.96 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/sj_uni.c (SJUNI_Create).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
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
    void (*EntryErrFunc)(SJ sj, void (*func)(void *obj, Sint32 ecode), void *obj);
} SJ_IF;
typedef struct SJUNI_CK {
    struct SJUNI_CK *next;
    Sint32 unk4;
    SJCK ck;
} SJUNI_CK;
typedef struct {
    SJ_OBJ sj;
    Sint8 used;
    Sint8 mode;
    UUID *uuid;
    SJUNI_CK *work;
    Sint32 chunk_count;
    SJUNI_CK *chain_pool;
    SJUNI_CK *unk18[4];
    void (*err_func)(void *obj, Sint32 ecode);
    void *err_obj;
} SJUNI_OBJ;
typedef SJUNI_OBJ *SJUNI;
extern SJ_IF D_00395480;
extern SJUNI_OBJ D_003954B8[64];
extern const UUID D_003CC3F8;
extern void func_00177A60(void *obj, Sint32 ecode);
extern void func_00177F30(SJUNI sjuni);

SJ func_00177C20(Sint32 mode, Sint8 *work, Sint32 wksize) {
    SJUNI sjuni;
    Sint32 i;
    for (i = 0; i < 64; i++) {
        if (D_003954B8[i].used == 0) {
            break;
        }
    }

    if (i == 64) {
        return 0;
    }
    sjuni = &D_003954B8[i];
    sjuni->used = 1;
    sjuni->sj.vtbl = &D_00395480;
    sjuni->mode = mode;
    sjuni->uuid = &D_003CC3F8;
    sjuni->work = (SJUNI_CK *)work;
    sjuni->chunk_count = wksize / 16;
    sjuni->err_func = func_00177A60;
    sjuni->err_obj = sjuni;
    func_00177F30(sjuni);
    return sjuni;
}
