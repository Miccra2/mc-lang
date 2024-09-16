# mc-lang
A language I develop myself for learning purposes and having fun on coding!

## tools:
- `mcc` mc compiler
- `mcasm` mc assember
- `mclk` mc linker

## token mutations:
```
`TOKEN_NONE`
|\\\_\_`TOKEN_OPERATION` is a group of operations! Example: `+` -> `TOKEN_PLUS`
|\\\_\_`TOKEN_LABEL`
|  |\\\_\_`TOKEN_TYPE`
|  |\\\_\_`TOKEN_STATEMENT`
|  |\\\_\_`TOKEN_VARIABLE`
|  |\\\_\_`TOKEN_FUNCION`
|
 \\\_\_`TOKEN_DIGIT`
   |\\\_\_`TOKEN_INTIGER`
   |\\\_\_`TOKEN_FOLATINGPOINT`
```

## TODO:
- ??.??.?? : ?.?.? [ ] bootstrap in another language to compile into assembly
    - ??.??.?? : ?.?.? [ ] math operations:     `+`, `-`, `*`, `/`, `%`, `**`, `++`, `--`
    - ??.??.?? : ?.?.? [ ] boolean operatinos:  `==`, `<`, `>`, `<=`, `>=`, `&&`, `||`
    - ??.??.?? : ?.?.? [ ] bit operations:      `&`, `|`, `~`, `^`, `<<`, `>>`
    - ??.??.?? : ?.?.? [ ] functions, variables and assignment operations:
                            `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `**=`
                            `&=`, `|=`, `~=`, `^=`, `<<=`, `>>=`
    - ??.??.?? : ?.?.? [ ] condtions:           `if`, `else`, `elif`, `switch`, `case`
    - ??.??.?? : ?.?.? [ ] loops:               `for`, `while`
    - ??.??.?? : ?.?.? [ ] macros:              `macro`
    - ??.??.?? : ?.?.? [ ] types:
        - ??.??.?? : ?.?.? [ ] undefined:       `void`, `NULL`, ...
        - ??.??.?? : ?.?.? [ ] boolean:         `bool`
        - ??.??.?? : ?.?.? [ ] number:
                            `size_t`, `usize_t`,
                            `i8`, `i16`, `i32`, `i64`,
                            `s8`, `s16`, `s32`, `s64`,
                            `u8`, `u16`, `u32`, `u64`,
                            `float`, `double`
        - ??.??.?? : ?.?.? [ ] pointer/array/string:
                            `*`, `[]`, `char`, `str`
        - ??.??.?? : ?.?.? [ ] custom:          `typedef`, `struct`, `union`, `enum`
- ??.??.?? : ?.?.? [ ] rewrite language initself for selfhosting
- ??.??.?? : ?.?.? [ ] support compilation into architecture native machine language
- ??.??.?? : ?.?.? [ ] support compilation into OS sepecific executable format
