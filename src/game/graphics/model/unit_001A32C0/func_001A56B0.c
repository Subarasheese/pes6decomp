/* compiler: mwcc-3.0.1b210 */
extern char Pes6Camera_Work[];
extern char D_00520574[];
void func_001A56B0(int a0, int a1) {
    float f0;
    f0 = *( float *)(Pes6Camera_Work);
    *( float *)((char *)a0 + 0x0) = f0;
    f0 = *( float *)(D_00520574);
    *( float *)((char *)a1 + 0x0) = f0;
}
