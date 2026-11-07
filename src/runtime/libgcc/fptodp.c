/* compiler: ee-gcc-2.96 */
/* Sony SDK / C runtime code; source adapted from kfiv-decomp (src/sce/libgcc/fp-bit.c). */
/* libgcc.a member fp-bit.o */
/*
 * sce/libgcc/libgcc2.h
 *
 * The declarations this archive's members share, under the public name the
 * archive's own sources use for this header.  Nothing here is copied from an
 * SDK header.
 */
#ifndef SCE_LIBGCC_LIBGCC2_H
#define SCE_LIBGCC_LIBGCC2_H

typedef void (*func_ptr)(void);
/* _ctors.o's constructor and destructor lists, which __main.o walks. */
extern func_ptr __CTOR_LIST__[];
extern func_ptr __DTOR_LIST__[];
long long __fixunsdfdi(double a); /* definition in sce/libgcc/_fixunsdfdi.c */
/* The software floating point members' shared helpers: dp-bit.o's
   double-precision unpacker and __make_dp, which fp-bit.o's conversions call,
   and fp-bit.o's __make_fp, which dp-bit.o's conversions call. */
void __unpack_d(void *in, void *out);                        /* definition in sce/libgcc/dp-bit.c */
int __make_dp(int class, int sign, int exp, long long frac); /* definition in sce/libgcc/dp-bit.c */
void __make_fp(int class, int sign, int exp, int frac);      /* definition in sce/libgcc/fp-bit.c */
unsigned int fptoui(float arg_a);                            /* definition in sce/libgcc/fp-bit.c */

#endif /* SCE_LIBGCC_LIBGCC2_H */

#define CLASS_SNAN 0
#define CLASS_QNAN 1
#define CLASS_ZERO 2
#define CLASS_NUMBER 3
#define CLASS_INFINITY 4
#define IMPLICIT_1 0x40000000
#define IMPLICIT_2 0x80000000

typedef struct {
    unsigned int class;
    int sign;
    int normal_exp;
    unsigned int fraction;
} fp_number_type;/* The single-float number in unpacked form.  FRAC_NBITS is 32, NGARDS is 7,
   so the implicit one sits at bit 30 and the overflow bit at bit 31.  The
   file static shares its name with the double build's global in dp-bit.o. */

static __inline__ int isnan(fp_number_type *x);
__inline__ int isinf(fp_number_type *x);
__inline__ int iszero(fp_number_type *x);
/* fp-bit.c's nan(): the NaN this build hands back for inf - inf; its static is the
   member's whole .bss, VMA 0x736188, 0x10 B. */
static __inline__ fp_number_type *nan(void);


typedef union {
    struct {
        unsigned int fraction : 23;
        unsigned int exp : 8;
        unsigned int sign : 1;
    } bits;

    float value;
} FLO_union_type;float __pack_f(void *s);
void __unpack_f(void *in, void *out);
fp_number_type *_fpadd_parts(fp_number_type *a, fp_number_type *b, fp_number_type *tmp);
float fpadd(float arg_a, float arg_b);
float fpsub(float arg_a, float arg_b);
__inline__ fp_number_type *_fpmul_parts(fp_number_type *a, fp_number_type *b,
                                               fp_number_type *tmp);
float fpmul(float arg_a, float arg_b);
__inline__ fp_number_type *_fpdiv_parts(fp_number_type *a, fp_number_type *b);
float fpdiv(float arg_a, float arg_b);
int __fpcmp_parts_f(fp_number_type *a, fp_number_type *b);
int fpcmp(float arg_a, float arg_b);
float sitofp(int arg_a);
int fptosi(float arg_a);
unsigned int fptoui(float arg_a);
float __negsf2(float arg_a);
void __make_fp(int class, int sign, int exp, int frac);


int fptodp(float arg_a)
{
    fp_number_type in;
    float local1[4];
    long long a3_val;
    local1[0] = arg_a;
    __unpack_f(local1, &in);
    a3_val = (long long)in.fraction << 32;
    return __make_dp(in.class, in.sign, in.normal_exp,
                     (long long)((unsigned long long)a3_val >> 2));
}
