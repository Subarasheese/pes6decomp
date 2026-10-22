/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned long u64;
struct Comp {
    struct Comp *next;
    char pad0[0xC];
    u64 a;
    u64 b;
    u64 c;
};
struct Timers {
    char pad[0x18];
    struct Comp *head;
    int flag;
};
extern struct Timers D_00372998;
extern void func_0010FD10(unsigned);
extern void func_0010FD20(int);

void func_00110080(u64 now, int unused0)
{
    struct Timers *t = &D_00372998;
    struct Comp *c;
    u64 best, v;
    unsigned mode;
    c = t->head;
    if (t->flag >= 0)
        return;
    mode = *(volatile unsigned *)0x10001010;
    if (c == 0) {
        func_0010FD20(0);
        func_0010FD10(mode & 0xFFFFF7FFU);
        return;
    }
    best = c->c + c->a - c->b;
    c = c->next;
    if (c != 0) {
        v = c->c + c->a - c->b;
        if (v < best + 0x7333) {
            best = v;
            for (;;) {
            c = c->next;
            if (!c) goto done;
            v = c->c + c->a - c->b;
            if (v >= best + 0x7333) goto done;
            best = v;
            }
        }
    }
done:
    if ((long)(best - now) < 0x7333) {
        func_0010FD20(*(volatile int *)0x10001000 + (int)(0x7333UL >> ((mode & 3) * 4)));
        func_0010FD10(mode & 0xFFFFF7FFU);
        return;
    }
    func_0010FD10(mode & 0xFFFFF7FFU);
    func_0010FD20((int)(best >> ((mode & 3) * 4)));
}
