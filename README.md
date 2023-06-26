# gosix
code in this repo is golfed c99 using only the c standard library **with no specific platform/target**

utility sources are in the `src` directory, and testing scripts are in the `test` directory

# Building
to build all utilities run
```
make
```

to build a specific utility run
```
make bin/[utility]
```

the compiled utilities will be in the generated `./bin` directory

to `clean` old builds run
```
make clean
```

# formatting
this is a golf project, so any formatting goes as long as it is short.

for in-progress source files newlines/tabs can be used to spread out code, but spaces should be used for necessary whitespace.

i.e
```
return 1;
//----^
```

this allows for an easy formatting fix with
```
sed s/[\t\n]//g
```
and some manual new lines after preprocessing directives.

# TODO
listed below is a (incomplete) list of posix utilities that you can write with the given restrictions that have yet to be implemented.

## doable:
- cksum
- head
- tail
- cal
- more
- nl
- chrontab
- cmp

## technically doable:
- comm
- awk
- vi
- printf
- diff
- patch
- lex
- sh
- sed

## mostly doable (some flags not supported):
- rm (-r flag is impossible)
- grep (-r flag is impossible)
- cp (-r flag is impossible)
- mv (-r flag and can't make/move directories)

# posix standard
https://www.open-std.org/jtc1/sc22/open/n4217.pdf
# list of all posix utilities
https://pubs.opengroup.org/onlinepubs/9699919799/idx/utilities.html
# utitlity defaults
https://pubs.opengroup.org/onlinepubs/9699919799/utilities/V3_chap01.html#tag_17_04
