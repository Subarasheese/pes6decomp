/* compiler: mwcc-3.0.1b210 */
extern char D_003DA840[];
int func_002D48A0(int row, int column) {
    if (row == 0 || row < 0 || row >= 0x60) {
        row = 6;
    }
    return ((int (*)[2])D_003DA840)[row][column];
}
