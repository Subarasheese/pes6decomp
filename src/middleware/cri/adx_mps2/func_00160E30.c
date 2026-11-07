/* compiler: ee-gcc-2.96-G0 */
struct Callback {
    void (*func)(int);
    int arg;
};

extern struct Callback D_0050E310;

void func_00160E30(void) {
    struct Callback *cb = &D_0050E310;

    if (cb->func != 0) {
        cb->func(cb->arg);
    }
}
