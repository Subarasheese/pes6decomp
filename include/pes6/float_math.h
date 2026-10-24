#ifndef PES6_FLOAT_MATH_H
#define PES6_FLOAT_MATH_H

#include "types.h"

/* Keep the operand order of the recovered single-precision multiplication. */
static inline f32 pes6_multiply_f32(f32 left, f32 right) {
    return left * right;
}

#endif
