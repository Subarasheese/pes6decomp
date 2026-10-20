/* compiler: mwcc-3.0.1b210 */
extern char D_00520590[];
extern char D_00520594[];
extern char D_00520598[];
void func_001A55C0(int a0) {
    float f0;
    f0 = *( float *)(D_00520590);
    *( float *)((char *)a0 + 0x0) = f0;
    f0 = *( float *)(D_00520594);
    *( float *)((char *)a0 + 0x4) = f0;
    f0 = *( float *)(D_00520598);
    *( float *)((char *)a0 + 0x8) = f0;
}
