/* compiler: ee-gcc-2.96-G0 */
struct Stream {
    int unk0;
    void *handle;
    unsigned char pad8[0xA0];
};

void func_00158020(void *);
void func_00159E88(void);
void func_00159EA0(void);
void func_001C48E8(void *, int, int);

void func_001618C8(struct Stream *s) {
    void *handle;

    if (s == 0) {
        return;
    }
    handle = s->handle;
    if (handle != 0) {
        s->handle = 0;
        func_00158020(handle);
    }
    func_00159E88();
    func_001C48E8(s, 0, sizeof(*s));
    func_00159EA0();
}
