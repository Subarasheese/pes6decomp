int func_00108148(int a0, int a1) {
    int v2;
    int v6;
    int v3;
    v2 = *( int *)((char *)a0 + 0x10);
    v6 = *( int *)((char *)a1 + 0x1c);
    v3 = *( int *)((char *)a0 + 0x14);
    *( int *)((char *)((v2) << 2) + (v6) + 0x0) = v3;
    return ((v2) << 2) + (v6);
}
