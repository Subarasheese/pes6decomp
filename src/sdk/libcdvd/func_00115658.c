/* compiler: ee-gcc-2.9-G0 */
/* OpenRAC/rac5-sm-decomp, src/boot/sceMcEnd.c (sceMcEnd). The reference name refers to the comparison source.
 * The PAL name remains provisional. See THIRD_PARTY.md. */

extern int D_00374654[];
extern int D_00374658[];
extern int D_0037465C[];
extern int func_00115ED8(int, int *, int *);
extern int func_001051B0(int);
extern int func_00105170(int);
extern int func_00105370(int);
extern int func_00109650(void *, void *);
extern int func_001096E8(void *);
extern int D_003F4E80[];
extern int D_003F4E98[];
int func_00115658(void) {
    if (D_00374654[0] >= 0) {
        func_00115ED8(0, 0, 0);
        if (D_0037465C[0] >= 0) {
            func_001051B0(D_0037465C[0]);
            func_00105170(D_0037465C[0]);
            D_0037465C[0] = -1;
            func_00109650(D_003F4E98, D_003F4E80);
            func_001096E8(D_003F4E80);
        }
        func_00105370(D_00374654[0]);
        D_00374654[0] = -1;
        func_00105370(D_00374658[0]);
    }
    return 1;
}
