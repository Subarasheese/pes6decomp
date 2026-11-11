/* compiler: mwcc-3.0.1b151 */
extern char Pes6Input_EventsChannel2[];
extern char Pes6Input_EventsDefault[];
int Pes6Input_PostDpadLeft(int unused0, int unused1, int channel) {
    if (channel == 2) {
        (*(unsigned int *)Pes6Input_EventsChannel2) |= 0x80;
    } else {
        (*(unsigned int *)Pes6Input_EventsDefault) |= 0x80;
    }
    return 0;
}
