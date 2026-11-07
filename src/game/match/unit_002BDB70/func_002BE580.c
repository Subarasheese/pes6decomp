/* compiler: mwcc-3.0.1b151 */
extern int func_00C132C0(void);
extern int func_00C132B0(int);
extern unsigned char D_003E9D50;
extern unsigned char *func_00C13280(int);
int func_002BE580(int index) {
    return (func_00C132C0() & 0xFF) == 11
        && D_003E9D50 == (func_00C132B0(index) & 0xFF)
        && (func_00C13280(index)[5] & 0x70) == 0x40;
}
