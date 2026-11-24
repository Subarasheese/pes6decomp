/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware, adapted from 3s-decomp src/anniversary/cri/libadxe/adx_tlk.c. See THIRD_PARTY.md.
 */

#include "pes6/cri_adx_talk.h"

enum {
    ADXT_MAX_OBJ = 16,
    ADXT_PAN_AUTO = -128,
    ADXT_OBUF_DIST = 0x2060,
    ADXT_OBUF_SIZE = 0x2000,
    ADXT_IBUF_XLEN = 0x24
};
#define ADXT_CALC_OBUFSIZE(channels) ((channels) * 0x40C0)
#define NULL ((void *)0)
typedef Uint32 uintptr_t;
typedef Sint32 intptr_t;
typedef Sint32 ptrdiff_t;
extern ADX_TALK D_0037ACA8[];
extern char D_003C88C0[], D_003C88E8[];
extern Sint32 D_00384C64;
extern void func_0015B478(char *);
extern SJ func_00176FC0(char *, Sint32, Sint32);
extern ADXSTM func_001630D0(SJ, Sint32);
extern ADXSJD func_00161748(SJ, Sint32, SJ *);
extern ADXRNA func_00161348(SJ *, Sint32);
extern void *func_00171ED8(SJ);
extern void func_00172030(void *, ADXSTM);
extern void adxt_Destroy(ADXT);
extern void func_00167C58(ADXT, Sint32);
extern void func_00166A90(ADXT, Sint32);
extern void func_00159E88(void);
extern void func_00159EA0(void);
extern void *memset(void *, int, unsigned int);
ADXT adxt_Create(Sint32 maxnch, void *work, Sint32 worksize) {
    ADXT adxt;

    Sint32 i;
    Sint32 ix;
    intptr_t aligned_work;
    ptrdiff_t size;
    ptrdiff_t ibuf_len;

    aligned_work = ((uintptr_t)work + 0x40 - 1) & ~(0x40 - 1);
    size = worksize - (aligned_work - (uintptr_t)work);

    if ((maxnch < 0) || (work == NULL) || (worksize < 0)) {
        func_0015B478(D_003C88C0);
        return NULL;
    }

    for (ix = 0; ix < ADXT_MAX_OBJ; ix++) {
        if (!D_0037ACA8[ix].used) {
            break;
        }
    }

    if (ix == ADXT_MAX_OBJ) {
        func_0015B478(D_003C88E8);
        return NULL;
    }

    adxt = &D_0037ACA8[ix];
    memset(adxt, 0, sizeof(ADX_TALK));

    adxt->maxnch = maxnch;
    adxt->ibuf = (Sint8 *)(aligned_work + ADXT_CALC_OBUFSIZE(maxnch));
    adxt->obuf = (Sint16 *)aligned_work;
    adxt->obufsize = ADXT_OBUF_SIZE;
    adxt->obufdist = ADXT_OBUF_DIST;
    ibuf_len = size - ADXT_CALC_OBUFSIZE(maxnch) - 0x124;
    adxt->ibuflen = (Sint32)(ibuf_len / 0x800 * 0x800);
    adxt->ibufxlen = ADXT_IBUF_XLEN;
    adxt->filenameBuffer = adxt->ibuf + (adxt->ibuflen + adxt->ibufxlen);
    adxt->sji = NULL;
    adxt->sjf = func_00176FC0(adxt->ibuf, adxt->ibuflen, adxt->ibufxlen);

    if (adxt->sjf == NULL) {
        adxt_Destroy(adxt);
        return NULL;
    }

    adxt->stm = func_001630D0(adxt->sjf, 0);

    if (adxt->stm == NULL) {
        adxt_Destroy(adxt);
        return NULL;
    }

    for (i = 0; i < maxnch; i++) {
        adxt->sjo[i] = func_00176FC0((Sint8 *)(adxt->obuf + adxt->obufdist * i), adxt->obufsize * 2,
                                     (adxt->obufdist - adxt->obufsize) * 2);

        if (adxt->sjo[i] == NULL) {
            adxt_Destroy(adxt);
            return NULL;
        }
    }

    adxt->sjd = func_00161748(adxt->sjf, maxnch, adxt->sjo);

    if (adxt->sjd == NULL) {
        adxt_Destroy(adxt);
        return NULL;
    }

    adxt->rna = func_00161348(adxt->sjo, maxnch);

    if (adxt->rna == NULL) {
        adxt_Destroy(adxt);
        return NULL;
    }

    adxt->lsc = func_00171ED8(adxt->sjf);

    if (adxt->lsc == NULL) {
        adxt_Destroy(adxt);
        return NULL;
    }

    func_00172030(adxt->lsc, adxt->stm);
    func_00159E88();

    adxt->outvol = 0;
    adxt->maxsct = adxt->ibuflen / 0x800;
    adxt->svrfreq = D_00384C64;
    adxt->minsct = (Sint16)adxt->maxsct * 0.85f;

    for (i = 0; i < maxnch; i++) {
        adxt->outpan[i] = ADXT_PAN_AUTO;
    }

    adxt->unk46 = 0;
    adxt->lpflg = 1;
    adxt->trp = 0;
    adxt->wpos = 0;
    adxt->mofst = 0;
    adxt->ercode = 0;
    adxt->edecpos = 0;
    adxt->edeccnt = 0;
    adxt->eshrtcnt = 0;
    adxt->autorcvr = 1;
    adxt->pause_flag = 0;
    adxt->time_ofst = 0;
    func_00167C58(adxt, 0);
    func_00166A90(adxt, 1);
    adxt->used = 1;
    func_00159EA0();
    return adxt;
}
