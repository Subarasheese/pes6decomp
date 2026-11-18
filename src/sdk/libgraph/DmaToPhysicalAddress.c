/* compiler: ee-gcc-2.9-G0 */
unsigned int DmaToPhysicalAddress(unsigned int addr) {
    if ((addr >> 28) == 7) {
        addr &= 0x0FFFFFFF;
        addr |= 0x80000000;
    }
    return addr;
}
