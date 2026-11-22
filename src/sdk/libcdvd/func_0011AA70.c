/* compiler: ee-gcc-2.96-G0-g */
/* newlib-1.10.0 newlib/libm/math/k_rem_pio2.c (__kernel_rem_pio2). See THIRD_PARTY.md. */
/*
 * ====================================================
 * Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.
 *
 * Developed at SunPro, a Sun Microsystems, Inc. business.
 * Permission to use, copy, modify, and distribute this
 * software is freely granted, provided that this notice
 * is preserved.
 * ====================================================
 */
typedef int __int32_t;
extern double func_0011C7D0(double);
extern double func_0011CA70(double, int);
static const int init_jk[] = {2, 3, 4, 6};
static const double PIo2[] = {1.57079625129699707031e+00, 7.54978941586159635335e-08,
                              5.39030252995776476554e-15, 3.28200341580791294123e-22,
                              1.27065575308067607349e-29, 1.22933308981111328932e-36,
                              2.73370053816464559624e-44, 2.16741683877804819444e-51};
static const double zero = 0.0;
static const double one = 1.0;
static const double two24 = 1.67772160000000000000e+07;
static const double twon24 = 5.96046447753906250000e-08;

int func_0011AA70(double *x, double *y, int e0, int nx, int prec, const __int32_t *ipio2) {
    __int32_t jz;
    __int32_t jx;
    __int32_t jv;
    __int32_t jp;
    __int32_t jk;
    __int32_t carry;
    __int32_t n;
    __int32_t iq[20];
    __int32_t i;
    __int32_t j;
    __int32_t k;
    __int32_t m;
    __int32_t q0;
    __int32_t ih;
    double z;
    double fw;
    double f[20];
    double fq[20];
    double q[20];
    jk = init_jk[prec];
    jp = jk;
    jx = nx - 1;
    jv = (e0 - 3) / 24;
    if (jv < 0)
        jv = 0;
    q0 = e0 - (24 * (jv + 1));
    j = jv - jx;
    m = jx + jk;
    for (i = 0; i <= m; i++, j++)
        f[i] = (j < 0) ? (zero) : ((double)ipio2[j]);

    for (i = 0; i <= jk; i++) {
        for (j = 0, fw = 0.0; j <= jx; j++)
            fw += x[j] * f[(jx + i) - j];

        q[i] = fw;
    }

    jz = jk;
recompute:
    for (i = 0, j = jz, z = q[jz]; j > 0; i++, j--) {
        fw = (double)((__int32_t)(twon24 * z));
        iq[i] = (__int32_t)(z - (two24 * fw));
        z = q[j - 1] + fw;
    }

    z = func_0011CA70(z, (int)q0);
    z -= 8.0 * func_0011C7D0(z * 0.125);
    n = (__int32_t)z;
    z -= (double)n;
    ih = 0;
    if (q0 > 0) {
        i = iq[jz - 1] >> (24 - q0);
        n += i;
        iq[jz - 1] -= i << (24 - q0);
        ih = iq[jz - 1] >> (23 - q0);
    } else if (q0 == 0)
        ih = iq[jz - 1] >> 23;
    else if (z >= 0.5)
        ih = 2;
    if (ih > 0) {
        n += 1;
        carry = 0;
        for (i = 0; i < jz; i++) {
            j = iq[i];
            if (carry == 0) {
                if (j != 0) {
                    carry = 1;
                    iq[i] = 0x1000000 - j;
                }
            } else
                iq[i] = 0xffffff - j;
        }

        if (q0 > 0) {
            switch (q0) {
            case 1:
                iq[jz - 1] &= 0x7fffff;
                break;

            case 2:
                iq[jz - 1] &= 0x3fffff;
                break;
            }
        }
        if (ih == 2) {
            z = one - z;
            if (carry != 0)
                z -= func_0011CA70(one, (int)q0);
        }
    }
    if (z == zero) {
        j = 0;
        for (i = jz - 1; i >= jk; i--)
            j |= iq[i];

        if (j == 0) {
            for (k = 1; iq[jk - k] == 0; k++)
                ;

            for (i = jz + 1; i <= (jz + k); i++) {
                f[jx + i] = (double)ipio2[jv + i];
                for (j = 0, fw = 0.0; j <= jx; j++)
                    fw += x[j] * f[(jx + i) - j];

                q[i] = fw;
            }

            jz += k;
            goto recompute;
        }
    }
    if (z == 0.0) {
        jz -= 1;
        q0 -= 24;
        while (iq[jz] == 0) {
            jz--;
            q0 -= 24;
        }

    } else {
        z = func_0011CA70(z, -((int)q0));
        if (z >= two24) {
            fw = (double)((__int32_t)(twon24 * z));
            iq[jz] = (__int32_t)(z - (two24 * fw));
            jz += 1;
            q0 += 24;
            iq[jz] = (__int32_t)fw;
        } else
            iq[jz] = (__int32_t)z;
    }
    fw = func_0011CA70(one, (int)q0);
    for (i = jz; i >= 0; i--) {
        q[i] = fw * ((double)iq[i]);
        fw *= twon24;
    }

    for (i = jz; i >= 0; i--) {
        for (fw = 0.0, k = 0; (k <= jp) && (k <= (jz - i)); k++)
            fw += PIo2[k] * q[i + k];

        fq[jz - i] = fw;
    }

    switch (prec) {
    case 0:
        fw = 0.0;
        for (i = jz; i >= 0; i--)
            fw += fq[i];

        y[0] = (ih == 0) ? (fw) : (-fw);
        break;

    case 1:

    case 2:
        fw = 0.0;
        for (i = jz; i >= 0; i--)
            fw += fq[i];

        y[0] = (ih == 0) ? (fw) : (-fw);
        fw = fq[0] - fw;
        for (i = 1; i <= jz; i++)
            fw += fq[i];

        y[1] = (ih == 0) ? (fw) : (-fw);
        break;

    case 3:
        for (i = jz; i > 0; i--) {
            fw = fq[i - 1] + fq[i];
            fq[i] += fq[i - 1] - fw;
            fq[i - 1] = fw;
        }

        for (i = jz; i > 1; i--) {
            fw = fq[i - 1] + fq[i];
            fq[i] += fq[i - 1] - fw;
            fq[i - 1] = fw;
        }

        for (fw = 0.0, i = jz; i >= 2; i--)
            fw += fq[i];

        if (ih == 0) {
            y[0] = fq[0];
            y[1] = fq[1];
            y[2] = fw;
        } else {
            y[0] = -fq[0];
            y[1] = -fq[1];
            y[2] = -fw;
        }
    }

    return n & 7;
}
