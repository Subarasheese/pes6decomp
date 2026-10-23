/* compiler: mwcc-3.0.1b210 */
extern int D_003E7608;
int func_002D4870(int value) {
    if (value != 2) {
        D_003E7608 = value;
        return 0;
    }
    if (D_003E7608 == 0) {
        D_003E7608 = 1;
        return 1;
    }
    return 0;
}
