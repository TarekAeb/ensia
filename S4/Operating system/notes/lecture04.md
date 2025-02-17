# Context-Switching

is the mechanism that allows the kernel (Operating system) to :

1. Save the context of the current process into its PCB (so that the system doesn't lose track of the process)
2. Load the context of the next process from its PCB (so that the system can start executing the next process)

This mechanism allows the following:

1. it increases the CPU throughput (number of processes executed at a time)
2. increases the cpu response time
3. prevents some processes from hogging on the CPU for a long time
4. it allows high priority processes to be executed first

## Interrupts with context switching
