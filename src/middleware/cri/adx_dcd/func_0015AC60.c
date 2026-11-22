/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxdcd.c (ADX_DecodeSte4AsMono). See THIRD_PARTY.md. */

static const int adx_nibble_tbl[16] = {0, 1, 2, 3, 4, 5, 6, 7, -8, -7, -6, -5, -4, -3, -2, -1};

int func_0015AC60(unsigned char *ibuf, int nblk, short *obufl, short *dlyl, short *obufr,
                  short *dlyr, short k0, short k1, unsigned short *seed, short mul, short add) {
    unsigned char *p;
    int i;
    int j;
    int n;
    int hdr;
    int scale_l;
    int scale_r;
    int key;
    int bl;
    int br;
    int nibl;
    int nibr;
    int v;
    int l1;
    int l2;
    int r1;
    int r2;
    p = ibuf;
    l1 = dlyl[0];
    l2 = dlyl[1];
    r1 = dlyr[0];
    r2 = dlyr[1];
    n = nblk / 2;
    for (i = 0; i < n; i++) {
        hdr = (short)((((*((short *)p)) & 0xFF00) >> 8) | (((*((short *)p)) << 8) & 0xFF00));
        if (hdr & 0x8000) {
            return i * 2;
        }
        scale_l = ((hdr ^ (*seed)) & 0x1FFF) + 1;
        key = (((*seed) * mul) + add) & 0x7FFF;
        *seed = key;
        hdr = (short)((((*((short *)(p + 18))) & 0xFF00) >> 8) |
                      (((*((short *)(p + 18))) << 8) & 0xFF00));
        if (hdr & 0x8000) {
            return i * 2;
        }
        scale_r = ((hdr ^ key) & 0x1FFF) + 1;
        *seed = ((mul * key) + add) & 0x7FFF;
        p += 2;
        for (j = 0; j < 32; j += 2) {
            bl = (signed char)p[0];
            nibl = bl >> 4;
            br = (signed char)p[18];
            nibr = br >> 4;
            p++;
            v = (((k0 * l1) + (k1 * l2)) >> 12) + (nibl * scale_l);
            if ((v > 32767) || (v < (-32768))) {
                if (v < (-32768)) {
                    v = -32768;
                } else if (v > 32767) {
                    v = 32767;
                }
            };
            l2 = l1;
            l1 = v;
            v = (((k0 * r1) + (k1 * r2)) >> 12) + (nibr * scale_r);
            if ((v > 32767) || (v < (-32768))) {
                if (v < (-32768)) {
                    v = -32768;
                } else if (v > 32767) {
                    v = 32767;
                }
            };
            r2 = r1;
            r1 = v;
            v = ((l1 + r1) * 7) / 10;
            if ((v > 32767) || (v < (-32768))) {
                if (v < (-32768)) {
                    v = -32768;
                } else if (v > 32767) {
                    v = 32767;
                }
            };
            *(obufl++) = (*(obufr++) = v);
            bl = adx_nibble_tbl[bl & 0xF];
            br = adx_nibble_tbl[br & 0xF];
            v = (((k0 * l1) + (k1 * l2)) >> 12) + (bl * scale_l);
            if ((v > 32767) || (v < (-32768))) {
                if (v < (-32768)) {
                    v = -32768;
                } else if (v > 32767) {
                    v = 32767;
                }
            };
            l2 = l1;
            l1 = v;
            v = (((k0 * r1) + (k1 * r2)) >> 12) + (br * scale_r);
            if ((v > 32767) || (v < (-32768))) {
                if (v < (-32768)) {
                    v = -32768;
                } else if (v > 32767) {
                    v = 32767;
                }
            };
            r2 = r1;
            r1 = v;
            v = ((l1 + r1) * 7) / 10;
            if ((v > 32767) || (v < (-32768))) {
                if (v < (-32768)) {
                    v = -32768;
                } else if (v > 32767) {
                    v = 32767;
                }
            };
            *(obufl++) = (*(obufr++) = v);
        }

        p += 18;
    }

    dlyl[0] = l1;
    dlyl[1] = l2;
    dlyr[0] = r1;
    dlyr[1] = r2;
    return nblk;
}
