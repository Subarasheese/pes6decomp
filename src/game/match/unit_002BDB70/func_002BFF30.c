/* compiler: mwcc-3.0.1b151 */
extern int func_00C132C0(void);
extern int func_00C132B0(int);
extern unsigned char D_003E9D50;
int func_002BFF30(int index) {
    return (func_00C132C0() & 0xFF) == 10
        && D_003E9D50 == (func_00C132B0(index) & 0xFF);
}
