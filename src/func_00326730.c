/* compiler: mwcc-3.0.1b210 */
int func_00326730(int a0, int a1, int a2, int a3) {
    int v3;
    v3 = *( unsigned char *)((char *)(a2) + ((((a3) << 4) - (a3)) << 2) + 0x5c);
    *( signed char *)((char *)a0 + 0x0) = v3;
    v3 = *( int *)((char *)(a2) + ((((a3) << 4) - (a3)) << 2) + 0x60);
    *( int *)((char *)a1 + 0x0) = v3;
    return 1;
}
