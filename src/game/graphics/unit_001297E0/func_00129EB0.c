/* compiler: mwcc-3.0.1b210 */
extern char D_003FB0F0[];
extern char Pes6Camera_MatricesDirty[];
extern char D_003FB404[];
void func_00129EB0(float f12) {
    *( float *)(D_003FB0F0) = f12;
    *( signed char *)(Pes6Camera_MatricesDirty) = 1;
    *( signed char *)(D_003FB404) = 0;
}
