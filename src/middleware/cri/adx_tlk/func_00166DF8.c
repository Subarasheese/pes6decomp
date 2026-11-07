/* compiler: ee-gcc-2.96-G0 */
struct Ops;
struct Dev {
    struct Ops *ops;
};
struct Ops {
    unsigned char pad0[0x24];
    int (*size)(struct Dev *, int);
};
struct Handle {
    unsigned char pad0[0x14];
    struct Dev *dev;
};

extern char D_003C8CE0[];
void func_0015B478(const char *);

int func_00166DF8(struct Handle *h) {
    struct Dev *dev;

    if (h == 0) {
        func_0015B478(D_003C8CE0);
        return -1;
    }
    dev = h->dev;
    if (dev != 0) {
        return dev->ops->size(dev, 1) / 2048;
    }
    return 0;
}
