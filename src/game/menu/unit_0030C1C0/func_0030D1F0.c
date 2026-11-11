/* compiler: mwcc-3.0.1b151 */
extern char Pes6Input_EventsChannel2[];
extern char Pes6Input_EventsDefault[];
int func_0030D1F0(int unused0, int unused1, int channel) {
    if (channel == 2) {
        (*(unsigned int *)Pes6Input_EventsChannel2) |= 0x90;
    } else {
        (*(unsigned int *)Pes6Input_EventsDefault) |= 0x90;
    }
    return 0;
}
