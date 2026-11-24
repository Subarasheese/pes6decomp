/* compiler: ee-gcc-2.96-G0 */
/* CRI ADX middleware, adapted from 3s-decomp src/anniversary/cri/libadxe/adx_tsvr.c. See
 * THIRD_PARTY.md. */
#include "pes6/cri_adx_talk.h"

extern const char D_003C91D0[]; /* E9081001 adxt_stat_decinfo: can't play this number of channels */
extern void (*D_00384CB0)(ADXT, Sint32, Sint32, Sint32);
extern Sint32 func_00162A38(ADXSJD);
extern Sint32 func_00162A20(ADXSJD);
extern Sint32 func_00162AC8(ADXSJD);
extern Sint32 func_00162A68(ADXSJD);
extern Sint32 func_00162B58(ADXSJD);
extern Sint32 func_00162B40(ADXSJD);
extern Sint32 func_00162AF8(ADXSJD);
extern Sint32 func_00162A98(ADXSJD);
extern Sint32 func_00162A50(ADXSJD);
extern Sint32 func_00162A08(ADXSJD);
extern Sint8 func_00161928(ADXSJD);
extern void *func_00162CC0(ADXSJD);
extern Sint32 func_00163470(ADXSTM);
extern void func_00161980(ADXSJD, Sint32);
extern void func_001629D8(ADXSJD, Sint32);
extern void func_001629F8(ADXSJD, Sint32);
extern void func_001629E8(ADXSJD, Sint32);
extern void func_00161520(ADXRNA, Sint32);
extern void func_001614C0(ADXRNA, Sint32);
extern void func_001614A8(ADXRNA, Sint32);
extern void func_00161608(ADXRNA, Sint32);
extern void func_001613C8(ADXRNA, Sint32);
extern void func_00165700(ADXT, Char8 *, void *, Sint32, Sint32);
extern void ADXERR_ItoA2(Sint32, Sint32, char *, Sint32);
extern void func_0015B4D0(const char *, const char *);
extern void ADXT_Stop(ADXT);
extern void func_00163820(ADXSTM, Sint32);
extern void func_001637C0(ADXSTM, void (*)(ADXT), ADXT);
extern void func_001629C8(ADXSJD, void (*)(ADXT), ADXT);
extern void func_00168BD0(ADXT);
extern void func_00168980(ADXT);
extern void func_00168CE0(ADXT);
extern void ADXT_SetOutVol(ADXT, Sint32);
extern void func_00167928(ADXT, Sint32 *, Sint32 *);
extern void func_00167920(ADXT, Sint32, Sint32);
extern void func_00168C78(ADXT);
extern void func_00156418(void *, Sint32);
extern void func_00161618(ADXRNA, void *);

void func_00168FC8(ADXT adxt) {
    Sint32 transpose = 0;
    Sint32 detune = 0;
    ADXSJD sjd = adxt->sjd;
    Sint32 div = 2048;
    Char8 num_chan_str[32];
    Sint32 num_smpl;
    Sint32 sfreq;
    Sint32 num_chan;
    Sint32 num_loop;
    Sint32 blk_smpl;
    Sint32 max_dec_smpl;
    Sint32 lp_end_ofst;

    adxt->flush_nsmpl = 0;
    if ((adxt->pmode < 2U) && (adxt->restartPending == 1)) {
        if (func_00163470(adxt->stm) == 2) {
            return;
        }

        if (adxt->sjf != 0) {
            adxt->sjf->vtbl->Reset(adxt->sjf);
        }

        func_00165700(adxt, adxt->streamName, adxt->streamDirectory, adxt->firstSector,
                      adxt->sectorCount);
        adxt->restartPending = 0;
    }

    {
        Sint8 status = func_00161928(sjd);
        if (status == 2) {
            num_chan = func_00162A38(sjd);

            if (adxt->maxnch < num_chan) {
                ADXERR_ItoA2(num_chan, adxt->maxnch, num_chan_str, 16);
                func_0015B4D0(D_003C91D0, num_chan_str);
                ADXT_Stop(adxt);
                return;
            }

            sfreq = func_00162A20(sjd);
            num_loop = func_00162AC8(sjd);

            if (num_loop > 0) {
                adxt->maxdecsmpl = (sfreq / adxt->svrfreq) * 3;
            } else {
                adxt->maxdecsmpl = ((sfreq / adxt->svrfreq) * 3) / 2;
            }

            blk_smpl = func_00162A68(sjd) * 2;
            max_dec_smpl = ((adxt->maxdecsmpl + blk_smpl) / blk_smpl) * blk_smpl;
            adxt->maxdecsmpl = max_dec_smpl;
            func_00161980(sjd, max_dec_smpl);

            if (num_loop > 0) {
                if (adxt->pmode == 2) {
                    adxt->lp_skiplen = 0;
                } else {
                    lp_end_ofst = func_00162B58(sjd);
                    adxt->lp_skiplen = div - (lp_end_ofst % div);
                    lp_end_ofst += 0x7FF;
                    adxt->lp_skiplen %= div;
                    adxt->lesct = lp_end_ofst / div;
                    func_00163820(adxt->stm, adxt->lesct);
                    func_001637C0(adxt->stm, func_00168BD0, adxt);
                }

                func_00162B40(sjd);
                adxt->trpnsmpl = func_00162AF8(sjd);
                func_001629D8(sjd, adxt->trpnsmpl);
                func_001629F8(sjd, 0);
                func_001629E8(sjd, 0);
                func_001629C8(sjd, func_00168980, adxt);
            } else {
                if (adxt->stm != 0) {
                    func_00163820(adxt->stm, 0x7fffffff);
                }

                func_001629D8(sjd, func_00162A98(sjd));
                func_001629F8(sjd, 0);
                func_001629E8(sjd, 0);
                func_001629C8(sjd, func_00168CE0, adxt);
            }

            sfreq = func_00162A20(sjd);
            num_chan = func_00162A38(sjd);
            num_smpl = func_00162A98(sjd);
            func_00161520(adxt->rna, func_00162A50(sjd));
            func_001614C0(adxt->rna, sfreq);
            func_001614A8(adxt->rna, num_chan);
            func_00161608(adxt->rna, num_smpl);
            ADXT_SetOutVol(adxt, adxt->outvol);
            func_00167928(adxt, &transpose, &detune);

            if ((transpose != 0) || (detune != 0)) {
                func_00167920(adxt, transpose, detune);
            }

            func_00168C78(adxt);

            if (adxt->amp != 0) {
                func_00156418(adxt->amp, sfreq);
            }

            if (func_00162A08(sjd) == 2) {
                func_00161618(adxt->rna, func_00162CC0(sjd));
            }

            func_001613C8(adxt->rna, 1);
            if (D_00384CB0)
                D_00384CB0(adxt, sfreq, num_chan, num_smpl);
            adxt->stat = 2;
        } else if (status == 4) {
            adxt->stat = 6;
        }
    }
}
