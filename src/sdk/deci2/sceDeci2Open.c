/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef struct Msg {
    unsigned int id;
    int a;
    int b;
    void *buf;
} Msg;

extern char D_003EBCF0[];
extern int func_00105790(int, Msg *);

int sceDeci2Open(unsigned short id, int a, int b) {
    Msg m;
    m.id = id;
    m.a = a;
    m.b = b;
    m.buf = (void *)((unsigned int)D_003EBCF0 | 0x20000000);
    return func_00105790(1, &m);
}
