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
extern struct Timers D_005CBB98;
extern struct Slot D_01204FC0[0x80];
extern void *func_001AE7D8(void *, int, unsigned int);
extern int func_0019AE10(int, void *, int, int);
extern int func_0019BC68(int);
extern int func_001A4728(void);
extern int func_001A4778(void);
extern void func_001A5008(int);
extern void func_001A5018(unsigned);
extern void func_001A5028(int);
extern int func_001A6308(void);
extern int func_001A55D8(int);

int func_001A5038(unsigned int arg0)
{
    int i;
    int id;
    int intr;
    unsigned mode;
    if (D_005CBB98.f8 >= 0)
        return 0x80008001;
    D_005CBB98.f0 = 0;
    D_005CBB98.f10 = 0;
    func_001AE7D8(D_01204FC0, 0, 0x2000);
    D_005CBB98.pool = D_01204FC0;
    for (i = 0; i < 0x80; i++)
        D_01204FC0[i].next = &D_01204FC0[i + 1];
    D_01204FC0[0x7F].next = 0;
    func_001A6308();
    id = func_0019AE10(0xB, (void *)func_001A55D8, 0, 0);
    if (id < 0)
        return 0x80009021;
    D_005CBB98.f8 = id;
    intr = func_001A4728();
    mode = *(volatile unsigned *)0x10001010;
    mode = (mode & 0xFFFFFFFCU) | arg0;
    mode |= 0x300;
    if (!(mode & 0x80)) {
        mode |= 0xC80;
        func_001A5008(0);
        func_001A5028(0xFFFF);
    }
    func_001A5018(mode);
    func_0019BC68(0xB);
    if (intr)
        func_001A4778();
    return 0;
}
