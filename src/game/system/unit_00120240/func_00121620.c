/* compiler: mwcc-2.4 */
int func_00121620(int a0) {
    int v2;
    v2 = *( int *)((char *)a0 + 0x0);
    *( int *)((char *)a0 + 0x0) = (v2) ^ 1;
    v2 = *( int *)((char *)a0 + 0x0);
    v2 = *( int *)((char *)((v2) << 2) + (a0) + 0x8);
    *( int *)((char *)a0 + 0x4) = v2;
    v2 = *( int *)((char *)a0 + 0x4);
    return v2;
}
