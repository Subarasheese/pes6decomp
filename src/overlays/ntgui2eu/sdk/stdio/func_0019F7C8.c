/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
struct Entry { int w[4]; };
extern void func_0019F560(void);
extern int func_0019B160(int sema);
extern int func_0019B140(int sema);
extern int D_005CABF0;
extern struct Entry D_01204840[];

struct Entry *func_0019F7C8(unsigned int n)
{
    struct Entry *e;
    func_0019F560();
    func_0019B160(D_005CABF0);
    if (n >= 32) {
        func_0019B140(D_005CABF0);
        return 0;
    }
    e = &D_01204840[n];
    func_0019B140(D_005CABF0);
    return e;
}
