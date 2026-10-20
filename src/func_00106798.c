/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef struct Msg {
    int a;
    int b;
    int c;
} Msg;
extern int func_00105790(int, Msg *);

int func_00106798(int a, int b, unsigned short c) {
    Msg m;
    m.a = a;
    m.b = b;
    m.c = c;
    return func_00105790(-6, &m);
}
