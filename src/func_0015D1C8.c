/* compiler: ee-gcc-2.96-G0 */
struct Voice {
    signed char state;
    unsigned char pad1[0x43];
};

extern struct Voice D_00378198[];
void func_0015D0E8(struct Voice *);

void func_0015D1C8(void) {
    struct Voice *v = D_00378198;
    int i;

    for (i = 15; i >= 0; i--) {
        if (v->state == 1) {
            func_0015D0E8(v);
        }
        v++;
    }
}
