/* compiler: ee-gcc-2.96-nsa-G0-g */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* sin from newlib 1.9.0 libm/common/s_sin.c (fdlibm, Sun Microsystems), see THIRD_PARTY.md. */
typedef int __int32_t;
typedef unsigned int __uint32_t;

typedef union {
  double value;
  struct { __uint32_t lsw; __uint32_t msw; } parts;
} ieee_double_shape_type;

#define EXTRACT_WORDS(ix0,ix1,d) do { ieee_double_shape_type ew_u; ew_u.value = (d); (ix0) = ew_u.parts.msw; (ix1) = ew_u.parts.lsw; } while (0)
#define GET_HIGH_WORD(i,d) do { ieee_double_shape_type gh_u; gh_u.value = (d); (i) = gh_u.parts.msw; } while (0)
#define INSERT_WORDS(d,ix0,ix1) do { ieee_double_shape_type iw_u; iw_u.parts.msw = (ix0); iw_u.parts.lsw = (ix1); (d) = iw_u.value; } while (0)

int func_00118320(double x, double *y);	/* __ieee754_rem_pio2 */
double func_0011A798(double x, double y);	/* __kernel_cos */
double func_0011B5C0(double x, double y, int iy);	/* __kernel_sin */

double func_0011CC58(double x)
{
	double y[2],z=0.0;
	__int32_t n,ix;

	GET_HIGH_WORD(ix,x);

	ix &= 0x7fffffff;
	if(ix <= 0x3fe921fb) return func_0011B5C0(x,z,0);

	else if (ix>=0x7ff00000) return x-x;

	else {
	    n = func_00118320(x,y);
	    switch(n&3) {
		case 0: return  func_0011B5C0(y[0],y[1],1);
		case 1: return  func_0011A798(y[0],y[1]);
		case 2: return -func_0011B5C0(y[0],y[1],1);
		default:
			return -func_0011A798(y[0],y[1]);
	    }
	}
}
