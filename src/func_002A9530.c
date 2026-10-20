/* compiler: mwcc-3.0.1b210 */
extern char D_005E2250[];
extern char D_005E2254[];
extern char D_005E2258[];
void func_002A9530(int a0) {
    float f0;
    f0 = *( float *)(D_005E2250);
    *( float *)((char *)a0 + 0x0) = f0;
    f0 = *( float *)(D_005E2254);
    *( float *)((char *)a0 + 0x4) = f0;
    f0 = *( float *)(D_005E2258);
    *( float *)((char *)a0 + 0x8) = f0;
}
