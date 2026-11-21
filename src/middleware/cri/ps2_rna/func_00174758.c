/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/ps2_rna.c (ps2rna_get_psj).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef unsigned char Uint8;
typedef char Sint8;
typedef unsigned short Uint16;
typedef signed short Sint16;
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
typedef struct {
    Sint32 unk0;
    SJ sj;
} SJX_UNK_0;
typedef struct {
    Sint8 used;
    Sint8 unk1;
    Sint16 unk2;
    SJ sj;
    void *unk8;
    Sint32 unkC;
    SJX_UNK_0 *unk10;
} SJX_OBJ;
typedef SJX_OBJ *SJX;
typedef struct {
    Sint8 used;
    char pad1[3];
    void *unk4;
    SJ unk8;
    SJX unkC;
    SJCK chunk;
} PS2PSJ_OBJ;
typedef PS2PSJ_OBJ *PS2PSJ;
extern Sint32 D_0038DBD0;
extern PS2PSJ_OBJ D_0038DC30[32];

PS2PSJ func_00174758(void) {
    PS2PSJ psj = 0;
    Sint32 i;
    for (i = 0; i < D_0038DBD0; i++) {
        psj = &D_0038DC30[i];
        if (psj->used == 0) {
            break;
        }
    }

    if (i == D_0038DBD0) {
        return 0;
    }
    psj->used = 1;
    return psj;
}
