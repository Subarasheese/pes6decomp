/* compiler: mwcc-3.0.1b210 */
/* 16-bit attribute of the alternate player ids (0x7000..0x70FF), read from
 * the section table selected by func_00223960. Other ids are returned as-is. */
#include "types.h"
void *func_00223960(unsigned short id);
unsigned int func_00222D70(unsigned int id) {
    unsigned short pid = id;
    unsigned short table;
    if (pid >= 0x7060 && pid < 0x7080) {
        id = (unsigned short)(id - 0x7060);
        table = 0x126;
    } else if (pid >= 0x7080 && pid < 0x70A0) {
        id = (unsigned short)(id - 0x7080);
        table = 0x127;
    } else if (pid >= 0x7000 && pid < 0x7020) {
        id = (unsigned short)(id - 0x7000);
        table = 0x126;
    } else if (pid >= 0x7020 && pid < 0x7040) {
        id = (unsigned short)(id - 0x7020);
        table = 0x126;
    } else if (pid >= 0x7040 && pid < 0x7060) {
        id = (unsigned short)(id - 0x7040);
        table = 0x127;
    } else {
        return id;
    }
    return ((u16 *)((u8 *)func_00223960(table) + 0x10F4))[id & 0xFFFF];
}
