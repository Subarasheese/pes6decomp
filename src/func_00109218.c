/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Queue;
struct Server {
    char pad0[0xc];
    int f0c;
    char pad10[0xc];
    int f1c, f20, f24, f28, f2c, f30, f34;
    int pad38;
    struct Server *next;
    struct Queue *queue;
};
struct Queue {
    int thread, active, pad08;
    struct Server *head;
    union { struct Server *ptr; int word; } tail;
};
struct Request {
    char pad0[0x10];
    int f10, f14, pad18, f1c, f20, f24, f28, f2c, f30;
    struct Server *server;
};
extern void func_00106228(int);
extern void func_00109218(struct Request *r) {
    struct Server *s = r->server;
    struct Queue *q = s->queue;
    int first, second;
    if (q->head == 0) q->head = s;
    else q->tail.ptr->next = s;
    q->tail.ptr = s;
    first = r->f14;
    second = r->f1c;
    s->f20 = first;
    s->f1c = second;
    s->f24 = r->f20;
    s->f0c = r->f24;
    s->f28 = r->f28;
    s->f2c = r->f2c;
    s->f30 = r->f30;
    s->f34 = r->f10;
    if (q->thread >= 0 && q->active == 0) func_00106228(q->thread);
}
