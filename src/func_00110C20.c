/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
struct Timer {
    int m0;
    int m4;
    int id;
    int flags;
    long long base;
    long long total;
    char pad[0x20];
};

extern long long func_00110578(void);

long long func_00110C20(int handle)
{
    struct Timer *t = (struct Timer *)(((unsigned int)handle >> 10) << 6);
    long long total;

    if (handle < 0 || (handle & 0x3FF) != t->id)
        return -1;
    total = t->total;
    if (t->flags & 1)
        total += func_00110578() - t->base;
    return total;
}
