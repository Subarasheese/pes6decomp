/* compiler: mwcc-3.0.1b210 */
extern char D_003DAB50[];
extern void func_0020B730(int, int, float *);
void func_002D5650(int row, int column, int value, float *output) {
    float values[4];
    func_0020B730(((int (*)[2])D_003DAB50)[row][column], value, values);
    if (output != 0) {
        output[0] = values[2];
        output[1] = values[3];
    }
}
