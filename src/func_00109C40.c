/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
struct Entry { int w[4]; };
extern void func_001099D8(void);
extern int func_001053A0(int sema);
extern int func_00105380(int sema);
extern int D_00371398;
extern struct Entry D_003EF200[];

struct Entry *func_00109C40(unsigned int n)
{
    struct Entry *e;
    func_001099D8();
    func_001053A0(D_00371398);
    if (n >= 32) {
        func_00105380(D_00371398);
        return 0;
    }
    e = &D_003EF200[n];
    func_00105380(D_00371398);
    return e;
}
