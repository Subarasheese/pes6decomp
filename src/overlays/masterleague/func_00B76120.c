/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_00B76A10(void);
extern void func_00B761C0(int);

int func_00B76120(void) {
    unsigned char *state = func_00B76A10();

    if (!state) {
        return 0;
    }
    if (state[0x79C]) {
        return 0;
    }
    func_00B761C0(1);
    return 0;
}
