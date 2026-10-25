/* compiler: ee-gcc-2.96-G0 */
struct Player {
    unsigned char unk0;
    signed char state;
    unsigned char pad2[0x22];
    int pending;
};

void func_001636A8(struct Player *);
void func_0015E3A0(void);

void func_00163770(struct Player *p) {
    func_001636A8(p);
    do {
        do {
            func_0015E3A0();
        } while (p->state != 1);
    } while (p->pending != 0);
}
