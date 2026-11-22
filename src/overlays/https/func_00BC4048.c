/* compiler: ee-gcc-2.9-O0-as210-G0 */
#include "types.h"

/* RC2 decryption of one 64-bit block. Each 64-bit slot holds two 16-bit words. */

#define ROTATE_RIGHT(value, amount)                                                                \
    {                                                                                              \
        t = (value) << (16 - (amount));                                                            \
        (value) >>= (amount);                                                                      \
        (value) |= t;                                                                              \
    }
#define REVERSE_MIX(a, b, c, d, k, s)                                                              \
    {                                                                                              \
        ROTATE_RIGHT(a, s);                                                                        \
        (a) = (a) - schedule[k] - ((b) & (c)) - (~(b) & (d));                                      \
    }
#define REVERSE_ROUND(k)                                                                           \
    {                                                                                              \
        REVERSE_MIX(d, c, b, a, (k) + 3, 5);                                                       \
        REVERSE_MIX(c, b, a, d, (k) + 2, 3);                                                       \
        REVERSE_MIX(b, a, d, c, (k) + 1, 2);                                                       \
        REVERSE_MIX(a, d, c, b, (k), 1);                                                           \
    }
#define REVERSE_MASH()                                                                             \
    {                                                                                              \
        d -= schedule[c & 63];                                                                     \
        c -= schedule[b & 63];                                                                     \
        b -= schedule[a & 63];                                                                     \
        a -= schedule[d & 63];                                                                     \
    }

void func_00BC4048(u64 *block, const u16 *key) {
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
    REVERSE_ROUND(60);
    REVERSE_ROUND(56);
    REVERSE_ROUND(52);
    REVERSE_ROUND(48);
    REVERSE_ROUND(44);
    REVERSE_MASH();

    REVERSE_ROUND(40);
    REVERSE_ROUND(36);
    REVERSE_ROUND(32);
    REVERSE_ROUND(28);
    REVERSE_ROUND(24);
    REVERSE_ROUND(20);
    REVERSE_MASH();

    REVERSE_ROUND(16);
    REVERSE_ROUND(12);
    REVERSE_ROUND(8);
    REVERSE_ROUND(4);
    REVERSE_ROUND(0);

    block[0] = (u64)a | ((u64)b << 16);
    block[1] = (u64)c | ((u64)d << 16);
}
