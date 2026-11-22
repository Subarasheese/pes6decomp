/* compiler: ee-gcc-2.9-G0 */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_002542b8.c. See THIRD_PARTY.md. */
// SPDX-License-Identifier: GPL-3.0-or-later
#include "types.h"
typedef struct { char pad[0x878]; s32 field878; } MpegContext;
u32 func_008F87E0(MpegContext *, int);
u32 func_008F86F8(MpegContext *, int);
void func_008FAA70(MpegContext *, int);
void func_008FABD0(MpegContext *);
void func_008FABD8(MpegContext *);
void func_002540A0(MpegContext *);
void func_00253E68(MpegContext *);
void func_00254678(MpegContext *);
void func_00253FA8(MpegContext *);
void func_00254708(MpegContext *);
void func_00254090(MpegContext *);
void func_002547A0(MpegContext *);
void func_002540B0(MpegContext *);
void func_00254298(MpegContext *);
void func_002542A8(MpegContext *);
typedef struct { void (*handlers[11])(MpegContext *); } MpegHandlerTable;
extern const MpegHandlerTable D_00901FA8;
void func_008FA868(MpegContext *context) {
    MpegHandlerTable table = D_00901FA8;
    u32 code;
    u32 index;
    func_008FABD8(context);
    while (func_008F87E0(context, 0x18) != 1 && context->field878 == 0) {
        func_008FAA70(context, 8);
    }
    while ((code = func_008F87E0(context, 0x20)) == 0x1B5 || code == 0x1B2) {
        if (code == 0x1B5) {
            func_008FABD0(context);
            index = func_008F86F8(context, 4);
            index = index > 10 ? 0 : index;
            table.handlers[index](context);
            func_008FABD8(context);
            while (func_008F87E0(context, 0x18) != 1 && context->field878 == 0) {
                func_008FAA70(context, 8);
            }
        } else {
            func_008FABD0(context);
            func_008FABD8(context);
            while (func_008F87E0(context, 0x18) != 1 && context->field878 == 0) {
                func_008FAA70(context, 8);
            }
        }
    }
}
