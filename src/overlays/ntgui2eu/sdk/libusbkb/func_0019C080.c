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

extern struct Queue D_01200F78;
extern int D_01200F70;
extern int D_005CAB50;
extern void func_0019B150(int sema);

int func_0019C080(unsigned int c) {
    struct Queue *q;
    int i;
    if (c >= 0x80 || D_005CAB50 == 0)
        return -1;
    q = &D_01200F78;
    i = q->tail & 0x1FF;
    q->tail = i + 1;
    q->e[i].kind = 1;
    q->e[i].val = c;
    func_0019B150(D_01200F70);
    return c;
}
