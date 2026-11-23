/* compiler: mwcc-3.0.1b210 */
extern char Pes6Camera_MatricesDirty[];
extern char D_003FB104[];
extern char D_003FB108[];
void func_00129DE0(int a0, int a1) {
    *( signed char *)(Pes6Camera_MatricesDirty) = 1;
    *( int *)(D_003FB104) = a0;
    *( int *)(D_003FB108) = a1;
}
