/* compiler: mwcc-3.0.1b210 */
extern char Pes6MatchClock_Remaining[];
int Pes6MatchClock_GetRemaining() {
    int v2;
    v2 = *( int *)(Pes6MatchClock_Remaining);
    return v2;
}
