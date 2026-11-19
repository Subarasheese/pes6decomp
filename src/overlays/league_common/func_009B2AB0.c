/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_009A8D80(void);
extern void func_009B2B00(int);

int func_009B2AB0(void) {
    unsigned char *state = func_009A8D80();

    if (!state) {
        return 0;
    }
    if (state[0x772]) {
        return 0;
    }
    func_009B2B00(-1);
    return 0;
}
