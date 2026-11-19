/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_00B695D0(void);
extern void func_00B6A590(int);

int func_00B6A4F0(void) {
    unsigned char *state = func_00B695D0();

    if (!state) {
        return 0;
    }
    if (state[0x4]) {
        return 0;
    }
    func_00B6A590(1);
    return 0;
}
