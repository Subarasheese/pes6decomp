/* compiler: ee-gcc-2.96 */
extern unsigned char D_00378BB0[];
extern void adxf_LoadPartition(int, int, int, int, int, int);
void func_0015BDE0(int a, int b, int c, int d, int e, int f) {
    adxf_LoadPartition(a, b, c, d, (unsigned int)D_00378BB0 & ~0x3F, 0x800);
}
