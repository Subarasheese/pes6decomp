/* compiler: mwcc-3.0.1b210 */
extern char Pes6World_Active[];
extern char D_00511614[];
void Pes6World_SetActive(int a0) {
    *( int *)(Pes6World_Active) = a0;
    *( int *)(D_00511614) = a0;
}
