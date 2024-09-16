# mc-lang
A language I develop myself for learning purposes and having fun on coding!

## tools:
- `mcc` mc compiler
- `mcasm` mc assember
- `mclk` mc linker

## token mutations:
```
`TOKEN_NONE` or other than self/mutation of self
|\__`TOKEN_OPERATION` is a group of operations! Example: `+` -> `TOKEN_PLUS`
|\__`TOKEN_LABEL`
|   |\__`TOKEN_TYPE`
|   |\__`TOKEN_STATEMENT`
|   |\__`TOKEN_VARIABLE`
|    \__`TOKEN_FUNCION`
|
 \__`TOKEN_DIGIT`
    |\__`TOKEN_INTIGER`
     \__`TOKEN_FOLATINGPOINT`
```

## TODO:
- ??.??.?? : v?.?.? [ ] bootstrap in another language to compile into assembly
    - ??.??.?? : v?.?.? [ ] math operations:     `+`, `-`, `*`, `/`, `%`, `**`, `++`, `--`
    - ??.??.?? : v?.?.? [ ] boolean operatinos:  `==`, `<`, `>`, `<=`, `>=`, `&&`, `||`
    - ??.??.?? : v?.?.? [ ] bit operations:      `&`, `|`, `~`, `^`, `<<`, `>>`
    - ??.??.?? : v?.?.? [ ] functions, variables and assignment operations:
                            `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `**=`
                            `&=`, `|=`, `~=`, `^=`, `<<=`, `>>=`
    - ??.??.?? : v?.?.? [ ] condtions:           `if`, `else`, `elif`, `switch`, `case`
    - ??.??.?? : v?.?.? [ ] loops:               `for`, `while`
    - ??.??.?? : v?.?.? [ ] macros:              `macro`
    - ??.??.?? : v?.?.? [ ] types:
        - ??.??.?? : v?.?.? [ ] undefined:       `void`, `NULL`, ...
        - ??.??.?? : v?.?.? [ ] boolean:         `bool`
        - ??.??.?? : v?.?.? [ ] number:
                            `size_t`, `usize_t`,
                            `i8`, `i16`, `i32`, `i64`,
                            `s8`, `s16`, `s32`, `s64`,
                            `u8`, `u16`, `u32`, `u64`,
                            `float`, `double`
        - ??.??.?? : v?.?.? [ ] pointer/array/string:
                            `*`, `[]`, `char`, `str`
        - ??.??.?? : v?.?.? [ ] custom:          `typedef`, `struct`, `union`, `enum`
- ??.??.?? : v?.?.? [ ] rewrite language initself for selfhosting
- ??.??.?? : v?.?.? [ ] support compilation into architecture native machine language
- ??.??.?? : v?.?.? [ ] support compilation into OS sepecific executable format
