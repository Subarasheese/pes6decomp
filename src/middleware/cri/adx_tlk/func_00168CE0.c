/* compiler: ee-gcc-2.96-G0 */
/* Raikaru/Persona4-Decompilation, src/cri/re4/adx_tsvr.c (adxt_nlp_trap_entry). See THIRD_PARTY.md.
 */

typedef unsigned char Uint8;
typedef signed char Sint8;
typedef signed short Sint16;
typedef unsigned int Uint32;
typedef signed int Sint32;
typedef char Char8;
typedef struct SJ_OBJ *SJ;
typedef struct {
    Uint8 *data;
    Sint32 len;
} SJCK;
typedef struct {
    Uint8 data[16];
} SJUUID;
typedef struct {
    void *QueryInterface;
    void *AddRef;
    void *Release;
    void (*Destroy)(SJ sj);
    const SJUUID *(*GetUuid)(SJ sj);
    void (*Reset)(SJ sj);
    void (*GetChunk)(SJ sj, Sint32 id, Sint32 nbyte, SJCK *ck);
    void (*UngetChunk)(SJ sj, Sint32 id, SJCK *ck);
    void (*PutChunk)(SJ sj, Sint32 id, SJCK *ck);
    Sint32 (*GetNumData)(SJ sj, Sint32 id);
    Sint32 (*IsGetChunk)(SJ sj, Sint32 id, Sint32 nbyte, Sint32 *rbyte);
    void (*EntryErrFunc)(SJ sj, void (*func)(void *obj, Char8 *msg), void *obj);
} SJ_IF;
struct SJ_OBJ {
    SJ_IF *vtbl;
};
extern void SJ_SplitChunk(SJCK *src, Sint32 n, SJCK *a, SJCK *b);
typedef struct {
    Sint8 used;
    Sint8 stat;
    Sint8 mode;
    Sint8 maxnch;
    void *sjd;
    void *stm;
    void *rna;
    SJ sjf;
    SJ sji;
    SJ sjo[2];
    Uint8 *ibuf;
    Sint32 ibufsize;
    Sint32 ibufxsize;
    Uint8 *obuf;
    Sint32 obufsize;
    Sint32 obufstride;
    Sint32 svrfreq;
    Sint16 ibuf_nsct;
    Sint16 reload_nsct;
    Sint16 outvol;
    Sint16 outpan[2];
    Sint16 outbal;
    Sint32 maxdecsmpl;
    Sint32 lpcnt;
    Sint32 lpendmod;
    Sint32 x54;
    Sint32 x58;
    Sint32 x5c;
    Sint16 errcode;
    Sint16 x62;
    Sint32 x64;
    Sint16 x68;
    Sint16 x6a;
    Sint8 lpsw;
    Sint8 autorcvr;
    Sint8 x6e;
    Sint8 x6f;
    Sint8 pausesw;
    Sint8 x71;
    Sint8 x72;
    Sint8 x73;
    void *amp;
    SJ sjx[2];
    SJ sjy[2];
    Sint32 timeofst;
    Sint32 lpendsct;
    Sint32 trapnsmpl;
    void *lsc;
    Sint8 lnksw;
    Uint8 pad99[0x9C - 0x99];
    Uint32 x9c;
    Sint32 startvsync;
    Sint32 decsmpl;
    Sint32 flush_nsmpl;
    Sint8 stmstart;
    Sint8 ainf_sw;
    Sint16 rsv4;
    Uint8 *wkend;
    void *stm_fname;
    void *stm_dir;
    Sint32 stm_ofst;
    Sint32 stm_nsct;
    Uint8 padC4[0xC8 - 0xC4];
} ADXT_OBJ;
typedef ADXT_OBJ *ADXT;
extern Sint32 func_00161928(void *sjd);
extern void func_00161980(void *sjd, Sint32 nsmpl);
extern void func_001629D8(void *sjd, Sint32 nsmpl);
extern void func_001629F8(void *sjd, Sint32 len);
extern void func_001629E8(void *sjd, Sint32 cnt);
extern Sint32 func_00162A98(void *sjd);
extern Sint32 func_00162888(void *sjd);
extern void func_00161A20(void *sjd);
extern void ADXSJD_Start(void *sjd);
extern void func_001624E8(void *sjd);
extern Sint32 func_0015A9C8(Uint8 *data, Sint32 len, Sint16 *ofst);
extern Sint32 func_0015A028(Uint8 *data, Sint32 len, Sint16 *ofst);
extern void func_00167C18(ADXT adxt, Sint32 sw);

void func_00168CE0(void *obj) {
    ADXT p;
    void *sjd;
    SJ sji;
    SJCK ck;
    SJCK ck3;
    SJCK ck2;
    SJCK ck4;
    Sint16 ofst;
    Sint16 ofst2;
    Sint32 ofst1;
    Sint32 n1;
    Sint32 n2;
    Sint32 ofst2v;
    register Sint32 t;
    Sint32 z;
    p = obj;
    sjd = p->sjd;
    sji = p->sji;
    if (p->lnksw == 0) {
        return;
    }
    ofst2 = 0;
    (*sji->vtbl->GetChunk)(sji, 1, 0x7FFFFFFF, &ck);
    (*sji->vtbl->GetChunk)(sji, 1, 0x7FFFFFFF, &ck2);
    if (func_0015A9C8(ck.data, ck.len, &ofst) != 0) {
        func_00167C18(p, 0);
        (*sji->vtbl->UngetChunk)(sji, 1, &ck2);
        (*sji->vtbl->UngetChunk)(sji, 1, &ck);
        return;
    }
    ofst1 = ofst;
    n1 = func_0015A028(ck.data + ofst1, ck.len - ofst1, &ofst);
    if (n1 == 0) {
        n2 = -1;
    } else {
        n2 = func_0015A028(ck2.data, ck2.len, &ofst2);
    }
    t = ofst;
    z = 0;
    if (z != 0) {
        ofst1 = t + 4;
    }
    ofst1 += t;
    ofst2v = ofst2;
    if ((n1 != 0) && (n2 != 0)) {
        (*sji->vtbl->UngetChunk)(sji, 1, &ck2);
        (*sji->vtbl->UngetChunk)(sji, 1, &ck);
        func_00167C18(p, 0);
        return;
    }
    if (n1 == 0) {
        (*sji->vtbl->UngetChunk)(sji, 1, &ck2);
        SJ_SplitChunk(&ck, ofst1, &ck, &ck3);
        (*sji->vtbl->PutChunk)(sji, 0, &ck);
        (*sji->vtbl->UngetChunk)(sji, 1, &ck3);
    } else {
        (*sji->vtbl->PutChunk)(sji, 0, &ck);
        SJ_SplitChunk(&ck2, ofst2v, &ck2, &ck4);
        (*sji->vtbl->PutChunk)(sji, 0, &ck2);
        (*sji->vtbl->UngetChunk)(sji, 1, &ck4);
    }
    p->decsmpl += func_00162888(sjd);
    func_00161A20(sjd);
    ADXSJD_Start(sjd);
    func_001624E8(sjd);
    if (func_00161928(sjd) != 2) {
        func_00167C18(p, 0);
        return;
    }
    func_00161980(sjd, p->maxdecsmpl);
    func_001629D8(sjd, func_00162A98(sjd));
    func_001629F8(sjd, 0);
    func_001629E8(sjd, 0);
}
