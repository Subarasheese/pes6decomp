/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
int func_0019DBD0(const char *fmt, ...);
void func_0019C198(int usec);
int func_0019F030(void *sema);
extern int D_005C8DD0;
extern char D_005FEAE8[];
extern char D_005CA940[];

int func_00191670(int nowait)
{
    if (nowait == 0) {
        if (D_005C8DD0 > 0)
            func_0019DBD0(D_005FEAE8);
        while (func_0019F030(D_005CA940))
            func_0019C198(4000);
        return 0;
    }
    return func_0019F030(D_005CA940);
}
