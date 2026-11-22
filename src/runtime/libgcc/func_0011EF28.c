/* compiler: ee-gcc-2.96-G0-g */
/* devin-thomas/guilty-gear-x-plus src/sdk/gcc/_floatdidf.c (__floatdidf). See THIRD_PARTY.md. */

typedef int SItype;
typedef unsigned int USItype;
typedef long long DItype;
typedef double DFtype;

DFtype func_0011EF28(DItype u) {
    DFtype d;
    d = (SItype)(u >> ((sizeof(SItype)) * 8));
    d *= ((unsigned long long)1) << (((sizeof(SItype)) * 8) / 2);
    d *= ((unsigned long long)1) << (((sizeof(SItype)) * 8) / 2);
    d += (USItype)(u & ((((unsigned long long)1) << ((sizeof(SItype)) * 8)) - 1));
    return d;
}
