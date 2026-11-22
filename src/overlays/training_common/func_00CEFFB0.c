/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern void func_001B7A90(void);
extern s32 func_002646D0(s32);
extern s32 func_002646E0(s32);
extern void func_00264790(void *, u8);
extern s32 func_002E9310(void);
extern void func_00CDCE60(void);
extern void func_00CDCE90(void);
extern void func_00CDCEE0(void);
extern s32 func_00CDEEE0(s32);
extern void func_00CE44F0(void *);
extern s32 func_00CE4540(s32);
extern void func_00CE5C00(void);
extern void func_00CE6230(void);
extern void func_00CE62D0(void);
extern void func_00CE6370(void);
extern void func_00CE70E0(void);
extern void func_00CE9B20(void);
extern s32 func_00CE9F00(s32, s32, s32);
extern void func_00CEA170(void);
extern void func_00CEABD0(void);
extern void func_00CEAC70(void);
extern void func_00CEAC80(void);
extern s32 func_00CEAC90(void);
extern s32 func_00CEAD70(void);
extern s32 func_00CEAD80(void);
extern void func_00CECC60(void);
extern void func_00CECCB0(s32, s32);
extern s32 func_00CED270(void);

extern void *D_003E7E1C;
extern char D_00CF9FC0[];

s32 func_00CEFFB0(s32 arg0) {
    void *entry;
    s32 *entry2;
    s32 value;
    value = func_002646D0(arg0);
    value = value & 0xFF;
    switch (value) {
    case 0:
        func_00CEAC80();
        func_00CECC60();
        func_00CDCEE0();
        func_00CDCE90();
        func_00CE70E0();
        func_00CE62D0();
        func_00CE9F00(1, 0, 0);
        func_00CE9F00(1, 1, 0);
        func_00CE9F00(1, 2, 0);
        func_00CE9F00(1, 3, 0);
        func_00CE9F00(1, 8, 0);
        func_00CE9F00(1, 9, 0);
        func_00CE9F00(1, 0xF, 0);
        func_002646E0(arg0);
        break;

    case 1:
        if (func_00CED270() != 0) {
            entry2 = (s32 *)(((s8 *)D_003E7E1C) + 0);
            *entry2 = 0;
            func_002646E0(arg0);
        }

    case 2:
        if (func_00CEAD80() != 0) {
            func_00CE62D0();
            func_00CECCB0((s32)((void *)D_00CF9FC0), 2);
        } else {
            func_00CECCB0((s32)(entry = (void *)D_00CF9FC0), 3);
            func_00CE6230();
        }
        func_00CDCE90();
        if (func_00CEAD70() != 0) {
            func_002646E0(arg0);
        }
        break;

    case 3:
        if ((func_00CEAC90() != 0) && (func_00CEAD70() == 2)) {
            func_00CE6370();
            func_00CEABD0();
            value = func_00CDEEE0(arg0);
            if (value != 0) {
                if (func_002E9310() == 5) {
                    func_002646E0(arg0);
                } else {
                    func_00264790((void *)arg0, 0U);
                    *((s32 *)(((s8 *)D_003E7E1C) + 0x14C)) = 0;
                    func_00CE5C00();
                    func_00CDCE60();
                    func_00CEAC70();
                }
            }
        } else {
            func_002646E0(arg0);
        }
        break;

    case 4:
        func_00CDCE60();
        func_00CE9B20();
        func_001B7A90();
        func_00CE5C00();
        if (func_00CEAD70() == 2) {
            func_00CEA170();
            func_00CE4540(arg0);
        } else {
            func_00CE44F0((void *)arg0);
            *((s32 *)(((s8 *)D_003E7E1C) + 0x14C)) = 0;
            func_00CEAC70();
        }
        break;
    }

    return 0;
}
