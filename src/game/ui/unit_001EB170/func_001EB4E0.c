/* compiler: mwcc-3.0.1b210 */
extern char D_0052B160[];
extern char D_0052B164[];
void func_001EB4E0(int a0) {
    float f0;
    f0 = *( float *)(D_0052B160);
    *( float *)((char *)a0 + 0x0) = f0;
    f0 = *( float *)(D_0052B164);
    *( float *)((char *)a0 + 0x4) = f0;
}
