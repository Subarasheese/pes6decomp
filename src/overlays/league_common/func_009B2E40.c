/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_009A8D80(void);
extern void func_009B2E90(int);

int func_009B2E40(void) {
    unsigned char *state = func_009A8D80();

    if (!state) {
        return 0;
    }
    if (state[0x772]) {
        return 0;
    }
    func_009B2E90(-1);
    return 0;
}
