/* compiler: mwcc-3.0.1b210 */
extern unsigned int D_008FA1C0[][4];

int func_008F7F40(int row, int bit, int word) {
    D_008FA1C0[row][word] |= 1U << bit;
    return 0;
}
