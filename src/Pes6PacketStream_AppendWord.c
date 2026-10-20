/* compiler: mwcc-3.0.1b210 */
/* Append one 32-bit word and return the advanced cursor's address. */
int Pes6PacketStream_AppendWord(int streamAddress, int value) {
    int writeAddress;
    writeAddress = *( int *)((char *)streamAddress + 0x0);
    *( int *)((char *)writeAddress + 0x0) = value;
    *( int *)((char *)streamAddress + 0x0) = (writeAddress) + 4;
    return (writeAddress) + 4;
}
