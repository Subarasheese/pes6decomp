/* compiler: ee-gcc-2.9-G0 */
void DmaWaitChannelIdle(void);

int sceDmaSync(unsigned int *reg, int mode) {
    if (mode == 1) {
        return (*reg >> 8) & 1;
    }
    DmaWaitChannelIdle();
    return 0;
}
