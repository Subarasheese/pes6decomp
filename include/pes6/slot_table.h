#ifndef PES6_SLOT_TABLE_H
#define PES6_SLOT_TABLE_H

/* Partial slot layout: both flag helpers establish the 96-byte stride and
 * byte at 0x51. The remaining fields and flag meanings are not yet named. */
struct Pes6Slot {
    char unknown0[0x51];
    unsigned char flag;
    char unknown52[0x60 - 0x52];
};

/* Linker-provided storage for one table pointer, accessed at element zero.
 * The incomplete array retains absolute rather than small-data addressing. */
#ifdef __cplusplus
extern "C" {
#endif
extern struct Pes6Slot *D_0051FF38[];

void func_00181FE0(int index, int value);
void func_00181F60(int destination, int source);
#ifdef __cplusplus
}
#endif

#endif
