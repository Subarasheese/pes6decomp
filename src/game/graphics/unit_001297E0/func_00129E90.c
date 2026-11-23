/* compiler: mwcc-3.0.1b210 */
extern char Pes6Camera_MatricesDirty[];
extern char D_003FB0FC[];
extern char D_003FB100[];
void func_00129E90(int a0, int a1) {
    *( signed char *)(Pes6Camera_MatricesDirty) = 1;
    *( int *)(D_003FB0FC) = a0;
    *( int *)(D_003FB100) = a1;
}
