int func_001025D0(int a0, int a1) {
    int v2;
    v2 = *( int *)((char *)a0 + 0x0);
    *( int *)((char *)a0 + 0x0) = a1;
    return (((unsigned int)(v2)) >> 8) & 1;
}
