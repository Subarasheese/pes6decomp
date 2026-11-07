/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef struct { unsigned char a, b, c, hour; } Clock;
void func_002D99E8(Clock *);

void func_002D9B48(Clock *c) {
    c->hour++;
    if (c->hour == 24) {
        c->hour = 0;
        func_002D99E8(c);
    }
}
