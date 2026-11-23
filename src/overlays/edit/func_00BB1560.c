/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x8];
    s32 model;
    u8 reserved0C[0x5];
    u8 apply;
    u8 reserved12[0x1];
    u8 option;
    u8 selection;
} EditSelection;
extern s32 func_001EDD90(s32);
extern s32 func_002E33D0(s32);
extern s32 func_00B90090(s32, s32);
extern s32 func_00B91390(EditSelection *);
extern s32 func_00BB1620(s32, u8);
extern s32 func_00BB1760(u8, u8);
extern s32 func_00BB1910(s32, u8, u8);
extern s32 func_00BB1CE0(s32, u8);
extern s32 D_00CE4820[];
extern s32 D_00CE4824[];
void func_00BB1560(EditSelection *record) {
    s32 model;
    u8 selection;
    if (func_00B91390(record) != 0) {
        func_002E33D0(D_00CE4820[0]);
        func_001EDD90(D_00CE4824[0]);
    } else {
        model = record->model;
        if (func_00B90090(model, 0x14) != 0) {
            func_00BB1CE0(model, record->selection);
        }
        if (record->apply != 0) {
            func_00BB1910(model, record->selection, record->option);
        }
        selection = record->selection;
        func_00BB1760(selection, record->option);
        func_00BB1620(model, selection);
        return;
    }
}
