/* compiler: ee-gcc-2.96 */
extern int func_001795B0(int, int, int, int);
extern int func_00179A70(int, int, int, int);
extern int func_001795C8(void);
int func_00179A08(int a, int b, int c, int d) {
    int r;
    func_001795B0(a, b, c, d);
    r = func_00179A70(a, b, c, d);
    func_001795C8();
    return r;
}
