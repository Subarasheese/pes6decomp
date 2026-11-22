/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/pl2enc.c (pl2enc_ExecOneBlk). See THIRD_PARTY.md. */

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
extern int D_003CB5B0[];

void func_00173C60(Pl2Enc *pl2, short *in, short *out_l, short *out_r) {
    int i;
    int s;
    int l;
    int r;
    int ls;
    int rs;
    int c;
    int ol;
    int or ;
    int *dl;
    int *dr;
    dr = pl2->dly_r;
    dl = pl2->dly_l;
    for (i = 0; i < 32; i++) {
        s = D_003CB5B0[pl2->gain_s];
        l = (in[i] * D_003CB5B0[pl2->gain_l]) >> 12;
        r = (in[i] * D_003CB5B0[pl2->gain_r]) >> 12;
        ls = (l * s) >> 12;
        rs = (r * s) >> 12;
        c = D_003CB5B0[pl2->gain_c];
        ol = ((l * c) >> 12) + (*dl);
        or = ((r * c) >> 12) + (*dr);
        if (ol > 32767) {
            ol = 32767;
        } else if (ol < (-32768)) {
            ol = -32768;
        }
        if (or > 32767) {
            or = 32767;
        } else if (or < (-32768)) {
            or = -32768;
        }
        *dl = ((ls * (-3567)) + (rs * (-2006))) >> 12;
        out_l[i] = ol;
        dl++;
        *dr = ((rs * 3567) + (ls * 2006)) >> 12;
        dr++;
        out_r[i] = or ;
    }
}
