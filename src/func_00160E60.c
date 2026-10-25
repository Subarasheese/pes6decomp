/* compiler: ee-gcc-2.96-G0 */
struct Callback {
    void (*func)(int);
    int arg;
};

extern struct Callback D_0050E318;

void func_00160E60(void) {
    struct Callback *cb = &D_0050E318;

    if (cb->func != 0) {
        cb->func(cb->arg);
    }
}
