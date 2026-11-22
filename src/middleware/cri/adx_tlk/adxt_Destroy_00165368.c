/* compiler: ee-gcc-2.96-G0 */
/* adxPly_destroy adapted from LucasPicoli/god-hand-decomp, src/cod/003298f0.c. See THIRD_PARTY.md.
 */
#include "pes6/cri_stream_joint.h"

typedef struct SjObj SjObj;
typedef struct SjIf {
    void *obj;
    void (*addRef)(SjObj *sj);
    void (*release)(SjObj *sj);
    void (*destroy)(SjObj *sj);
    void *(*getUuid)(SjObj *sj);
    void (*reset)(SjObj *sj);
    void (*getChunk)(SjObj *sj, int id, int len, SjChunk *ck);
    void (*ungetChunk)(SjObj *sj, int id, SjChunk *ck);
    void (*putChunk)(SjObj *sj, int id, SjChunk *ck);
    int (*getNumData)(SjObj *sj, int id);
} SjIf;
struct SjObj {
    SjIf *vt;
};
extern void func_0015B478(const char *msg);
typedef struct AdxPly {
    signed char stat;
    char unk01[2];
    signed char maxnch;
    void *rsv04;
    int stm;
    void *rsv0C;
    SjObj *sjo;
    char unk14[4];
    SjObj *sjiA[2];
    char unk20[0x74 - 0x20];
    void *amp;
    SjObj *sjiB[2];
    SjObj *sjiC[2];
    char unk88[0x94 - 0x88];
    void *rsv94;
    char unk98[0xC8 - 0x98];
} AdxPly;
extern void *memset(void *dst, int value, unsigned int size);
extern char D_003C8918[];
extern void func_001652C0(void);
extern void func_001652E8(AdxPly *ply);
extern void func_00165310(AdxPly *ply);
extern void adxt_Stop(AdxPly *ply);
extern void func_00161360(void *p);
extern void func_001618C8(void *p);
extern void func_001637C0(int stm, int a, int b);
extern void func_00163160(int stm);
extern void func_00171FE0(void *p);
extern void func_00159E88(void);
extern void func_00159EA0(void);
extern void func_00155EF8(void *amp);
void adxt_Destroy(AdxPly *ply) {
    int i;
    int stm;
    void *p;
    SjObj *sj;
    if (ply == 0) {
        func_0015B478(D_003C8918);
        return;
    }
    func_001652C0();
    func_001652E8(ply);
    func_00165310(ply);
    if (ply->stat == 1) {
        adxt_Stop(ply);
    }
    p = ply->rsv0C;
    if (p != 0) {
        ply->rsv0C = 0;
        func_00161360(p);
    }
    p = ply->rsv04;
    if (p != 0) {
        ply->rsv04 = 0;
        func_001618C8(p);
    }
    stm = ply->stm;
    if (stm != 0) {
        ply->stm = 0;
        func_001637C0(stm, 0, 0);
        func_00163160(stm);
    }
    p = ply->rsv94;
    if (p != 0) {
        ply->rsv94 = 0;
        func_00171FE0(p);
    }
    func_00159E88();
    sj = ply->sjo;
    if (sj != 0) {
        ply->sjo = 0;
        sj->vt->destroy(sj);
    }
    for (i = 0; i < ply->maxnch; i++) {
        if (ply->sjiA[i] != 0) {
            SjObj *t = ply->sjiA[i];
            ply->sjiA[i] = 0;
            t->vt->destroy(t);
        }
        if (ply->sjiB[i] != 0) {
            SjObj *t = ply->sjiB[i];
            ply->sjiB[i] = 0;
            t->vt->destroy(t);
        }
        if (ply->sjiC[i] != 0) {
            SjObj *t = ply->sjiC[i];
            ply->sjiC[i] = 0;
            t->vt->destroy(t);
        }
    }

    p = ply->amp;
    if (p != 0) {
        ply->amp = 0;
        func_00155EF8(p);
    }
    memset(ply, 0, 0xC8);
    ply->stat = 0;
    func_00159EA0();
}
