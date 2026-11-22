/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libgcc/fp-bit.c (__fpcmp_parts_f). */
/* GCC runtime, config/fp-bit.c. Copyright (C) 1994-1998 Free Software Foundation, Inc.
 * GPL-2.0-or-later with the GCC linking exception. See THIRD_PARTY.md and LICENSES/GPL-2.0.txt. */

typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    unsigned int fraction;
} fp_number_type;

int func_0018C088(fp_number_type *a, fp_number_type *b) {
    unsigned int at = a->class;
    unsigned int bt;
    if (at < 2) {
        return 1;
    }
    bt = b->class;
    if (bt < 2) {
        return 1;
    }
    if ((at ^ 4) == 0) {
        if ((bt ^ 4) == 0) {
            return b->sign - a->sign;
        }
        return (a->sign) ? (-1) : (1);
    }
    if ((bt ^ 4) == 0) {
        if (b->sign == 0) {
            return -1;
        }
        return 1;
    }
    if ((at ^ 2) == 0) {
        if ((bt ^ 2) == 0) {
            return 0;
        }
        if (b->sign != 0) {
            return 1;
        }
        return -1;
    }
    if ((bt ^ 2) == 0) {
        return (a->sign) ? (-1) : (1);
    }
    {
        int asign = a->sign;
        int bsign = b->sign;
        if (asign != bsign) {
            return (asign) ? (-1) : (1);
        }
        {
            int aexp = a->normal_exp;
            int bexp = b->normal_exp;
            if (bexp < aexp) {
                return (asign) ? (-1) : (1);
            }
            if (aexp < bexp) {
                return (asign) ? (1) : (-1);
            }
            {
                unsigned int afrac = a->fraction;
                unsigned int bfrac = b->fraction;
                if (bfrac < afrac) {
                    return (asign) ? (-1) : (1);
                }
                if (afrac < bfrac) {
                    return (asign) ? (1) : (-1);
                }
                return 0;
            }
        }
    }
}
