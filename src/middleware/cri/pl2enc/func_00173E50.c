/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/pl2enc.c (pl2enc_SetPos). See THIRD_PARTY.md. */

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
extern char D_003CBA28[];
extern char D_003CBA50[];
extern void pl2enc_err(const char *message);

void func_00173E50(Pl2Enc *pl2, int x, int y) {
    if (pl2 == 0) {
        pl2enc_err(D_003CBA28);
        return;
    }
    if ((((x < (-127)) || (x > 127)) || (y < (-127))) || (y > 127)) {
        pl2enc_err(D_003CBA50);
        return;
    }
    pl2->gain_l = ((x + 127) < 0) ? (-(x + 127)) : (x + 127);
    pl2->gain_r = ((x - 127) < 0) ? (-(x - 127)) : (x - 127);
    pl2->gain_c = ((y + 127) < 0) ? (-(y + 127)) : (y + 127);
    pl2->gain_s = ((y - 127) < 0) ? (-(y - 127)) : (y - 127);
}
