/* compiler: mwcc-3.0.1b210 */
extern char Pes6FrameTimer_ElapsedFrames[];
int Pes6FrameTimer_GetElapsedFrames() {
    int v2;
    v2 = *( int *)(Pes6FrameTimer_ElapsedFrames);
    return v2;
}
