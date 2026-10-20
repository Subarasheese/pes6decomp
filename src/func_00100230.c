/* compiler: mwcc-3.0.1b210 */
extern float func_0011EFD0(unsigned long);
float func_00100230(unsigned long a) {
    if ((long)a > 0)
        return func_0011EFD0(a);
    {
        float r = func_0011EFD0((a >> 1) | (a & 1));
        return r + r;
    }
}
