#ifndef PES6_MATCH_SUBSTITUTION_H
#define PES6_MATCH_SUBSTITUTION_H

#include "types.h"

typedef struct {
    u8 side, outgoingActor, outgoingSlot, outgoingShirt, incomingSlot, incomingShirt, incomingActor,
        selectedSlot;
} Substitution;

typedef struct {
    u8 order, reserved01[3];
    s32 kind, preference;
} SubstitutionDetail;

typedef struct {
    void (*update)(void);
    u32 actors;
    s32 kind[2];
    u8 saved[2];
    Substitution change[2];
    u8 reserved22[2];
    SubstitutionDetail details[2];
    u8 reserved3c[0x20c - 0x3c];
    u8 phase, subphase, reserved20e[2];
    s32 timer;
    f32 duration;
} SubstitutionState;

typedef struct {
    u8 incoming, outgoing, side, mode;
    s32 kind;
    u8 otherIncoming, otherOutgoing, otherSide, reserved0b;
} SubstitutionRequest;

typedef struct {
    u16 flags;
    u8 incoming, outgoing, incomingGroup, outgoingGroup, count[2];
} SubstitutionOptions;

/* The option word is shared by the substitution setup and presentation queries. */
enum SubstitutionFlagBit {
    SUBST_SELECTED_BIT = 0,
    SUBST_SIDE_0_PENDING_BIT = 1,
    SUBST_SIDE_1_PENDING_BIT = 2,
    SUBST_KIND_6_BIT = 3,
    SUBST_INCOMING_STATUS_BIT = 4,
    SUBST_INCOMING_UNAVAILABLE_BIT = 5,
    SUBST_HIGH_PRIORITY_BIT = 6,
    SUBST_SIDE_1_BIT = 7,
    SUBST_LEADING_BIT = 8,
    SUBST_OUTGOING_CF0_BIT = 9,
    SUBST_KIND_5_BIT = 10,
    SUBST_OUTGOING_FIRST_BIT = 11,
};
static inline s32 substitutionFlag(u16 flags, s32 bit) { return (flags >> bit) & 1; }
extern SubstitutionState D_00C9A710;
extern SubstitutionOptions *D_003EA764;
typedef char check_substitution_state_size[sizeof(SubstitutionState) == 0x218 ? 1 : -1];
typedef char check_substitution_request_size[sizeof(SubstitutionRequest) == 12 ? 1 : -1];
typedef char check_substitution_options_size[sizeof(SubstitutionOptions) == 8 ? 1 : -1];

#endif
