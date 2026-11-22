/* compiler: ee-gcc-2.96-G0-g */
/* nathanialf/ico sce/libgcc/_fixdfdi.c (__fixdfdi). See THIRD_PARTY.md. */

extern long long __fixunsdfdi(double a);

long long func_001B95B8(double a) {
    if (a < 0)
        return -__fixunsdfdi(-a);
    return __fixunsdfdi(a);
}
