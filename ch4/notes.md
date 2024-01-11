# Fundamental Data Types

#### float, double, long douhble

- Floating Point
- number with fractional parts, eg 3.14159

#### bool

- Integral (Boolean)
- true or false
- ex: true

#### char, wchar_t, char8_t, char16_t, char32_t

- Integral (Character)
- single character of text
- ex: 'c'

#### short in, int, long int, long long int

- Integral (Interger)
- positive and negative whole numbers, including 0
- ex: 55

#### std::nullptr_t

- Null Pointer
- a null pointer

#### void

- Void
- no type
- used to indicate functions that do not return values, considered an incomplete type

```
void writeValue(int x)
{
  std::cout << x << '\n';
  // no return statement!
}
```

Other data types that are more complex exist, these are called compound types.

Strings are not fundamental data types in C++, but compound

# \_t

Refers to type

## Object sizes and sizeof operator

Lesson series assumtions:

- A byte is 8bits
- Memory is byte addressable, smallest object is 1byte
- Floating point support IEEE-754 compliant
- 32-bit or 64-bit architecture

therefore:

| Category       | Type           | Minimum Size | Typical Size    |
| -------------- | -------------- | ------------ | --------------- |
| Boolean        | bool           | 1 byte       | 1 byte          |
| Character      | char           | 1 byte       | 1 byte          |
| integer        | short          | 2 bytes      | 2 bytes         |
|                | int            | 2 bytes      | 4 bytes         |
|                | long           | 4 bytes      | 4 or 8 bytes    |
|                | long long      | 8 bytes      | 8 bytes         |
| floating point | float          | 4 bytes      | 4 bytes         |
|                | double         | 8 bytes      | 8 bytes         |
|                | long double    | 8 bytes      | 8, 12, 16 bytes |
| pointer        | std::nullptr+t | 4 bytes      | 4 or 8 bytes    |

## Signed Integers

integers are signed by default in c++, so signed integers can hold both pos and negative numbers

```
short s; // prefer short instead of "short int"
int i;
long l; // prefer "long"
long long ll;
```

Optionally can have a signed keyword

```
signed short ss;
signed int si;
signed long sl;
signed long long sll;
```

#### Prefer shorthand types that do not use int suffix or signed prefix!

| Type                  | Range                                                   |
| --------------------- | ------------------------------------------------------- |
| 8 bit/ 1 byte signed  | -128 to 127                                             |
| 16 bit/ 2 byte signed | -32,768 to 32,767                                       |
| 32 bit/ 4 byte signed | -2,147,483,648 to 2,147,483,647                         |
| 64 bit/ 8 byte signed | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |

### Overflow

if a signed integer, exceeds 2,147,483,647 or the limit of its respective bits, it will result in undefined behavior

This will often result in rolling around to the negative of a signed integer!

If integer division causes a fractional result, C++ will produce an integer result, fractional portions are dropped.

If you want to drop fractional parts of a quotient, use integer division

## Unsigned integers

| Type                  | Range                           |
| --------------------- | ------------------------------- |
| 8 bit/ 1 byte signed  | 0 to 255                        |
| 16 bit/ 2 byte signed | 0 to 65,535                     |
| 32 bit/ 4 byte signed | 0 to 4,294,967,295              |
| 64 bit/ 8 byte signed | 0 to 18,446,744,073,709,551,615 |

### Overflow

If an unsigned value is out of range, it is divided by one greater than the largest number of the type.

If 280 is stored in a 1byte int, it will only store the remainder after division by 256, so 24.
