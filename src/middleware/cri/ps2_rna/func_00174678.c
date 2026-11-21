/* compiler: ee-gcc-2.96-G0 */
/* Adapted from 3s-decomp, src/anniversary/cri/libadxe/ps2_rna.c (ps2rna_finish_psj).
 * licence: AGPL-3.0 (see THIRD_PARTY.md) */
typedef unsigned int size_t;
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
extern void func_00178C70(void *);
extern void SJX_Destroy(SJX);
extern int func_0010D800(void *);
extern void *memset(void *s, int c, size_t n);
extern Sint32 D_0038DBD0;
extern void *D_0038DBDC;
extern Sint8 D_0038DBE4;
extern PS2PSJ_OBJ D_0038DC30[32];

void func_00174678(void) {
    PS2PSJ psj;
    Sint32 i;
    for (i = 0; i < D_0038DBD0; i++) {
        psj = &D_0038DC30[i];
        if (psj->unk4 != 0) {
            func_00178C70(psj->unk4);
        }
        if (psj->unk8 != 0) {
            (*psj->unk8->vtbl->Destroy)(psj->unk8);
        }
        if (psj->unkC != 0) {
            SJX_Destroy(psj->unkC);
        }
        memset(psj, 0, sizeof(PS2PSJ_OBJ));
    }

    if (D_0038DBE4 == 1) {
        func_0010D800(D_0038DBDC);
        D_0038DBDC = 0;
        D_0038DBE4 = 0;
    }
}
