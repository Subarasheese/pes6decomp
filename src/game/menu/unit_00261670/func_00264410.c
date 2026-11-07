/* compiler: mwcc-3.0.3 */
#include "pes6/m2c.h"

void *func_001C48E8(void *, s32, s32);

void func_00264410(void *object) {
    u32 firstIndex;
    u32 secondIndex;

    func_001C48E8(object, 0, 0x7A4C);
    firstIndex = 0;
    M2C_FIELD(object, s8 *, 0x28) = 8;
    do {
        M2C_FIELD(((u8 *)object + firstIndex), s8 *, 0x29) = 5;
        firstIndex += 1;
    } while (firstIndex < 8U);
    secondIndex = 0;
    do {
        M2C_FIELD(((u8 *)object + secondIndex), s8 *, 0x31) = 5;
        secondIndex += 1;
    } while (secondIndex < 8U);
}
