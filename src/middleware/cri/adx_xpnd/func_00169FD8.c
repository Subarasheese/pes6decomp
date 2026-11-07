int func_00169FD8(int a0, int a1, int a2) {
    unsigned short v3;
    unsigned short v2;
    v3 = *( unsigned short *)((char *)a0 + 0x28);
    *( short *)((char *)a1 + 0x0) = v3;
    v2 = *( unsigned short *)((char *)a0 + 0x2a);
    *( short *)((char *)a2 + 0x0) = v2;
    v3 = *( unsigned short *)((char *)a0 + 0x2c);
    *( short *)((char *)a1 + 0x2) = v3;
    v2 = *( unsigned short *)((char *)a0 + 0x2e);
    *( short *)((char *)a2 + 0x2) = v2;
    return v2;
}
