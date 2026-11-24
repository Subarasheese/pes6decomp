/* compiler: mwcc-3.0.1b210-sdata4-merged-sections */
#include "pes6/match_setup_resources.h"

extern s32 D_003E9AB0;
extern s32 D_003E9AB4;
extern s32 D_003E9AB8;
extern s32 D_003D8B30[];
extern s32 D_00961790[];
extern s32 D_003A9F70[];
extern s32 func_001CDA50(s32);
extern s32 func_00934400(void);
extern void func_002CA910(s32, s32);
extern void func_001DA550(s32, s32 *);
extern void Pes6HeapZone_Close(s32);
extern void Pes6HeapZone_Open(s32);
extern void func_00934710(s32);
extern void func_009345B0(s32, s32, s32, s32 *);
extern void func_008B3130(s32, s32, s32);
extern void func_001D4F40(void *);

s32 func_00240EC0(void) {
    s32 mainGroup[2] = {12, 23};
    s32 fallbackGroup[2] = {12, 11};
    s32 requests[2];
    const s32 *id;
    if (D_003E9AB4)
        return 1;
    switch (D_003E9AB8) {
    case 0:
        func_002CA910(2, 10);
        func_002CA910(1, 10);
        requests[0] = 10;
        requests[1] = 0;
        for (id = D_003D8B30;; id++) {
            s32 resource = *id;
            if (resource == -1)
                break;
            requests[1] = 10;
            func_001DA550(resource, requests);
        }
        if (!D_003E9AB0) {
            Pes6HeapZone_Close(5);
            Pes6HeapZone_Open(5);
            func_009345B0(5, 1, 1, mainGroup);
            func_00934710(0);
            func_009345B0(0, func_0021E000(0x158), 1, mainGroup);
            func_009345B0(0, func_0021E000(0x151), 1, mainGroup);
            func_009345B0(0, func_0021E000(0x152), 1, mainGroup);
            func_009345B0(2, D_003A9F70[func_001CDA50(1)], 1, mainGroup);
            func_009345B0(3, 0x1003c, 1, mainGroup);
            func_009345B0(3, 0x10344, 1, mainGroup);
            func_009345B0(3, 0x10385, 1, mainGroup);
            func_009345B0(6, func_0021DF90(0x14), 1, mainGroup);
        }
        D_003E9AB8++;
        break;
    case 1:
        if (func_00934400() == 1) {
            func_008B3130(0x152, 0x4fd5, 10);
            func_008B3130(0x152, 0x4fd8, 10);
            func_008B3130(0x152, 0x4fd6, 9);
            func_008B3130(0x152, 0x4fd7, 9);
            func_008B3130(0x152, 0x4fd9, 9);
            func_008B3130(0x152, 0x4fda, 9);
            func_008B3130(0x152, 0x4fdb, 9);
            func_008B3130(0x152, 0x4fdc, 23);
            func_008B3130(0x152, 0x4fdd, 10);
            func_008B3130(0x158, 0x4e2f, 10);
            func_008B3130(0x158, 0x4e30, 10);
            D_003E9AB8++;
        }
        break;
    case 2:
        func_001D4F40(func_001D5A10(0x10385));
        func_009345B0(0, func_0021E000(0x156), 1, mainGroup);
        func_009345B0(0, func_0021E000(0x14e), 1, mainGroup);
        func_009345B0(0, func_0021E000(0x157), 1, mainGroup);
        func_009345B0(0, func_0021E000(0x153), 1, fallbackGroup);
        func_009345B0(3, 0x10387, 1, mainGroup);
        func_009345B0(0, func_0021E000(0x155), 1, mainGroup);
        func_009345B0(3, 0x10390, 1, mainGroup);
        func_009345B0(3, 0x10386, 1, mainGroup);
        for (id = D_00961790;; id++) {
            s32 resource = *id;
            if (resource == -1)
                break;
            func_009345B0(3, resource, 1, mainGroup);
        }
        func_009345B0(7, 0x23, 0, 0);
        D_003E9AB8 = 0;
        D_003E9AB4 = 1;
        return 1;
    }
    return 0;
}
