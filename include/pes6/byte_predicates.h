#ifndef PES6_BYTE_PREDICATES_H
#define PES6_BYTE_PREDICATES_H

extern int func_00C132C0(void);
extern int func_00C132B0(int);
extern unsigned char D_003E9D50;

/* Preserve the shared predicate's materialized result when inlining callers. */
static inline int pes6_matches_byte_predicate(int index, int kind) {
    return (func_00C132C0() & 0xFF) == kind
        && D_003E9D50 == (func_00C132B0(index) & 0xFF);
}

#endif
