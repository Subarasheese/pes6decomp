/* compiler: ee-gcc-2.9-G0 */
extern int D_003B3200;
int DIntr(void);
void EIntr(void);
void func_00105370(int);

int func_002DAFD0(void) {
    int intr = DIntr();
    int sema = D_003B3200;

    D_003B3200 = -1;
    if (intr) {
        EIntr();
    }
    if (sema >= 0) {
        func_00105370(sema);
    }
    return 0;
}
