/* compiler: mwcc-3.0.1b151 */
extern char D_00591BE0[];
extern void func_0027CE20(int);
void func_0027CF30(int value) {
    int mapped;
    *(int *)D_00591BE0 = value;
    mapped = 1;
    if (value != 1) {
        mapped = 0;
    }
    func_0027CE20(mapped);
}
