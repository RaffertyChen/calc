# 簡単な電卓プログラム / Simple Calculator

A simple calculator written in C. Enter two numbers and an operator, and it prints the answer.

C言語で作った簡単な電卓です。2つの数字と演算子を入力すると、計算結果を表示します。

## How it works

The program asks for three things:

1. The first number
2. An operator: `+`, `-`, `*`, or `/`
3. The second number

Then it prints the result.

| Operator | Meaning | Example | Result |
|---|---|---|---|
| `+` | Addition (足し算) | 7 + 2 | 9 |
| `-` | Subtraction (引き算) | 7 - 2 | 5 |
| `*` | Multiplication (掛け算) | 7 * 2 | 14 |
| `/` | Division (割り算) | 7 / 2 | 3 |

- If you enter any other operator, it prints `わかりません` (I don't understand).
- If you try to divide by 0, it prints `0で割ることはできません` instead of crashing.

**Note:** This calculator uses whole numbers (`int`), so division drops the decimal part. `7 / 2` gives `3`, not `3.5`.

## Requirements

- A C compiler (for example `gcc`)
- No extra libraries needed — only the standard `stdio.h`

## How to run

Compile:

```
gcc calculator.c -o calculator
```

Run:

```
./calculator
```

On Windows, run `calculator.exe` instead.

No compiler? Paste the code into an online compiler such as [OnlineGDB](https://www.onlinegdb.com/) and click **Run**.

## Example

```
1番目の数字を入力してください: 12
演算子を入力してください(+,-,/,*): *
2番目の数字を入力してください: 3
36
```

## What I learned

- Reading numbers and characters with `scanf`
- Why `scanf(" %c")` needs a space before `%c` (to skip the leftover Enter key)
- Using `switch` / `case` to choose what to do
- Checking for division by zero before dividing
