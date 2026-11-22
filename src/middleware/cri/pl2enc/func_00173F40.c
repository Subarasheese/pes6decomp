/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/pl2enc.c (pl2enc_SetSfreq). See THIRD_PARTY.md. */

typedef struct Pl2Enc {
    void *work;
    int wksize;
    int *dly_l;
    int *dly_r;
    int sfreq;
    int dly_pos;
    int dly_len;
    int gain_l;
    int gain_r;
    int gain_c;
    int gain_s;
} Pl2Enc;
extern char D_003CBA80[];
extern char D_003CBAA8[];
extern void pl2enc_err(const char *message);

void func_00173F40(Pl2Enc *pl2, int sfreq) {
    int len;
    if (pl2 == 0) {
        pl2enc_err(D_003CBA80);
        return;
    }
    if (sfreq <= 0) {
        pl2enc_err(D_003CBAA8);
        return;
    }
    len = sfreq / 750;
    pl2->sfreq = sfreq;
    if (len > 96) {
        len = 96;
    } else if (len < 1) {
        len = 1;
    }
    pl2->dly_len = len;
}
