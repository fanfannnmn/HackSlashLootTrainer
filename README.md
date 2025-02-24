# Introduction to Video Game Hacking

## Usage
`HSL_Trainer.exe` will automatically attach to Hack Slash Loot's process, so please ensure you launch the game before executing `HSL_Trainer.exe`.

As the menu described, you can change the value for all attributes. These changes will be applied and reflected in the game immediately.

### The Target
We will be focusing on the Windows Demo version of Hack Slash Loot. Keep in mind that values may change when targeting the full version of the game. The majority of the code will work just fine, however you may need to scan for new values using Cheat Engine or your memory scanner of choice.

### The Tools
Will will use Cheat Engine to locate values in memory and assist with reverse engineering. We will be using Microsoft Visual Studio 2022 as our IDE and compiler.

### The Language
We'll be using straight C. C is an exceptional language to start with as we have a lot of control over memory, the ability to easily in-line assembly, access the Windows API, and keep our trainer size extremely small without requiring specific runtimes or third party libraries on the user's system.

### The API
Since we'll be hacking a Windows game, we will be relying heavily on the Windows API to make a lot of the heavy lifting easy on us. Things like memory access, memory protections, process identification, etc. will be handled through the Windows API. Other than that, we will not rely on any third-party libraries for this series.
