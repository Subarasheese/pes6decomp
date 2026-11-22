/* compiler: ee-gcc-2.96-G0 */
/* Raikaru/Persona4-Decompilation, src/cri/re4/adx_tsvr.c (adxt_trap_entry). See THIRD_PARTY.md. */

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
extern void func_0015B478(Char8 *msg);
extern Sint32 func_00162B40(void *sjd);
extern Sint32 func_00162AF8(void *sjd);
extern Sint32 func_00162B10(void *sjd);
extern void func_001629D8(void *sjd, Sint32 nsmpl);
extern void func_001629F8(void *sjd, Sint32 len);
extern void func_001629E8(void *sjd, Sint32 cnt);
extern void func_001628A8(void *sjd, Sint32 pos);
extern void func_00162CE0(void *sjd);

void func_00168A38(void *obj) {
    ADXT adxt;
    void *sjd;
    SJ sji;
    Sint32 lpstart;
    Sint32 lpstartofst;
    Sint32 lpend;
    SJCK ck;
    adxt = obj;
    sjd = adxt->sjd;
    sji = adxt->sji;
    lpstart = func_00162AF8(sjd);
    lpstartofst = func_00162B10(sjd);
    lpend = func_00162B40(sjd);
    if (((adxt->mode == 2) || (adxt->mode == 3)) && (adxt->lpsw == 0)) {
        func_001629D8(adxt->sjd, -1);
        return;
    }
    (*sji->vtbl->GetChunk)(sji, 1, adxt->lpendmod, &ck);
    if (ck.len < adxt->lpendmod) {
        func_0015B478("E8101201 adxt_trap_entry: not enough data");
    }
    (*sji->vtbl->PutChunk)(sji, 0, &ck);
    func_001629E8(sjd, 0);
    func_001629D8(sjd, adxt->trapnsmpl = lpend - lpstart);
    func_001629F8(sjd, lpstartofst);
    func_001628A8(sjd, lpstart);
    if (adxt->mode == 2) {
        (*sji->vtbl->Reset)(sji);
        (*sji->vtbl->GetChunk)(sji, 1, lpstartofst, &ck);
        (*sji->vtbl->PutChunk)(sji, 0, &ck);
    }
    func_00162CE0(sjd);
    adxt->lpcnt++;
}
