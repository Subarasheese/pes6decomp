/* compiler: ee-gcc-2.96-G0 */
/* new-coke/rez-decomp, src/libc/libm/sf_modf.c (modff). See THIRD_PARTY.md. */

typedef union {
    float value;
    unsigned int word;
} ieee_float_shape_type;

float func_0011D310(float x, float *iptr) {
    int i0;
    int j0;
    unsigned int i;
    do {
        ieee_float_shape_type gf_u;
        gf_u.value = x;
        i0 = gf_u.word;
    } while (0);
    j0 = ((i0 >> 23) & 0xff) - 0x7f;
    if (j0 < 23) {
        if (j0 < 0) {
            do {
                ieee_float_shape_type sf_u;
                sf_u.word = i0 & 0x80000000;
                *iptr = sf_u.value;
            } while (0);
            return x;
        } else {
            i = 0x007fffff >> j0;
            if ((i0 & i) == 0) {
                unsigned int ix;
                *iptr = x;
                do {
                    ieee_float_shape_type gf_u;
                    gf_u.value = x;
                    ix = gf_u.word;
                } while (0);
                do {
                    ieee_float_shape_type sf_u;
                    sf_u.word = ix & 0x80000000;
                    x = sf_u.value;
                } while (0);
                return x;
            } else {
                do {
                    ieee_float_shape_type sf_u;
                    sf_u.word = i0 & (~i);
                    *iptr = sf_u.value;
                } while (0);
                return x - (*iptr);
            }
        }
    } else {
        unsigned int ix;
        *iptr = x;
        do {
            ieee_float_shape_type gf_u;
            gf_u.value = x;
            ix = gf_u.word;
        } while (0);
        do {
            ieee_float_shape_type sf_u;
            sf_u.word = ix & 0x80000000;
            x = sf_u.value;
        } while (0);
        return x;
    }
}
