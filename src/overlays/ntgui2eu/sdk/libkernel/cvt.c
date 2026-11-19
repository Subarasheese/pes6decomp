/* compiler: ee-gcc-2.96-nsa-G0-g */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* cvt from newlib 1.9.0 libc/stdio/vfprintf.c (fdlibm, Sun Microsystems), see THIRD_PARTY.md. */
#define ALT 0x001
#define Sign_bit 0x80000000
typedef int __int32_t;
typedef unsigned int __uint32_t;

typedef union {
  double value;
  struct { __uint32_t lsw; __uint32_t msw; } parts;
} ieee_double_shape_type;

#define EXTRACT_WORDS(ix0,ix1,d) do { ieee_double_shape_type ew_u; ew_u.value = (d); (ix0) = ew_u.parts.msw; (ix1) = ew_u.parts.lsw; } while (0)
#define GET_HIGH_WORD(i,d) do { ieee_double_shape_type gh_u; gh_u.value = (d); (i) = gh_u.parts.msw; } while (0)
#define INSERT_WORDS(d,ix0,ix1) do { ieee_double_shape_type iw_u; iw_u.parts.msw = (ix0); iw_u.parts.lsw = (ix1); (d) = iw_u.value; } while (0)

union double_union { double d; __uint32_t i[2]; };
#define word0(x) ((x).i[1])

struct _reent;
extern char *_dtoa_r(struct _reent *, double, int, int, int *, int *, char **);

char *cvt(struct _reent *data, double value, int ndigits, int flags, char *sign, int *decpt, int ch, int *length)
{
	int mode, dsgn;
	char *digits, *bp, *rve;
	union double_union tmp;

	if (ch == 'f') {
		mode = 3;
	} else {
		if (ch == 'e' || ch == 'E') {
			ndigits++;
		}
		mode = 2;
	}

	tmp.d = value;

	if (word0(tmp) & Sign_bit) {
		value = -value;
		*sign = '-';
	} else
		*sign = '\0';

	digits = _dtoa_r(data, value, mode, ndigits, decpt, &dsgn, &rve);

	if ((ch != 'g' && ch != 'G') || flags & ALT) {
		bp = digits + ndigits;
		if (ch == 'f') {
			if (*digits == '0' && value)
				*decpt = -ndigits + 1;
			bp += *decpt;
		}
		if (value == 0)
			rve = bp;
		while (rve < bp)
			*rve++ = '0';
	}
	*length = rve - digits;
	return (digits);
}
