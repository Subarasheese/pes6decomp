/* compiler: mwcc-3.0.1b151 */
extern char D_0058E7F0[];
void func_00287800(void) {
    unsigned char *entry;
    int index;
    entry = (unsigned char *)D_0058E7F0;
    for (index = 0; index < 22; ++index) {
        entry[0x5C] = 0;
        entry[0x5E] = 0x81;
        entry += 0x240;
    }
}
