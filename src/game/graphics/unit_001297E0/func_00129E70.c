/* compiler: mwcc-3.0.1b210 */
extern char Pes6Camera_MatricesDirty[];
extern char D_003FB10C[];
void func_00129E70(float f12) {
    *( signed char *)(Pes6Camera_MatricesDirty) = 1;
    *( float *)(D_003FB10C) = f12;
}
