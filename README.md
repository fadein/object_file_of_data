# object_file_of_data
Demonstration of an object file containing static data which may be linked and re-linked to code objects

The code portions of this program (main.c and mystruct.c) are separate from the read-only data (data.c). After the static data is updated (by an external script, for example) the whole application isn't re-compiled. All that is needed is to recompile data.c; then all of the object files may be linked together again.

## Usage
```
make
./main

vim data.c
make
./main
```
