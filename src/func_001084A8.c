/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Handler { void (*handler)(void *, void *); void *arg; int gp; };
struct State { char pad[12]; struct Handler *system; int unk10; struct Handler *user; };
extern struct State D_003EC258;
static __inline__ int getgp(void) {
    int gp;
    __asm__ volatile("daddu %0,$28,$0" : "=r"(gp) : : "memory");
    return gp;
}
void func_001084A8(unsigned int id, void (*handler)(void *, void *), void *arg) {
    if ((int)id < 0) {
        unsigned int i = id & 0x7fffffff;
        struct State *state = &D_003EC258;
        state->system[i].handler = handler;
        state->system[i].arg = arg;
        state->system[i].gp = getgp();
    } else {
        struct State *state = &D_003EC258;
        state->user[id].handler = handler;
        state->user[id].arg = arg;
        state->user[id].gp = getgp();
    }
}
