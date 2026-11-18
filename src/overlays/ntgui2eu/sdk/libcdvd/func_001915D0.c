/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_005C8DD0;
extern int D_005C8DF4;
extern char D_005C9F90[];
extern char D_005FEAD8[];
void func_0019C198(int);
void func_0019DBD0(const char *, ...);
int func_0019F030(void *);

int func_001915D0(int mode)
{
    if (mode == 0) {
        if (D_005C8DD0 > 0)
            func_0019DBD0(D_005FEAD8);
        while (D_005C8DF4 != 0 || func_0019F030(D_005C9F90) != 0)
            func_0019C198(0xFA0);
        return 0;
    }
    if (D_005C8DF4 != 0 || func_0019F030(D_005C9F90) != 0)
        return 1;
    return 0;
}
