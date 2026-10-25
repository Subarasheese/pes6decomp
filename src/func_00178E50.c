/* compiler: ee-gcc-2.96 */
extern int D_00510B00[];
extern int D_00510C00[];
void DTX_CallUrpc(int, void *, int, void *, int);

int func_00178E50(int a, int b) {
    D_00510B00[0] = a;
    D_00510B00[1] = b;
    DTX_CallUrpc(0x29, D_00510B00, 2, D_00510C00, 1);
    return D_00510C00[0];
}
