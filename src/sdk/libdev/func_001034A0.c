/* compiler: mwcc-3.0.1b210 */
int func_001034A0(int a0, int a1) {
    int v2;
    v2 = *( int *)((char *)a0 + 0x0);
    *( int *)((char *)v2 + 0x0) = a1;
    *( int *)((char *)a0 + 0x0) = (v2) + 4;
    return (v2) + 4;
}
