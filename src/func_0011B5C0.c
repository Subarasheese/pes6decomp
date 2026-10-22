/* compiler: ee-gcc-2.96-nsa-G0-g */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* __kernel_sin from newlib 1.9.0 libm/math/k_sin.c (fdlibm, Sun Microsystems), see THIRD_PARTY.md. */
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
half =  5.00000000000000000000e-01,
S1  = -1.66666666666666324348e-01,
S2  =  8.33333333332248946124e-03,
S3  = -1.98412698298579493134e-04,
S4  =  2.75573137070700676789e-06,
S5  = -2.50507602534068634195e-08,
S6  =  1.58969099521155010221e-10;

double func_0011B5C0(double x, double y, int iy)
{
	double z,r,v;
	__int32_t ix;
	GET_HIGH_WORD(ix,x);
	ix &= 0x7fffffff;
	if(ix<0x3e400000)
	   {if((int)x==0) return x;}
	z	=  x*x;
	v	=  z*x;
	r	=  S2+z*(S3+z*(S4+z*(S5+z*S6)));
	if(iy==0) return x+v*(S1+z*r);
	else      return x-((z*(half*y-v*r)-y)-v*S1);
}
