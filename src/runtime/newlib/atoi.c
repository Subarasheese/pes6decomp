/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/stdlib/atoi.c). */
long func_001C99C8(const char *s, char **ptr, int base);

int atoi(const char *s)
{
    return (int)func_001C99C8(s, 0, 10);
}