/* Reserve wordCount 32-bit words and return their starting address.
 * The original integer-address interface is retained. This advances the
 * cursor only; it neither allocates nor initializes storage. */
int Pes6PacketStream_ReserveWords(int streamAddress, int wordCount) {
    int reservedAddress = *( int *)((char *)streamAddress + 0x0);
    *( int *)((char *)streamAddress + 0x0) = (reservedAddress) + ((wordCount) << 2);
    return reservedAddress;
}
