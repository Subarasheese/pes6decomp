/* compiler: mwcc-3.0.1b151 */
extern char Pes6Input_EventsChannel2[];
extern char Pes6Input_EventsDefault[];
int Pes6Input_PostDpadRight(int unused0, int unused1, int channel) {
    if (channel == 2) {
        (*(unsigned int *)Pes6Input_EventsChannel2) |= 0x20;
    } else {
        (*(unsigned int *)Pes6Input_EventsDefault) |= 0x20;
    }
    return 0;
}
