extern int sceVu0MemReadQ();
int func_00102CD8(int a0, int a1, int a2, int a3) {
    unsigned short buf[8];
    sceVu0MemReadQ(buf, 0x43A, a2, a3);
    return buf[0];
}
