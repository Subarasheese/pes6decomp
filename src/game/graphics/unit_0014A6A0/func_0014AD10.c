/* compiler: mwcc-3.0.1b151 */
extern void func_0014AD60(void);
extern void open(int, int);

int func_0014AD10(int unused0, int base, int unused2, const int *length) {
    func_0014AD60();
    open(base, base + *length);
    return base;
}
