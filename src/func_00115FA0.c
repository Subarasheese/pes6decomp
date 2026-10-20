/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int *D_003F38A8;
extern int *D_003F38AC;
extern int *D_003F38B0;
extern int D_00374658;

void func_00105390(int a);

void func_00115FA0(unsigned int addr) {
    int *p = (int *)(addr | 0x20000000);
    if (D_003F38A8 != 0) {
        *D_003F38A8 = p[0];
    }
    if (D_003F38AC != 0) {
        *D_003F38AC = p[1];
    }
    if (D_003F38B0 != 0) {
        *D_003F38B0 = p[36];
    }
    func_00105390(D_00374658);
}
