/* compiler: mwcc-3.0.1b210 */
extern unsigned char *func_00B0A9F0(void);
extern void func_00B09B30(int);

int func_00B09A90(void) {
    unsigned char *state = func_00B0A9F0();

    if (!state) {
        return 0;
    }
    if (state[0x5D8]) {
        return 0;
    }
    func_00B09B30(1);
    return 0;
}
