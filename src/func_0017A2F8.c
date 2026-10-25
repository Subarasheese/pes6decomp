/* compiler: ee-gcc-2.96-G0 */
struct Callback {
    void (*func)(int);
    int arg;
};

extern struct Callback D_00510FC0;

void func_0017A2F8(void) {
    struct Callback *cb = &D_00510FC0;

    if (cb->func != 0) {
        cb->func(cb->arg);
    }
}
