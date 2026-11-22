/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxdcd.c (ADX_DecodeMono4). See THIRD_PARTY.md. */

static const int adx_nibble_tbl[16] = {0, 1, 2, 3, 4, 5, 6, 7, -8, -7, -6, -5, -4, -3, -2, -1};

int func_0015AA80(unsigned char *ibuf, int nblk, short *obuf, short *dly, short k0, short k1,
                  unsigned short *seed, short mul, short add) {
    unsigned char *p;
    int i;
    int j;
    int hdr;
    int scale;
    int key;
    int b;
    int nib;
    int v;
    int d1;
    int d2;
    p = ibuf;
    d1 = dly[0];
    d2 = dly[1];
    for (i = 0; i < nblk; i++) {
        hdr = (short)((((*((short *)p)) & 0xFF00) >> 8) | (((*((short *)p)) << 8) & 0xFF00));
        if (hdr & 0x8000) {
            return i;
        }
        scale = ((hdr ^ (*seed)) & 0x1FFF) + 1;
        key = ((*seed) * mul) + add;
        *seed = key & 0x7FFF;
        p += 2;
        for (j = 0; j < 32; j += 2) {
            b = (signed char)(*p);
            nib = b >> 4;
            p++;
            v = (((k0 * d1) + (k1 * d2)) >> 12) + (nib * scale);
            if ((v > 32767) || (v < (-32768))) {
                if (v < (-32768)) {
                    v = -32768;
                } else if (v > 32767) {
                    v = 32767;
                }
            };
            d2 = d1;
            d1 = v;
            *(obuf++) = d1;
            b = adx_nibble_tbl[b & 0xF];
            v = (((k0 * d1) + (k1 * d2)) >> 12) + (b * scale);
            if ((v > 32767) || (v < (-32768))) {
                if (v < (-32768)) {
                    v = -32768;
                } else if (v > 32767) {
                    v = 32767;
                }
            };
            d2 = d1;
            d1 = v;
            *(obuf++) = d1;
        }
    }

    dly[0] = d1;
    dly[1] = d2;
    return nblk;
}
