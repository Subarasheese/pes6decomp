/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_00B5F200(void);
extern void func_00B5F720(int);

int func_00B5F6D0(void) {
    unsigned char *state = func_00B5F200();

    if (!state) {
        return 0;
    }
    if (state[0x8B0]) {
        return 0;
    }
    func_00B5F720(-1);
    return 0;
}
