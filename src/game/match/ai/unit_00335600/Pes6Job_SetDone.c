void Pes6Job_SetDone(int a0) {
    *( signed char *)((char *)a0 + 0x19) = 1;
}
