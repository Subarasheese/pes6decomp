/* compiler: ee-gcc-2.96 */
struct Device {
    unsigned char pad0[0x60];
    int (*ioctl)(int, int, int, int);
};

struct Device *func_0016A8B0(void);

int func_0016C2E8(void) {
    struct Device *dev = func_0016A8B0();

    if (dev == 0) {
        return 0;
    }
    if (dev->ioctl != 0) {
        return dev->ioctl(0, 100, 0, 0);
    }
    return 0;
}
