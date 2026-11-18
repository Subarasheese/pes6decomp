/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_00B5B230(void);
extern void func_00B5C2D0(int);

int func_00B5C230(void) {
    unsigned char *state = func_00B5B230();

    if (!state) {
        return 0;
    }
    if (state[0x62A]) {
        return 0;
    }
    func_00B5C2D0(1);
    return 0;
}
