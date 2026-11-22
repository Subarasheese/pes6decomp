/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware, SVM_GetExecCount, from crashbashash/DW4_Decomp, src/cri/svm.c. See
 * THIRD_PARTY.md. */

extern int D_00396E18[8];
int func_0017A0B8(int svtype) {
    int ok = ((unsigned int)svtype) < 7;
    int *p = &D_00396E18[svtype];
    if (ok) {
        return *p;
    }
    return 0;
}
