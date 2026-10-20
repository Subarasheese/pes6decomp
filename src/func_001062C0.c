/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
struct Ent {
    unsigned char kind;
    unsigned char val;
};

struct Queue {
    int head;
    int tail;
    struct Ent e[512];
};

extern struct Queue D_003EB8E8;
extern int D_003EB8E0;
extern int D_003712E8;
extern void func_00105390(int sema);

int func_001062C0(unsigned int c) {
    struct Queue *q;
    int i;
    if (c >= 0x80 || D_003712E8 == 0)
        return -1;
    q = &D_003EB8E8;
    i = q->tail & 0x1FF;
    q->tail = i + 1;
    q->e[i].kind = 1;
    q->e[i].val = c;
    func_00105390(D_003EB8E0);
    return c;
}
