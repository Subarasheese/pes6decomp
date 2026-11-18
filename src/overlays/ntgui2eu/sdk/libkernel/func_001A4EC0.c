/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/intr.c). */

struct syscall_entry {
    int number;
    void *handler;
};

extern struct syscall_entry D_005CBB58[8];
extern unsigned int D_005CB3F0[];
extern unsigned int D_005CBB30[];

#define alarm_syscalls D_005CBB58
#define alarm_handler_code D_005CB3F0
#define alarm_trampoline_code D_005CBB30

#define ALARM_STAT (*(volatile int *)0x10001810)
#define ALARM_HANDLER_ADDR ((void *)0x80076000)
#define ALARM_TRAMPOLINE_ADDR ((void *)0x82000)

void func_001A4E58(int number, void *handler);
void func_001A4E68(void *dst, void *src, int size);
void func_0019B3A0(int mode);
void *func_001A4EB0(int number);int kCopy(unsigned int *dst, unsigned int *src, unsigned int size);

void func_001A4EC0(void)
{
    unsigned int i;

    if (ALARM_STAT & 0x100) {
        return;
    }
    func_001A4E58(alarm_syscalls[0].number, alarm_syscalls[0].handler);
    func_001A4E68(ALARM_HANDLER_ADDR, alarm_handler_code, 0x740);
    func_001A4E68(ALARM_TRAMPOLINE_ADDR, alarm_trampoline_code, 0x28);
    func_0019B3A0(0);
    func_0019B3A0(2);
    func_001A4E58(alarm_syscalls[1].number, alarm_syscalls[1].handler);
    for (i = 2; i < 8; i++) {
        func_001A4E58(alarm_syscalls[i].number, func_001A4EB0(alarm_syscalls[i].number));
    }
}
