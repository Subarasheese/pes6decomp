/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef struct Msg {
    unsigned int id;
    int a;
    int b;
    void *buf;
} Msg;

extern char D_012075C8[];
extern int func_0019B550(int, Msg *);

int func_001A6958(unsigned short id, int a, int b) {
    Msg m;
    m.id = id;
    m.a = a;
    m.b = b;
    m.buf = (void *)((unsigned int)D_012075C8 | 0x20000000);
    return func_0019B550(1, &m);
}
