# gosix
golfed posix (utilities)
code in this repo is golfed c99 using only the c standard library **with no specific platform/target**

utility sources are in the `src` directory
testing scripts are in the `test` directory

# Building
to build all utilities run
```
make
```

to build a specific utility run
```
make src/[utility]
```

the compiled utilities will be in the generated `./bin` directory

# TODO
listed below is a (incomplete) list of posix utilities that you can write with the given restrictions, that have yet to be implemented.

list of doable posix utilities:
- cksum
- cp
- mv
- mkdir
- rm
- sed
- head
- tail
- cal
- more
- nl
- chrontab
- cat

technically doable:
- c99
- fort77
- awk
- vi
- grep
- printf
- find
- diff
- patch
- lex
- sh

# posix standard
https://www.open-std.org/jtc1/sc22/open/n4217.pdf
