/* compiler: mwcc-3.0.1b151 */
extern int func_00C18720(void);
int func_002BE430(void) {
    int value = func_00C18720() & 0xFF;
    return ((value & 0x7F) / 15 - ((value >> 7) != 0)) & 0xFF;
}
