/* compiler: ee-gcc-2.9-O0-as210-G0 */
#include "types.h"

/* RC2 encryption of one 64-bit block. Each 64-bit slot holds two 16-bit words. */

#define ROTATE_LEFT(v, n)                                                                          \
    {                                                                                              \
        t = (v) << (n);                                                                            \
        (v) >>= 16 - (n);                                                                          \
        (v) |= t;                                                                                  \
    }
#define MIX(v, prev, other, next) ((v) += ((prev) & (other)) + (~(prev) & (next)))
#define MIX_FIRST_THREE(k)                                                                         \
    {                                                                                              \
        MIX(a, d, c, b);                                                                           \
        b += schedule[(k) + 1];                                                                    \
        ROTATE_LEFT(a, 1);                                                                         \
        MIX(b, a, d, c);                                                                           \
        c += schedule[(k) + 2];                                                                    \
        ROTATE_LEFT(b, 2);                                                                         \
        MIX(c, b, a, d);                                                                           \
        d += schedule[(k) + 3];                                                                    \
        ROTATE_LEFT(c, 3);                                                                         \
    }
/* Begin adding the next subkey before the last rotation of each inner round. */
#define ENCRYPT_ROUND(k)                                                                           \
    {                                                                                              \
        MIX_FIRST_THREE(k);                                                                        \
        MIX(d, c, b, a);                                                                           \
        a += schedule[(k) + 4];                                                                    \
        ROTATE_LEFT(d, 5);                                                                         \
    }
#define END_ROUND_GROUP(k)                                                                         \
    {                                                                                              \
        MIX_FIRST_THREE(k);                                                                        \
        d += c & b;                                                                                \
        d += ~c & a;                                                                               \
        ROTATE_LEFT(d, 5);                                                                         \
    }
#define MASH()                                                                                     \
    {                                                                                              \
        a += schedule[d & 63];                                                                     \
        b += schedule[a & 63];                                                                     \
        c += schedule[b & 63];                                                                     \
        d += schedule[c & 63];                                                                     \
    }

void func_00BC2220(u64 *block, const u16 *key) {
    u16 t;
    u16 a, b, c, d;
    const u16 *schedule;
    u64 blockWord;

    schedule = key;
    blockWord = block[0];
    a = (u16)blockWord;
    b = (u16)(blockWord >> 16);
    blockWord = block[1];
    c = (u16)blockWord;
    d = (u16)(blockWord >> 16);
    a += schedule[0];
    ENCRYPT_ROUND(0);
    ENCRYPT_ROUND(4);
    ENCRYPT_ROUND(8);
    ENCRYPT_ROUND(12);
    END_ROUND_GROUP(16);
    MASH();

    a += schedule[20];
    ENCRYPT_ROUND(20);
    ENCRYPT_ROUND(24);
    ENCRYPT_ROUND(28);
    ENCRYPT_ROUND(32);
    ENCRYPT_ROUND(36);
    END_ROUND_GROUP(40);
    MASH();

    a += schedule[44];
    ENCRYPT_ROUND(44);
    ENCRYPT_ROUND(48);
    ENCRYPT_ROUND(52);
    ENCRYPT_ROUND(56);
    END_ROUND_GROUP(60);

    block[0] = (u64)a | ((u64)b << 16);
    block[1] = (u64)c | ((u64)d << 16);
}
