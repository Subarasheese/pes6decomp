/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_option_slots.h"

extern s32 Pes6SaveData_GetUnavailableFlag(void), func_008223F0(void), func_00245400(void),
    func_002DEC40(s32 (*callback)(void));
extern s32 D_003E9ACC;
extern void func_008B98A0(void), func_008B9C60(void), func_008B89E0(void), func_0023F510(s32),
    func_001B6410(f32), func_001B62F0(f32);
static inline void readMatchOptionSlots(u8 *dest, s32 stride) {
    s32 slot;
    for (slot = 0; slot < MATCH_OPTION_SLOTS; slot++)
        func_001C4730(dest + slot * stride, func_00245190(slot), sizeof(MatchOptionPreset));
}

void func_00245C80(void) {
    func_008B98A0();
    func_008B9C60();
    if (Pes6SaveData_GetUnavailableFlag())
        readMatchOptionSlots((u8 *)D_00591970, sizeof(MatchOptionPreset));
    readMatchOptionSlots((u8 *)D_0053C590, sizeof(MatchOptionSlot));
    func_008B89E0();
    if (Pes6SaveData_GetUnavailableFlag()) {
        D_003E9ACC = func_002DEC40(func_00245400);
        if (!func_008223F0())
            func_0023F510(6);
        func_001B6410(2500.0f);
        func_001B62F0(-340.0f);
    } else
        func_0023F510(6);
}
