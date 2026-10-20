/* compiler: mwcc-3.0.1b210 */
extern char D_005E2170[];
extern char D_005E2178[];
extern char D_005E2174[];
extern char D_005E2132[];
void func_002A8BC0(float f12) {
    unsigned char v4;
    *( float *)(D_005E2170) = f12;
    *( float *)(D_005E2178) = f12;
    *( float *)(D_005E2174) = f12;
    v4 = *( unsigned char *)(D_005E2132);
    *( signed char *)(D_005E2132) = (v4) | 11;
}
