/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_00B14800(void);
extern void func_00B13040(int);

int func_00B12FA0(void) {
    unsigned char *state = func_00B14800();

    if (!state) {
        return 0;
    }
    if (state[0xBD0]) {
        return 0;
    }
    func_00B13040(1);
    return 0;
}
