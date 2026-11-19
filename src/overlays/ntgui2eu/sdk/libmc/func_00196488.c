/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int *D_011FD7E8;
extern int *D_011FD7EC;
extern int *D_011FD7F0;
extern int D_005CAA38;

void func_0019B150(int a);

void func_00196488(unsigned int addr) {
    int *p = (int *)(addr | 0x20000000);
    if (D_011FD7E8 != 0) {
        *D_011FD7E8 = p[0];
    }
    if (D_011FD7EC != 0) {
        *D_011FD7EC = p[1];
    }
    if (D_011FD7F0 != 0) {
        *D_011FD7F0 = p[36];
    }
    func_0019B150(D_005CAA38);
}
