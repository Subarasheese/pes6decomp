/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
int func_00108048(const char *fmt, ...);
void func_001063D8(int usec);
int func_001094A8(void *sema);
extern int D_00372A90;
extern char D_003C4218[];
extern char D_00374600[];

int func_00113E18(int nowait)
{
    if (nowait == 0) {
        if (D_00372A90 > 0)
            func_00108048(D_003C4218);
        while (func_001094A8(D_00374600))
            func_001063D8(4000);
        return 0;
    }
    return func_001094A8(D_00374600);
}
