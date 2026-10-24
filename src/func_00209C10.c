/* compiler: mwcc-3.0.1b210 */
extern int func_002656B0(int);
extern int func_0021FA50(int);
extern int func_0021F710(int);
int func_00209C10(int context, int value) {
    if (func_002656B0(context) == 1) {
        return func_0021FA50(value & 0xFFFF);
    }
    return func_0021F710(value & 0xFFFF);
}
