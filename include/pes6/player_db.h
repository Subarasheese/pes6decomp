#ifndef PES6_PLAYER_DB_H
#define PES6_PLAYER_DB_H

#include "types.h"

/* One 124-byte player record of the option data. The layout matches the
 * PC/PS2 option-file format documented by PES Editor 6 and was checked
 * against the loaded data (ages, heights, nationalities of known players).
 * Attribute words are little-endian 16-bit bitfields inside `params`. */
typedef struct Pes6PlayerRecord {
    u16 name[16];       /* 0x00 UTF-16, zero padded; empty for an unused id */
    char shirtName[16]; /* 0x20 ASCII */
    u16 callName;       /* 0x30 commentary name id */
    u16 editFlags;      /* 0x32 bit0 name, bit1 shirt name, bit2 call name edited */
    u8 params[0x48];    /* 0x34 attribute bitfields (nationality/age word at +0x3C) */
} Pes6PlayerRecord;

/* Section pointers of the loaded option data (0x00530C40). Index 5 holds the
 * 5,000 regular players (ids 0..4999), index 6 the 184 edited players (ids
 * 0x8000..0x80B7). Other sections are not identified yet. */
extern void *Pes6OptionData_Sections[24];

#ifdef __cplusplus
extern "C" {
#endif
Pes6PlayerRecord *Pes6OptionData_GetPlayers(void);
Pes6PlayerRecord *Pes6OptionData_GetEditedPlayers(void);
#ifdef __cplusplus
}
#endif

#endif
