/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_001D78E0(void *arg0, void *arg1) {
    s32 value;

    s32 *entry;
    s32 value2;
    u8 value3;
    s32 value4;
    s8 *entry2;
    s32 *entry3;
    s8 *entry4;
    s8 *entry5;
    u8 value5;
    s32 value6;
    u8 value7;

    u8 value8;
    s8 *entry6;
    u8 *entry7;
    s8 *entry8;
    u8 value9;
    if ((arg0 != 0) && (arg1 != 0)) {
        value5 = *((u8 *)(((s8 *)arg1) + 0));
        if (value5 == 0xFF) {
            value = 0x80;
        } else {
            value = (s32)value5;
            value >>= 1;
        }
        entry8 = (s8 *)arg0;
        ;
        *((s8 *)(((s8 *)arg0) + 0x54)) = (s8)value;
        entry7 = &(*((u8 *)(((s8 *)arg1) + 1)));
        value7 = (value2 = *entry7);
        if (0xFF == value7) {
            value2 = 0x80;
        } else {
            value2 = (s32)value7;
            value2 = value2 >> 1;
        }
        *((s8 *)(((s8 *)arg0) + 0x55)) = (s8)value2;
        entry5 = (s8 *)arg1;
        value8 = (value5 = *((u8 *)(entry5 + 2)));
        if (value8 == 0xFF) {
            value6 = 0x80;
        } else {
            value6 = (s32)value8;
            value6 >>= 1;
        }
        *((s8 *)(entry8 + 0x56)) = (s8)value6;
        value3 = *((u8 *)(entry5 + 3));
        ;
        if (value3 == 0xFF) {
            value4 = 0x80;
        } else {
            value9 = value3;
            value4 = (s32)value9;
            value4 >>= 1;
        }
        entry2 = ((s8 *)arg0) + 0x57;
        entry6 = (entry4 = (s8 *)arg0);
        entry3 = (s32 *)(entry6 + 0x58);
        *((s8 *)entry2) = (s8)(*(entry = &value4));
        *entry3 = 0x3F800000;
    }
}
