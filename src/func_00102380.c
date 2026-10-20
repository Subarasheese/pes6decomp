extern int func_00101DA0();
int func_00102380(int a0, int a1, int a2, int a3) {
    int p;
    int v2;
    p = a0;
    func_00101DA0(a0, a1, a2, a3);
    v2 = *( int *)((char *)(p) + 0x0);
    *( int *)((char *)(p) + 0x20) = 0;
    *( int *)((char *)(p) + 0x0) = ((((v2) & (-0xD)) | 4) & (-0x2)) | 256;
    return ((((v2) & (-0xD)) | 4) & (-0x2)) | 256;
}
