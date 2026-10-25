/* compiler: ee-gcc-2.96-G0 */
struct Voice {
    signed char state;
    unsigned char pad1[0xA7];
};

extern struct Voice D_00383280[];
void func_001624E8(struct Voice *);

void func_00162820(void) {
    struct Voice *v = D_00383280;
    int i;

    for (i = 15; i >= 0; i--) {
        if (v->state == 1) {
            func_001624E8(v);
        }
        v++;
    }
}
