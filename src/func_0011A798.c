/* compiler: ee-gcc-2.96-nsa-G0-g */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* __kernel_cos from newlib 1.9.0 libm/math/k_cos.c (fdlibm, Sun Microsystems), see THIRD_PARTY.md. */
typedef int __int32_t;
typedef unsigned int __uint32_t;

typedef union {
  double value;
  struct { __uint32_t lsw; __uint32_t msw; } parts;
} ieee_double_shape_type;

#define EXTRACT_WORDS(ix0,ix1,d) do { ieee_double_shape_type ew_u; ew_u.value = (d); (ix0) = ew_u.parts.msw; (ix1) = ew_u.parts.lsw; } while (0)
#define SET_HIGH_WORD(d,v) do { ieee_double_shape_type sh_u; sh_u.value = (d); sh_u.parts.msw = (v); (d) = sh_u.value; } while (0)
#define GET_HIGH_WORD(i,d) do { ieee_double_shape_type gh_u; gh_u.value = (d); (i) = gh_u.parts.msw; } while (0)
#define INSERT_WORDS(d,ix0,ix1) do { ieee_double_shape_type iw_u; iw_u.parts.msw = (ix0); iw_u.parts.lsw = (ix1); (d) = iw_u.value; } while (0)


static const double 
one =  1.00000000000000000000e+00,
C1  =  4.16666666666666019037e-02,
C2  = -1.38888888888741095749e-03,
C3  =  2.48015872894767294178e-05,
C4  = -2.75573143513906633035e-07,
C5  =  2.08757232129817482790e-09,
C6  = -1.13596475577881948265e-11;

double func_0011A798(double x, double y)
{
	double a,hz,z,r,qx;
	__int32_t ix;
	GET_HIGH_WORD(ix,x);
	ix &= 0x7fffffff;
	if(ix<0x3e400000) {
	    if(((int)x)==0) return one;
	}
	z  = x*x;
	r  = z*(C1+z*(C2+z*(C3+z*(C4+z*(C5+z*C6)))));
	if(ix < 0x3FD33333)
	    return one - (0.5*z - (z*r - x*y));
	else {
	    if(ix > 0x3fe90000) {
		qx = 0.28125;
	    } else {
	        INSERT_WORDS(qx,ix-0x00200000,0);
	    }
	    hz = 0.5*z-qx;
	    a  = one-qx;
	    return a - (hz - (z*r-x*y));
	}
}
