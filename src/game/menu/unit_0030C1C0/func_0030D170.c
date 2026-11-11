/* compiler: mwcc-3.0.1b151 */
extern char Pes6Input_EventsChannel2[];
extern char Pes6Input_EventsDefault[];
int func_0030D170(int unused0, int unused1, int channel) {
    if (channel == 2) {
        (*(unsigned int *)Pes6Input_EventsChannel2) |= 0xc0;
    } else {
        (*(unsigned int *)Pes6Input_EventsDefault) |= 0xc0;
    }
    return 0;
}
