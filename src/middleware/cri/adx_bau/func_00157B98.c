/* compiler: ee-gcc-2.96-G0 */
/* crashbashash/DW4_Decomp, src/cri/adxenc.c (ADXKEY_GenerateKey). See THIRD_PARTY.md. */

extern const short D_003C7438[1024];
extern int D_00377004;
extern int func_00157B58(void);

int func_00157B98(const char *str, int len, unsigned short *k0, unsigned short *k1,
                  unsigned short *k2) {
    int i;
    short a;
    short b;
    short c;
    if (D_00377004 == 0) {
        func_00157B58();
    }
    *k0 = 0;
    *k1 = 0;
    *k2 = 0;
    if ((str == 0) && (len <= 0)) {
        return 0;
    }
    a = D_003C7438[256];
    for (i = 0; i < len; i++) {
        a = D_003C7438[(a * D_003C7438[128 + str[i]]) % 1024];
    }

    b = D_003C7438[512];
    for (i = 0; i < len; i++) {
        b = D_003C7438[(b * D_003C7438[128 + str[i]]) % 1024];
    }

    c = D_003C7438[768];
    for (i = 0; i < len; i++) {
        c = D_003C7438[(c * D_003C7438[128 + str[i]]) % 1024];
    }

    *k0 = a;
    *k1 = b;
    *k2 = c;
    return 0;
}
