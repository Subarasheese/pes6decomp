/* compiler: ee-gcc-2.96-G0 */
/* func_0033A4F8 adapted from LucasPicoli/god-hand-decomp, src/cod/0033a4f8.c. See THIRD_PARTY.md.
 */
typedef struct SjUniChunk {
    struct SjUniChunk *next;
    int unk4;
    void *unk8;
    int unkC;
} SjUniChunk;
typedef struct SjUni {
    void *f0;
    signed char f4;
    signed char f5;
    char pad6[2];
    void *f8;
    SjUniChunk *buf;
    int nchunk;
    SjUniChunk *free;
    SjUniChunk *list[4];
} SjUni;
extern const char D_003CC4B8[];
extern const char D_003CC4C8[];
extern const char D_003CC428[];
extern const char D_003CC458[];
extern void func_00177A80(const char *error, const char *detail);
void func_00177F30(SjUni *e) {
    SjUniChunk *buf;
    SjUniChunk *c;
    int i;
    if (e == 0) {
        func_00177A80(D_003CC4B8, D_003CC428);
        return;
    }
    if (e->f4 == 0) {
        func_00177A80(D_003CC4C8, D_003CC458);
        return;
    }
    buf = e->buf;
    e->free = buf;
    for (i = 0; i < (e->nchunk - 1); i++) {
        buf[i].unkC = 0;
        buf[i].unk8 = 0;
        buf[i].next = &buf[i + 1];
    }

    buf[i].next = 0;
    buf[i].unk8 = 0;
    buf[i].unkC = 0;
    for (i = 3; i >= 0; i--) {
        e->list[i] = 0;
    }
}
