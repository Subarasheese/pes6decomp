/* compiler: ee-gcc-2.96 */
extern int Pes6Ball_Current;
int Pes6Ball_CopyPosition(int destinationAddress) {
    int ballAddress;
    float coordinate;
    ballAddress = Pes6Ball_Current;
    coordinate = *( float *)((char *)ballAddress + 0x10);
    *( float *)((char *)destinationAddress + 0x0) = coordinate;
    ballAddress = Pes6Ball_Current;
    coordinate = *( float *)((char *)ballAddress + 0x14);
    *( float *)((char *)destinationAddress + 0x4) = coordinate;
    ballAddress = Pes6Ball_Current;
    coordinate = *( float *)((char *)ballAddress + 0x18);
    *( float *)((char *)destinationAddress + 0x8) = coordinate;
    return 1;
}
