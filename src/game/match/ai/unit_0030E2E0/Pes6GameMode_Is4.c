int Pes6GameMode_Is4() {
    unsigned char v2;
    v2 = *( unsigned char *)(0x00591C09);
    return ((unsigned int)((v2) ^ 4)) < 1;
}
