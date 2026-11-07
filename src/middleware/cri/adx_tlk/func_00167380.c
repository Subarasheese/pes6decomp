/* compiler: ee-gcc-2.96-G0 */
struct Cursor {
    unsigned char pad0[0x60];
    short a;
    unsigned char pad62[0x2];
    int b;
    short c;
    short d;
};

extern char D_003C8E08[];
void func_0015B478(const char *);

void func_00167380(struct Cursor *c) {
    if (c == 0) {
        func_0015B478(D_003C8E08);
        return;
    }
    c->a = 0;
    c->b = 0;
    c->c = 0;
    c->d = 0;
}
