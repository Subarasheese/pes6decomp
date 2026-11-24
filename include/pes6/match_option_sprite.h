#ifndef PES6_MATCH_OPTION_SPRITE_H
#define PES6_MATCH_OPTION_SPRITE_H

#include "types.h"

extern s32 D_0053C320[];
extern s32 func_003655D0(s32 kind), func_00365340(s32 kind, s32 parent, s32 part);
extern void func_008B31A0(s32 sprite, s32 visible), func_008B3280(s32 sprite, f32 *position),
    func_008B3290(s32 sprite, f32 *position);
extern void func_008B3210(s32 parent, u16 part, s32 sprite),
    func_008B32B0(s32 parent, f32 *position, u16 part);
typedef struct {
    u8 reserved[12];
    s32 text;
} WidgetText;
extern f32 func_001E4E30(s32 text);

#endif
