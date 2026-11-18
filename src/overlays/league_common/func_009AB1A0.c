/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_009AB630(void);
extern void func_009AB240(int);

int func_009AB1A0(void) {
    unsigned char *state = func_009AB630();

    if (!state) {
        return 0;
    }
    if (state[0x5B2]) {
        return 0;
    }
    func_009AB240(1);
    return 0;
}
