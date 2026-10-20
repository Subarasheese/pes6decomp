/* compiler: ee-gcc-2.96 */
extern int D_003E7574;
int func_0030EE30(int a0) {
    int v3;
    float f0;
    v3 = D_003E7574;
    f0 = *( float *)((char *)v3 + 0x10);
    *( float *)((char *)a0 + 0x0) = f0;
    v3 = D_003E7574;
    f0 = *( float *)((char *)v3 + 0x14);
    *( float *)((char *)a0 + 0x4) = f0;
    v3 = D_003E7574;
    f0 = *( float *)((char *)v3 + 0x18);
    *( float *)((char *)a0 + 0x8) = f0;
    return 1;
}
