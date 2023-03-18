## 0x18. C - Dynamic libraries
# Creating your own Dynamic library
* Create your .c file/s to hold function definitions


* Compile all .c file/s to get its equivelent object file this way
        `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fpic -c *.c`

* Now create the shared library
`gcc -shared *.o -o lib<libraryname>.so`

* Create an environmental variable so that the resolver can quickly locate the libray. you do
`export LD_LIBRARY_PATH=$PWD`
