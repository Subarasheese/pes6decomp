/* compiler: ee-gcc-2.96 */
/* Adapted from recvx-decomp, src/cri/mwlib/ee/lib/libadxe/sj_mem.c (SJMEM_Create).
 * licence: MIT (see THIRD_PARTY.md) */
typedef unsigned char Uint8;
typedef signed char Sint8;
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
typedef SJ_IF *SJIF;
typedef void (*SJMEM_ERRFN)(void *obj, Sint32 errcode);
typedef struct {
    SJIF vtbl;
    Sint32 used;
    const UUID *uuid;
    Sint32 ndata;
    Sint32 rpos;
    Sint8 *buf;
    Sint32 bsize;
    SJMEM_ERRFN errfunc;
    void *errobj;
} SJMEM_OBJ;
typedef SJMEM_OBJ *SJMEM;
static const UUID sjmem_uuid = {
    0xDD9EEE41, 0x1679, 0x11D2, {0x93, 0x6C, 0x00, 0x60, 0x08, 0x94, 0x48, 0xBC}};
extern SJ_IF D_00390F60;
extern SJMEM_OBJ D_00390F98[32];
extern void func_00176440(void *obj, Sint32 errcode);
extern void func_001768E0(SJ sj);

SJ func_001765F0(Sint8 *data, Sint32 dtsize) {
    Sint32 no;
    SJMEM sjmem;
    for (no = 0; no < 32; no++) {
        if (D_00390F98[no].used == 0) {
            break;
        }
    }

    if (no == 32) {
        return 0;
    }
    sjmem = &D_00390F98[no];
    sjmem->used = 1;
    sjmem->vtbl = &D_00390F60;
    sjmem->buf = data;
    sjmem->bsize = dtsize;
    sjmem->uuid = &sjmem_uuid;
    sjmem->errfunc = (void *)func_00176440;
    sjmem->errobj = sjmem;
    func_001768E0((SJ)sjmem);
    return (SJ)sjmem;
}
