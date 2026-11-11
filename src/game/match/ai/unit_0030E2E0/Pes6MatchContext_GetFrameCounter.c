/* compiler: mwcc-3.0.1b210 */
extern char Pes6MatchContext_FrameCounter[];
int Pes6MatchContext_GetFrameCounter(int a0) {
    int v3;
    v3 = *( int *)(Pes6MatchContext_FrameCounter);
    *( int *)((char *)a0 + 0x0) = v3;
    return 1;
}
