/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
int printf(const char *fmt, ...);
void DelayThread(int usec);
int sceSifCheckStatRpc(void *sema);
extern int D_00372A90;
extern char D_003C4218[];
extern char D_00374600[];

int func_00113E18(int nowait)
{
    if (nowait == 0) {
        if (D_00372A90 > 0)
            printf(D_003C4218);
        while (sceSifCheckStatRpc(D_00374600))
            DelayThread(4000);
        return 0;
    }
    return sceSifCheckStatRpc(D_00374600);
}
