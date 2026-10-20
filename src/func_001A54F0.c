/* compiler: mwcc-3.0.1b210 */
extern char D_005205A0[];
extern char D_005205A4[];
extern char D_005205A8[];
void func_001A54F0(int a0) {
    float f0;
    f0 = *( float *)(D_005205A0);
    *( float *)((char *)a0 + 0x0) = f0;
    f0 = *( float *)(D_005205A4);
    *( float *)((char *)a0 + 0x4) = f0;
    f0 = *( float *)(D_005205A8);
    *( float *)((char *)a0 + 0x8) = f0;
}
