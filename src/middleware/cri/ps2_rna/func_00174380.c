/* compiler: ee-gcc-2.96-G0-g */
/* crowded-street/3s-decomp src/anniversary/cri/libadxe/ps2_rna.c (ps2rna_init_psj). See THIRD_PARTY.md. */

typedef unsigned int size_t;
typedef unsigned int u32;
typedef u32 uintptr_t;
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
extern SJ func_00177BC8(Sint32 mode, Sint8 *work, Sint32 wksize);
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
extern void *SJUNI_CreateRmt(Sint32, Sint8 *, Sint32);
extern SJX SJX_Create(SJ, void *, Sint32);
extern void func_001610B0(const char *fmt, ...);
extern void *func_0010D698(unsigned int);
extern void *memset(void *s, int c, size_t n);
extern Sint32 D_0038DBD0;
extern Sint32 D_0038DBD4;
extern Sint32 D_0038DBD8;
extern void *D_0038DBDC;
extern void *D_0038DBE0;
extern Sint8 D_0038DBE4;
extern PS2PSJ_OBJ D_0038DC30[32];
extern Sint8 D_0038DF30[32][256];

void func_00174380() {
    Sint8 *wk;
    Sint32 i;
    Sint32 j;
    PS2PSJ psj;
    if (D_0038DBD8 == 0) {
        D_0038DBD0 = 16;
        D_0038DBD4 = 0x41000;
    }
    if (D_0038DBDC == 0) {
        D_0038DBDC = func_0010D698(D_0038DBD4 + 0x40);
        if (D_0038DBDC == 0) {
            func_001610B0("PS2RNA: E01112903: Failed, sceSifAllocIopHeap(%d) in ps2rna_init_psj\n",
                          D_0038DBD4 + 0x40);
            while (1) {
            }
        }
        func_001610B0("PS2RNA: sceSifAllocIopHeap(%d) ret=0x%08x\n", D_0038DBD4 + 0x40, D_0038DBDC);
        D_0038DBE0 = ((uintptr_t)(D_0038DBDC + 0x40)) & (~(0x40 - 1));
        D_0038DBE4 = 1;
    }
    memset(D_0038DC30, 0, sizeof(D_0038DC30));
    wk = D_0038DBE0;
    for (i = 0, j = 0; i < D_0038DBD0; i++, j++) {
        psj = &D_0038DC30[j];
        psj->used = 0;
        if (((uintptr_t)wk) & 0x3F) {
            func_001610B0("E0110101: ps2rna_init_psj wk size error\n");
            while (1) {
            }
        }
        psj->unk4 = SJUNI_CreateRmt(1, wk, 0x100);
        wk += 0x100;
        if (psj->unk4 == 0) {
            func_001610B0("E0110102: ps2rna_init_psj: can't creat SJUNI_CreaetRmt\n");
            while (1) {
            }
        }
        if (((uintptr_t)wk) & 0x3F) {
            func_001610B0("E0110103: ps2rna_init_psj: wk size error\n");
            while (1) {
            }
        }
        psj->unk8 = func_00177BC8(1, D_0038DF30[i], 0x100);
        if (psj->unk8 == 0) {
            func_001610B0("E0110104: ps2rna_init_psj: can't creat SJUNI_Creaet\n");
            while (1) {
            }
        }
        psj->chunk.len = 0x4000;
        psj->chunk.data = wk;
        wk += 0x4000;
        (*psj->unk8->vtbl->PutChunk)(psj->unk8, 0, &psj->chunk);
        psj->unkC = SJX_Create(psj->unk8, psj->unk4, 1);
        if (psj->unkC == 0) {
            func_001610B0("E0110105: ps2rna_init_psj: can't creat SJX_Create\n");
            while (1) {
            }
        }
    }
}
