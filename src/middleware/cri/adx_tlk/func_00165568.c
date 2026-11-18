/* compiler: ee-gcc-2.96-G0 */
struct Voice {
    signed char state;
    unsigned char pad1[0xC7];
};

extern struct Voice D_0037ACA8[];
void adxt_Destroy(struct Voice *);

void func_00165568(void) {
    struct Voice *v = D_0037ACA8;
    int i;

    for (i = 15; i >= 0; i--) {
        if (v->state == 1) {
            adxt_Destroy(v);
        }
        v++;
    }
}
