/* compiler: mwcc-3.0.1b210 */
extern unsigned int D_0065DE40[][4];

int func_0064EA20(int row, int bit, int word) {
    D_0065DE40[row][word] |= 1U << bit;
    return 0;
}
