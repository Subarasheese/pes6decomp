/* compiler: mwcc-3.0.1b210 */
#include "types.h"
#include "pes6/bitset.h"
typedef struct {
    u8 reserved[0x1000];
    u8 lastSelection;
} EntryJobManager;
extern EntryJobManager *Pes6Job_GetManager(void);
extern void func_003414D0(u8 *selection, s32 mode, s32 fallback);
extern s32 func_008F8B50(u8 *selection, s32 *status, s32 kind);
extern void func_00311A50(u8 *group, u8 *slot, s32 selection);
extern void func_00326AC0(s32 *status, s32 side, s32 kind, s32 slot);
extern void func_00326A10(s32 *status, s32 side, s32 kind, s32 slot);
extern void func_00326960(u8 *option, s32 side, s32 kind, s32 slot);
extern void func_0030DA20(s8 *category, s32 option);
extern s32 func_00311390(u8 selection);
s32 func_008F8CD0(struct Pes6BitSet *flags, s32 side, s32 option) {
    u8 selection, kind, group, slot;
    s8 category;
    u8 selectedOption;
    s32 status, first, second, available, enabled;
    func_003414D0(&kind, 2, 255);
    available = func_008F8B50(&selection, &status, kind);
    if (available)
        Pes6Job_GetManager()->lastSelection = selection;
    if (available) {
        func_00311A50(&group, &slot, selection);
        func_00326AC0(&first, side, kind, slot);
        func_00326A10(&second, side, kind, slot);
        func_00326960(&selectedOption, side, kind, slot);
        func_0030DA20(&category, selectedOption);
        Pes6BitSet_Write(flags, 0x33, available && func_00311390(selection));
        Pes6BitSet_Write(flags, 0x34, selection != 255);
        Pes6BitSet_Write(flags, 0x35, second == 2 && first == 2);
        Pes6BitSet_Write(flags, 0x36, (u8)category == 3);
        Pes6BitSet_Write(flags, 0x37, (u8)category == 2);
        Pes6BitSet_Write(flags, 0x38, (u8)category == 1);
        Pes6BitSet_Write(flags, 0x3b, status == 2);
        Pes6BitSet_Write(flags, 0x3c, status == 3);
        Pes6BitSet_Write(flags, 0x41, status == 2);
        Pes6BitSet_Write(flags, 0x42, status == 3);
        enabled = !option;
        Pes6BitSet_Write(flags, 0x43, enabled);
        Pes6BitSet_Write(flags, 0x44, enabled);
        Pes6BitSet_Write(flags, 0x45, enabled);
    }
    return 1;
}
