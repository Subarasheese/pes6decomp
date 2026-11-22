/* compiler: mwcc-3.0.1b210 */
extern char Pes6World_Active[];
int Pes6World_IsActive() {
    int v2;
    v2 = *( int *)(Pes6World_Active);
    return v2;
}
