/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef struct Msg {
    int a;
    int b;
    int c;
} Msg;
extern int func_0019B550(int, Msg *);

int func_001A6AB0(int a, int b, unsigned short c) {
    Msg m;
    m.a = a;
    m.b = b;
    m.c = c;
    return func_0019B550(-6, &m);
}
