## Operating system:

A set of programs (modules) that cooperate to manage and utilize computer resources effectively. These modules can be classified into two categories: primary and secondary.

### Primary Modules (Kernel)

- **Process Management Module**: Handles process lifecycle (creation, execution, termination). Includes scheduler that determines process execution order using algorithms
- memory managment module: Decides where to load a process in the memory (RAM) and how to keep track of each portion of the memory. It allocates and frees space in the central memory — RAM.
- interupt handler module:Handles interrupts: hardware (e.g., network traffic, keystrokes, mouse, etc), exception (e.g., division by 0, overflow, etc), and system calls (e.g., read and write on I/O devices).
- file managment module: Keeps track of files, their identity, type, how they are stored, and where. Also, how the hard drive is logically structured (file systems: NTFS, FAT16, FAT32, EXT4, etc).

#### secondary modules:

- network module: It implements a list of functions and services, called communication protocols (e.g., TCP/IP protocol suite), to allows inter/inner-computer communication
- drivers: hese are system programs that interface between the operating system and certain hardware devices, e.g., advanced keyboard, network cards, printer, graphical card, etc.
- security managment module: It implements a list of functions and services, called communication protocols (e.g., TCP/IP protocol suite), to allows inter/inner-computer communication
- the shell: is the program that implements the interface of interaction, either as command-line interface (CLI) and/or a graphical user interface (GUI), between the user and the kernel. In the GUI-Shell, users can run programs by clicking and executing them, whereas in CLI-Shell, programs are run by executing commands (e.g., kill -9 pid).

#### services provided by the Operating system to users (programs):

- **User Interface** Could be a Batch Interface [1945-1968], a CLI (Command Line Interface)[1969-] or GUI (Graphical User Interface) [1970-].
- **Program Execution** Programs need to be loaded into the main memory and get executed till completion. The operating system ensures that.
- **I/O Operations** Running programs may require I/O operations, the operating system provides special functions to talk to I/O devices.
- **File System Manipulation** Programs may need to manipulate files. The operating system provides special functions for such manipulations.
- **Communication** Programs may need to communicate with each other, locally (e.g., pipes & shared memory) or remotely. The OS provides special functions to guarantee a safe, secure, and reliable communication.
- **Error Detection** The operating system needs to detect and correct errors when they occur during programs execution (e.g., device failure). For each type of error, the operating system takes the appropriate action.

#### Services provided by the operating system to the users and system itself:

- **Resource Allocation** The operating system ensures that resources are shared in an optimal manner among multiple users and jobs.
- **Accounting** The operating system keeps track of which user uses how much and what kind of resources for accounting and statistics.
- **Protection and Security** The operating system provides certain security services to its users (or processes) to preserve their security and privacy

### The OS Boot Process

1. **Power-On**: When the power button is pressed, the power supply unit (PSU) energizes the motherboard, initiating the boot sequence.

2. **POST (Power-On Self Test)**:

   - Stored in ROM as part of the BIOS/UEFI
   - Performs initial hardware diagnostics
   - Displays status messages during testing

3. **Hardware Verification**:

   - Tests critical components in sequence:
     - Display/screen
     - CPU functionality
     - RAM integrity
     - Input devices (keyboard and mouse)

4. **Bootloader Initialization**:

   - BIOS/UEFI activates the Bootstrap loader
   - Locates the bootloader program (e.g., GRUB in GNU/Linux)
   - Presents boot options in case of multi-OS setup

5. **Kernel Loading**:

   - Bootloader loads the OS kernel into memory
   - Transfers control to the kernel
   - System becomes operational

6. **System Diagnostics**:
   - Bootloader performs hardware state assessment
   - Identifies and initializes connected devices
   - Prepares system for user interaction

Note: Modern systems typically use UEFI (Unified Extensible Firmware Interface) instead of traditional BIOS, offering enhanced features and security.

### OS Types

#### OS Types by program execution

1. **Single-tasking Operating Systems**

   - Basic systems that can run only one program at a time
   - Example: MS-DOS
   - Limited resource utilization

2. **Multiprogramming Operating Systems**

   - Can load multiple programs into RAM simultaneously
   - Improves memory utilization
   - Programs remain resident until completion

3. **Multiprocessing Operating Systems**

   - Utilizes multiple processors or CPU cores
   - Enables true parallel execution
   - Examples: Modern Windows, Linux, macOS

4. **Multithreading Operating Systems**

   - Supports concurrent execution of multiple threads within a process
   - Enhances program efficiency
   - Better resource sharing within applications

5. **Multi-tasking Operating Systems**
   - Enables concurrent execution of multiple programs
   - Uses time-sharing to divide CPU time
   - Provides illusion of simultaneous execution
   - Examples: All modern operating systems

Note: Modern operating systems typically combine multiple types, offering all these capabilities simultaneously.

#### OS Types by Structure and Purpose

1. **Traditional Operating Systems**

   - Used on general-purpose computers (desktops, laptops, servers)
   - Full-featured with comprehensive resource management
   - Examples: Windows, Linux, macOS

2. **Embedded Operating Systems**

   - Used in network devices and smart devices
   - Streamlined OS with specific feature sets
   - Examples: Cisco IOS, RouterOS, Android

3. **Real-Time Operating Systems (RTOS)**

   - Used in specialized devices and industrial equipment
   - Designed for time-critical operations
   - Examples: QNX, VxWorks, FreeRTOS

4. **Firmware Systems**
   - Used in simple electronic devices
   - Basic control functions without OS features
   - Examples: Appliance controllers, simple IoT devices

Note: The distinction between these types can sometimes blur, especially in modern IoT and embedded devices.

#### OS Types from Application Perspective

1. **General-Purpose Operating Systems**

   - Designed for personal computers and workstations
   - Full range of applications and user interfaces
   - Examples: Windows, macOS, Ubuntu

2. **Embedded Operating Systems**

   - Built for specific hardware devices
   - Limited resources and specific functions
   - Examples: Windows IoT, embedded Linux

3. **Real-Time Operating Systems**

   - Designed for time-critical applications
   - Guaranteed response times
   - Examples: QNX, VxWorks, FreeRTOS

4. **Distributed Operating Systems**

   - Manages resources across multiple computers
   - Appears as single unified system
   - Examples: Amoeba, Plan 9

5. **Network Operating Systems**

   - Focuses on network services and connectivity
   - Manages shared resources over networks
   - Examples: Windows Server, Red Hat Enterprise

6. **Mobile Operating Systems**
   - Optimized for portable devices
   - Touch interfaces and power management
   - Examples: Android, iOS, HarmonyOS

Note : ther are some operating system that are realtime and embedded at the same time, like FreeRTOS.
