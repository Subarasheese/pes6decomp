/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned long u64;
struct Slot { struct Slot *next; char pad[0x3C]; };
struct Timers {
    u64 f0;
    int f8;
    int pad;
    int f10;
    struct Slot *pool;
};
extern struct Timers D_00372998;
extern struct Slot D_003F0BC0[0x80];
extern void *func_001C48E8(void *, int, unsigned int);
extern int func_00105050(int, void *, int, int);
extern int EnableIntc(int);
extern int DIntr(void);
extern int EIntr(void);
extern void func_0010FD00(int);
extern void func_0010FD10(unsigned);
extern void func_0010FD20(int);
extern int func_00111000(void);
extern int func_001102D0(int);

int func_0010FD30(unsigned int arg0)
{
    int i;
    int id;
    int intr;
    unsigned mode;
    if (D_00372998.f8 >= 0)
        return 0x80008001;
    D_00372998.f0 = 0;
    D_00372998.f10 = 0;
    func_001C48E8(D_003F0BC0, 0, 0x2000);
    D_00372998.pool = D_003F0BC0;
    for (i = 0; i < 0x80; i++)
        D_003F0BC0[i].next = &D_003F0BC0[i + 1];
    D_003F0BC0[0x7F].next = 0;
    func_00111000();
    id = func_00105050(0xB, (void *)func_001102D0, 0, 0);
    if (id < 0)
        return 0x80009021;
    D_00372998.f8 = id;
    intr = DIntr();
    mode = *(volatile unsigned *)0x10001010;
    mode = (mode & 0xFFFFFFFCU) | arg0;
    mode |= 0x300;
    if (!(mode & 0x80)) {
        mode |= 0xC80;
        func_0010FD00(0);
        func_0010FD20(0xFFFF);
    }
    func_0010FD10(mode);
    EnableIntc(0xB);
    if (intr)
        EIntr();
    return 0;
}
