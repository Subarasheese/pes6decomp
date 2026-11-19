/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_00B526C0(void);
extern void func_00B4ED70(int);

int func_00B4ECD0(void) {
    unsigned char *state = func_00B526C0();

    if (!state) {
        return 0;
    }
    if (state[0xD10]) {
        return 0;
    }
    func_00B4ED70(1);
    return 0;
}
