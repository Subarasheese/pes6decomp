int func_002C7130(int a0, int a1) {
    unsigned char v2 = *( unsigned char *)((char *)a0 + 0x5);
    int v3 = *( int *)((char *)a1 + 0x0);
    *( int *)((char *)a1 + 0x0) = (v3) + 100;
    return ((v2) & 127) + 1;
}
