/* compiler: mwcc-3.0.1b210 */
extern int func_00363C30(void);
extern void func_00363BD0(void);
extern void func_00362BB0(void);
extern void func_00363330(int);
extern int D_003E9D94;
void func_002D5060(void) {
    if (func_00363C30() != 0) {
        func_00363BD0();
        D_003E9D94 = 1;
    } else {
        D_003E9D94 = 0;
    }
    func_00362BB0();
    func_00363330(0);
}
