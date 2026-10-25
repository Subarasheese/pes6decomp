/* compiler: ee-gcc-2.96-G0 */
struct Player {
    unsigned char pad0[0x49];
    signed char busy;
};

void func_00163740(struct Player *);
void func_00163378(struct Player *);
void func_0015E3A0(void);

void func_00163418(struct Player *p) {
    func_00163740(p);
    func_00163378(p);
    while (p->busy != 0) {
        func_0015E3A0();
    }
}
