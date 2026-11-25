#ifndef PES6_GAME_FLAGS_H
#define PES6_GAME_FLAGS_H

#include "types.h"

/* Individual bits shared by the game overlay's flag readers and writers. */
typedef struct Pes6GameFlagByte {
    u8 bit0 : 1;
    u8 bit1 : 1;
    u8 bit2 : 1;
    u8 bit3 : 1;
    u8 bit4 : 1;
    u8 bit5 : 1;
    u8 bit6 : 1;
    u8 bit7 : 1;
} Pes6GameFlagByte;

/* Bit 0 is consumed separately from the three-bit value at bits 1 through 3. */
typedef struct Pes6GamePendingValue {
    u8 pending : 1;
    u8 value : 3;
} Pes6GamePendingValue;

extern Pes6GameFlagByte D_00CBBE61[];
extern Pes6GameFlagByte D_00CBBE62[];
extern Pes6GameFlagByte D_00CBBE64[];
extern f32 D_00CBBE68[];
extern s32 D_00CBBE6C[];
extern Pes6GameFlagByte D_00CBBE70[];
extern Pes6GameFlagByte D_00CBBE71[];
extern Pes6GameFlagByte D_00CBBE72[];
extern Pes6GameFlagByte D_00CBBE73[];
extern s32 D_00CBBE74[];
extern Pes6GameFlagByte D_00CBBE78[];
extern Pes6GameFlagByte D_00CBBE7C[];
extern Pes6GameFlagByte D_00CBBE80[];
extern s32 D_00CBBE84[];
extern Pes6GamePendingValue D_00CBBE88[];
extern Pes6GameFlagByte D_00CBBE89[];
extern Pes6GameFlagByte D_00CBBE8A[];
extern Pes6GameFlagByte D_00CBBE8B[];
extern Pes6GameFlagByte D_00CBBE8C[];
extern Pes6GameFlagByte D_00CBBE8D[];
extern Pes6GameFlagByte D_00CBBE90[];
extern s32 D_00CBBE94[];
extern s32 D_00CBBE98[];
extern Pes6GameFlagByte D_00CBBE9C[];
extern s32 D_00CBBEA0[];
extern Pes6GameFlagByte D_00CBBEA4[];
extern Pes6GameFlagByte D_00CBBEAC[];
extern s32 D_00CBBEB4[];
extern Pes6GameFlagByte D_00CBBEB8[];
extern Pes6GameFlagByte D_00CBBEBC[];
extern Pes6GameFlagByte D_00CBBEC0[];
extern s32 D_00CBBEC4[];
extern Pes6GameFlagByte D_00CBBEC8[];
extern Pes6GameFlagByte D_00CBBECC[];
extern s32 D_00CBBED0[];
extern s32 D_00CBBED4[];
extern s16 D_00CBBED8[];
extern s16 D_00CBBEDA[];
extern s8 D_00CBBEDC[];
extern s8 D_00CBBEDD[];
extern Pes6GameFlagByte D_00CBBEE0[];
extern s16 D_00CBBEE2[];
extern s16 D_00CBBEE4[];
extern Pes6GameFlagByte D_00CBBEEC[];
extern s32 D_00CBBEF0[];
extern Pes6GameFlagByte D_00CBBF0C[];
extern Pes6GameFlagByte D_00CBBF0D[];
extern Pes6GameFlagByte D_00CBBF0E[];
extern Pes6GameFlagByte D_00CBBF0F[];
/* Each of the first three bit pairs has one bit per side. */
typedef struct {
    u8 first : 2;
    u8 second : 2;
    u8 present : 2;
    u8 pending : 1;
} Pes6MatchSideEvents;
extern Pes6MatchSideEvents D_00CBBF10[];
extern Pes6GameFlagByte D_00CBBF1D[];
extern Pes6GameFlagByte D_00CBBF21[];
extern Pes6GameFlagByte D_00CBBF24[];

extern Pes6GameFlagByte D_00CCC1C0[];

#endif
