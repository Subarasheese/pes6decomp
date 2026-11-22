/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_db.h"

extern void *func_00220540(void *section, u32 index);

u8 *func_002203D0(u8 *record) {
    u8 *result = record;
    if (record == 0) {
        result = Pes6OptionData_Sections[21];
    } else {
        func_00220540(record + 0xC, 0);
        func_00220540(record + 0x500, 2);
        func_00220540(record + 0x113C, 3);
        func_00220540(record + 0x1A32, 4);
        func_00220540(record + 0x7CF0, 5);
        func_00220540(record + 0x23C4, 6);
        func_00220540(record + 0x9F618, 7);
        func_00220540(record + 0x9FCA7, 8);
        func_00220540(record + 0xA0F28, 9);
        func_00220540(record + 0xA1C46, 10);
        func_00220540(record + 0xB9390, 11);
        func_00220540(record + 0xBEB90, 12);
        func_00220540(record + 0xD1510, 13);
        func_00220540(record + 0xB6364, 14);
        func_00220540(record + 0xDD31C, 17);
        func_00220540(record + 0xA4146, 18);
        func_00220540(record + 0x3FC, 19);
        func_00220540(record + 0x9F2D0, 22);
        func_00220540(record, 23);
    }
    return result;
}
