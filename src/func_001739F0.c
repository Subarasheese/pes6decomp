/* compiler: ee-gcc-2.96 */
struct Table {
    unsigned char pad0[0x8];
    int *a;
    int *b;
    unsigned char pad10[0x4];
    int used;
    int size;
};

void func_001739F0(struct Table *t) {
    int i;

    for (i = 0; i < 0x60; i++) {
        t->a[i] = 0;
        t->b[i] = 0;
    }
    t->used = 0;
    t->size = 0x40;
}
