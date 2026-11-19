/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef struct { unsigned char a, b, c, hour; } Clock;
void func_00197600(Clock *);

void func_00197760(Clock *c) {
    c->hour++;
    if (c->hour == 24) {
        c->hour = 0;
        func_00197600(c);
    }
}
