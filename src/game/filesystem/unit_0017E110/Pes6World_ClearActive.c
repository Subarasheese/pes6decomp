/* compiler: mwcc-3.0.1b210 */
extern char D_00511614[];
extern char Pes6World_Active[];
void Pes6World_ClearActive() {
    *( int *)(D_00511614) = 0;
    *( int *)(Pes6World_Active) = 0;
}
