/* compiler: mwcc-3.0.1b210 */
extern char Pes6TeamAssets_State[];
void Pes6TeamAssets_Reset() {
    *( int *)(Pes6TeamAssets_State) = 0;
}
