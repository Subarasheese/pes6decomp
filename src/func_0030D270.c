/* compiler: mwcc-3.0.1b151 */
extern char D_005EFF40[];
extern char D_005EFF44[];
int func_0030D270(int unused0, int unused1, int channel) {
    if (channel == 2) {
        (*(unsigned int *)D_005EFF40) |= 0x80;
    } else {
        (*(unsigned int *)D_005EFF44) |= 0x80;
    }
    return 0;
}
