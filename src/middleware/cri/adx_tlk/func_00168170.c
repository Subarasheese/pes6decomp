/* compiler: ee-gcc-2.96-G0 */
/* Raikaru/Persona4-Decompilation, src/cri/re4/adx_tlk.c (ADXT_SetOutputMono). See THIRD_PARTY.md.
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
extern ADXT_OBJ D_0037ACA8[16];
extern Sint32 D_0037AC98;
extern void func_001664A0(ADXT adxt, Sint32 ch, Sint32 pan);
extern Sint32 func_00166600(ADXT adxt, Sint32 ch);
extern void func_00166680(ADXT adxt, Sint32 bal);
extern Sint32 func_00166740(ADXT adxt);

void func_00168170(Sint32 flag) {
    Sint32 i;
    Sint32 ch;
    ADXT adxt;
    D_0037AC98 = flag;
    for (i = 0; i < 16; i++) {
        adxt = &D_0037ACA8[i];
        if (adxt->used == 1) {
            for (ch = 0; ch < adxt->maxnch; ch++) {
                func_001664A0(adxt, ch, func_00166600(adxt, ch));
            }

            func_00166680(adxt, func_00166740(adxt));
        }
    }
}
