int func_00158800(int a0, int a1, int a2, int a3) {
    unsigned short v2;
    unsigned short v3;
    v2 = *( unsigned short *)((char *)a0 + 0xa0);
    *( short *)((char *)a1 + 0x0) = v2;
    v3 = *( unsigned short *)((char *)a0 + 0xa2);
    *( short *)((char *)a2 + 0x0) = v3;
    v2 = *( unsigned short *)((char *)a0 + 0xa4);
    *( short *)((char *)a3 + 0x0) = v2;
    return v2;
}
