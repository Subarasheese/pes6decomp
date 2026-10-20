/* compiler: mwcc-3.0.1b210 */
extern char D_00591E58[];
extern char D_00591E5C[];
extern char D_00591E60[];
int func_0030EE80(int a0) {
    float f0;
    f0 = *( float *)(D_00591E58);
    *( float *)((char *)a0 + 0x0) = f0;
    f0 = *( float *)(D_00591E5C);
    *( float *)((char *)a0 + 0x4) = f0;
    f0 = *( float *)(D_00591E60);
    *( float *)((char *)a0 + 0x8) = f0;
    return 1;
}
