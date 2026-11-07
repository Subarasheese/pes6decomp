/* compiler: ee-gcc-2.96 */
int func_00157EA8(int a0, int a1, int a2) {
    int v2;
    int v3;
    v2 = *( int *)((char *)a0 + 0x8c);
    v3 = *( int *)((char *)a0 + 0x88);
    *( int *)((char *)a0 + 0x8c) = (v2) + (a2);
    *( int *)((char *)a0 + 0x88) = (v3) + (a2);
    return (v2) + (a2);
}
