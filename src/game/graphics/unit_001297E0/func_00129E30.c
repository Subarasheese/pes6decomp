/* compiler: mwcc-3.0.1b210 */
extern char Pes6Camera_MatricesDirty[];
extern char D_003FB11C[];
extern char D_003FB120[];
void func_00129E30(int a0, int a1) {
    *( signed char *)(Pes6Camera_MatricesDirty) = 1;
    *( int *)(D_003FB11C) = a0;
    *( int *)(D_003FB120) = a1;
}
